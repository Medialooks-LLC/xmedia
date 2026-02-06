#pragma once

#include "functions/commands_functions.h"
#include "functions/common_helpers.h"
#include "functions/container_functions.h"
#include "functions/factory_functions.h"
#include "functions/format_functions.h"
#include "functions/frame_functions.h"
#include "functions/links_functions.h"
#include "functions/mixer_functions.h"
#include "functions/overlay_functions.h"
#include "functions/player_functions.h"
#include "functions/playlist_functions.h"
#include "functions/scheme_functions.h"
#include "functions/time_functions.h"
#include "functions/tonode_functions.h"
#include "functions/tostring_functions.h"
#include "functions/writer_functions.h"

#include "xmedia_errors.h"
#include "xmedia_interfaces.h"
#include "xmedia_structures.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <variant>
#include <vector>

namespace xsdk {

// TODO: Move functions to specifiic headers
namespace xmedia {

    /// @brief Logging levels enum
    enum class LogLevel {
        /**
         * Print no output.
         */
        kQuiet = -8,

        /**
         * Something went really wrong and we will crash now.
         */
        kPanic = 0,

        /**
         * Something went wrong and recovery is not possible.
         * For example, no header was found for a format which depends
         * on headers or an illegal combination of parameters is used.
         */
        kFatal = 8,

        /**
         * Something went wrong and cannot losslessly be recovered.
         * However, not all future data is affected.
         */
        kError = 16,

        /**
         * Something somehow does not look correct. This may or may not
         * lead to problems. An example would be the use of '-vstrict -2'.
         */
        kWarning = 24,

        /**
         * Standard information.
         */
        kInfo = 32,

        /**
         * Detailed information.
         */
        kVerbose = 40,

        /**
         * Stuff which is only useful for libav* developers.
         */
        kDebug = 48,

        /**
         * Extremely verbose debugging, useful for libav* development.
         */
        kTrace = 56,
    };
    /**
     * @brief Sets the logging level for the xmedia library.
     * This function sets the logging level for the Xmedia library. The logging level
     * is then passed to FFmpeg library for configuring its logging behavior.
     *
     * @param _level The desired log level.
     */
    void LogLevelSet(LogLevel _level);

    /**
     * @brief  Retrieves the specified media data from an IMediaHandler instance.
     * @tparam TInterface The type of the media data to be cast to.
     * @param _media_output_p The IMediaOutput instance to retrieve the media data from.
     * @param _stream_uid An optional output stream uid of the IMediaHandler specifying which one will be used to get
     * media data.
     * @param _hints The optional hints/properties to be used for the retrieval process.
     * @return Returns an XResult with a shared pointer to the retrieved media data if successful,
     *         or an error if getting fails.
     */
    template <typename TInterface>
    xbase::XResult<std::shared_ptr<const TInterface>> MediaGet(IMediaOutput*                   _media_output_p,
                                                               const std::optional<xbase::Uid> _stream_uid = {},
                                                               const INode::SPtrC&             _hints      = {})
    {
        if (!_media_output_p)
            return XError::NullPointer;

        auto get_xr = _media_output_p->MediaGet(_stream_uid, _hints);
        if (get_xr.HasError())
            return get_xr.Error();

        auto interface_sp = xobject::PtrQuery<const TInterface>(get_xr.Result().get());
        if (interface_sp)
            return interface_sp;

        if (get_xr.Result())
            return XError::InvalidCast;

        return nullptr;
    }

    /**
     * @brief Template function to get a vector of media data from a given IMediaHandler object.
     * @tparam TInterface The type of the media data to be cast to.
     * @param _media_output_p The IMediaOutput instance to retrieve the media data from.
     * @param _stream_uid An optional output stream uid of the IMediaHandler specifying which one will be used to get
     * media data.
     * @param _hints  The optional hints/properties to be used for the retrieval process.
     * @param _max_size The maximum number of media data to be stored in the returned vector.
     * @return A XResult<std::vector<std::shared_ptr<TInterface>>> representing the outcome of the MediaGetVec() call.
     *         - XError<std::string> if an error occurred.
     *         - A vector of shared_ptr<TInterface> on success.
     * @return Returns an XResult with a vector of the retrieved media data if successful,
     *         or an error if getting fails.
     */
    template <typename TInterface>
    xbase::XResult<std::vector<std::shared_ptr<const TInterface>>> MediaGetVec(
        IMediaOutput*                   _media_output_p,
        const std::optional<xbase::Uid> _stream_uid  = {},
        const INode::SPtrC&             _first_hints = {},
        size_t                          _max_size    = 128)
    {
        if (!_media_output_p)
            return XError::NullPointer;

        auto first_hints = _first_hints;

        std::vector<std::shared_ptr<const TInterface>> media_vec;
        while (media_vec.size() < _max_size) {
            auto get_xr = _media_output_p->MediaGet(_stream_uid, first_hints);
            if (get_xr.Result()) {
                auto interface_sp = xobject::PtrQuery<const TInterface>(get_xr.GetPtr());
                if (!interface_sp)
                    return XError::InvalidCast;

                media_vec.push_back(std::move(interface_sp));
                first_hints.reset();
                continue;
            }

            if (media_vec.empty())
                return get_xr.Error();

            break;
        }

        return media_vec;
    }

    /**
     * @brief Reuest media from each stream, request and wait if no stream media - for work with stream buffer, nit
     * suitable for durect demux
     */
    [[deprecated("Use MediaGetForAllStreamsEx instead")]]
    std::vector<xbase::XResult<IMediaUnit::SPtrC>> MediaGetForAllStreams(
        IMediaOutput* const              _output_p,
        const bool                       _remove_from_buffer,
        const std::optional<uint32_t>    _timeout_for_each_msec = {},
        const std::optional<XObjectType> _obj_type              = {});

    /**
     * @brief Get media from handler while not taken for all A/V streams, or for specified object type (e.g. for audio
     * only use _obj_types_mask XObjectType::Audio)
     *
     * Return: updated output units vec and non-taken av streams count
     */
    [[deprecated("Use MediaGetForAllStreamsEx instead")]]
    xbase::XResult<std::pair<MediaUnitsVec, size_t>> MediaGetForAllStreamsVec(
        const bool                       _take_till_eos,
        IMediaOutput* const              _output_p,
        const std::optional<XObjectType> _obj_types_mask = {});

    /**
     * @brief Get media from handler while not taken for all A/V streams (or specified streams types), optionally for
     * desired pos or EOS (e.g. for audio only use _obj_types_mask XObjectType::Audio)
     *
     * Return: map of streams uids to stream units vector, if unints not taken for one of A/V streams -> added empty
     * MediaUnitsVec for this stream uid
     */
    xbase::XResult<std::map<xbase::Uid, MediaUnitsVec>> MediaGetForAllStreamsEx(
        IMediaOutput* const                   _output_p,
        const std::optional<double>           _pos_sec                 = {},
        const std::optional<XObjectType>      _obj_types_mask          = {},
        const size_t                          _min_units_per_av_stream = 1,
        std::map<xbase::Uid, MediaUnitsVec>&& _add_to                  = {});

    // 2Think: replace bt ToString?
    /**
     * @brief Return the name of a state of a media handler.
     * @param _state The state of the media handler.
     * @return The name of the state as std::string_view.
     */
    std::string_view StateName(const IMediaHandler::State _state);
    /**
     * @brief Get the stream information of the media object.
     * @param _object_p The media object to check.
     * @return The index of the stream if it exists.
     */
    const XStreamInfo* StreamInfo(const IMediaObject* _object_p);
    /**
     * @brief Return Format for a given packet or frame.
     * @param _packet_or_frame Pointer to the packet or frame.
     */
    const XFormat* Format(const IMediaObject* _packet_or_frame);
    /**
     * @brief Return the index of a stream associated with a media object.
     * @param _object_p The media object to check.
     * @return The index of the stream if it exists.
     */
    std::optional<uint32_t> StreamIdx(const IMediaObject* _object_p);
    /**
     * @brief Return the name of a stream associated with a media object or generate a new unique stream name
     * @param _object_p The media object to check.
     * @return The name of the stream if it exists.
     */
    std::pair<std::string, bool> StreamName(const IMediaObject* _object_p, const bool _use_generated_name);
    /**
     * @brief Generate a new unique stream name.
     * @param _object_p The media object.
     * @return The name of the stream if it exists.
     */
    std::string StreamNameGen(const IMediaObject* _object_p);
    /**
     * @brief Return string representation of stream type (e.g. kVideo, kAudio, kSubtitles)
     * @param _object_type The object type.
     * @param _value_for_unknown_type - value for return if type is unknown.
     * @return The name of the object type if it exists.
     */
    std::string_view StreamMediaName(const XObjectType      _object_type,
                                     const std::string_view _value_for_unknown_type = {});

    /**
     * @brief Check if it's the end of a stream mark for a given packet or frame.
     * @param _packet_or_frame Pointer to the packet or frame.
     * @return true if this packet or frame is the end of the stream. If the media object is neither a packet nor a
     * frame, false is returned.
     */
    bool IsEndOfStream(const IMediaObject* _packet_or_frame, const bool _value_for_null);
    /**
     * @brief Check if the given packet or frame is duplicated.
     * @param _packet_or_frame Pointer to the packet or frame.
     * @return true if this packet or frame is the end of the stream. If the media object is neither a packet nor a
     * frame, false is returned.
     */
    bool IsDuplicated(const IMediaObject* _packet_or_frame, const bool _value_for_null);

    /**
     * @brief Check if it's the stream information unit for a given object.
     * @param _packet_or_frame Pointer to the packet or frame.
     * @return true if this packet or frame is the stream information. If the media object is neither a packet nor a
     * frame, false is returned.
     */
    bool IsStreamInfo(const IMediaObject* _packet_or_frame, const bool _value_for_null);

    /**
     * @brief Creating a new media object from a given packet or frame with the end-of-stream flag added.
     * @param pointer for base _packet_or_frame.
     * @return cloned frame with eos flag.
     */
    IMediaUnit::SPtrC MakeEndOfStream(const IMediaObject* _packet_or_frame);

    /**
     * @brief Creating a new media object from a given packet or frame with the end-of-stream flag added.
     * @param _packet_or_frame Pointer to the packet or frame.
     * @return true if this packet or frame is the end of the stream. If the media object is neither a packet nor a
     * frame, std::nullopt is returned.
     */
    template <typename TInterface>
    std::shared_ptr<const TInterface> MakeEndOfStreamT(const IMediaObject* _packet_or_frame)
    {
        auto eos_media = MakeEndOfStream(_packet_or_frame);
        if (!eos_media)
            return nullptr;

        return xobject::PtrQuery<TInterface>(eos_media.get());
    }

    /**
     * @brief Creating a new media object from a given packet with the duplicated flag added and next time or
     * specified eos time
     * @param _frame Pointer to the base (or eos) frame.
     * @param _dup_index Optional index for eos frame (from base frame).
     * @return cloned frame with eos flag and correct times.
     */
    std::pair<IMediaUnit::SPtrC, xtime::SegmentPos> MakeNextDupFrame(const IMediaUnit::SPtrC&    _frame,
                                                                     const std::optional<size_t> _dup_index = {});

    /**
     * @brief Compare two media formats of media objects by their properties.
     * @param _left_p The first media object.
     * @param _right_p The second media object.
     *
     * @return 0 if media formats are equal.
     */
    int32_t CompareFormats(const IMediaUnit* _left_p, const IMediaUnit* _right_p);
    /**
     * @brief Return the program UID of a media object.
     * @param _media_p The media object.
     * @param _prog_index Index of the program within the media object.
     * @return The program UID if possible else std::nullopt.
     */
    std::optional<uint64_t> ProgramUid(const IMediaUnit* _media_p, size_t _prog_index = 0);

    /**
     * @brief Return the vector of IMediaUnit::SPtrC from IMediaUnit::SPtrC vector.
     * @param _streams_props IMediaUnit::SPtrC vector.
     * @param _append_to optional IMediaUnit::SPtrC vector for append taken props
     * @return The vector of IMediaUnit::SPtrC.
     */
    MediaUnitsVec MediaUnitsVecMake(const MediaUnitsVec& _streams_props, MediaUnitsVec&& _append_to = {});

    /**
     * @brief Finds the first media unit with the specified stream UID in the vector.
     *
     * @param _streams_props Vector of media units to search in.
     * @param _stream_uid    UID of the stream to find.
     *
     * @return A pair containing a pointer to the found media unit and its index,
     *         or {nullptr, xbase::npos} if not found.
     */
    std::pair<IMediaUnit::SPtrC, size_t> MediaUnitsVecFind(const MediaUnitsVec& _streams_props,
                                                           const xbase::Uid     _stream_uid);

    /**
     * @brief Adds or replaces a media unit in the vector by its stream UID.
     *
     * @param _streams_props   Vector of media units to modify.
     * @param _media_unit      Media unit to add or replace with.
     * @param _replace_existed Whether to replace an existing unit if found.
     *
     * @return true if the operation succeeded, false otherwise.
     */
    bool MediaUnitsVecAdd(MediaUnitsVec&           _streams_props,
                          const IMediaUnit::SPtrC& _media_unit,
                          const bool               _replace_existed);

    /**
     * @brief Merge two media units vectors by its stream UID.
     *
     * @param _dest   Vector of media units to modify.
     * @param _src    Vector of media units to add.
     * @param _replace_existed Whether to replace an existing unit if found.
     *
     * @return number of added or modified units.
     */
    size_t MediaUnitsVecMerge(MediaUnitsVec& _dest, const MediaUnitsVec& _src, const bool _replace_existed);

    /**
     * @brief Filter media units vector by predicate
     */
    std::vector<IMediaUnit::SPtrC> MediaUnitsVecFilter(const MediaUnitsVec&                     _media_units,
                                                       std::function<bool(const IMediaUnit*)>&& _predicate);

    /**
     * @brief Return set of stream uid of media units vector
     */
    std::set<xbase::Uid> MediaUnitsVecUids(const MediaUnitsVec&             _media_units,
                                           const std::optional<XObjectType> _unit_type = {});

    /**
     * @brief Return master stream (first video or audio if no video) stream uid
     */
    std::optional<xbase::Uid> MasterStreamFind(const MediaUnitsVec& _streams);

    /**
     * @brief Return codec props from media props or media packet object
     */
    const XCodec* CodecProps(const IMediaObject* _obj, const bool _null_for_not_packet = false);

    /**
     * @brief Return video frame rate from media frame or packet object
     */
    std::optional<XRational> FrameRate(const IMediaUnit* _unit_p);

    /**
     * @brief Return number of audio samples and frame rate from audio media frame, std::nullopt if not audio frame
     */
    std::optional<std::pair<size_t, uint32_t>> AudioSamplesAndRate(const IMediaUnit* _unit_p);

    /**
     * @brief Return frame or packet start time
     */
    std::optional<xbase::Time64> StartTime(const IMediaUnit* _unit_p);
    /**
     * @brief Return frame or packet end time (for frame aligned by frame rate or audio data size), for
     * _number_of_frames is zero, only duration used, for 1 and more frame-rate/audio data size used
     */
    std::optional<xbase::Time64> EndTime(const IMediaUnit* _unit_p, const size_t _number_of_frames = 1);
    /**
     * @brief Return frame or packet duration (by frame rate or audio data size)
     */
    std::optional<double> DurationMsec(const IMediaUnit* _unit_p, const IMediaUnit* _prev_unit_p = nullptr);

    struct UnitDurations {
        double estimated_msec = 0; ///< Use most often duration
        double avg_msec       = 0; ///< Average
        double min_msec       = 0; ///< Minimum
        double max_msec       = 0; ///< Maximum
        size_t valid_units    = 0; ///< Number of used units
    };

    /**
     * @brief Calculate unit duration from bunch of frames ot packets (by frame rate or audio data size)
     */
    UnitDurations UnitDurationMsec(const MediaUnitsVec& _units);

    /**
     * @brief Start output from handler to callback
     */
    std::error_code OutputStart(IMediaHandler* const           _handler_p,
                                ILink::OnDataPF&&              _on_data_pf,
                                const xbase::IScheduler::SPtr& _custom_scheduler = nullptr);

    /**
     * @brief Start output from handler for audio, video, sub(and aux) callback
     */
    std::error_code OutputStartAV(IMediaHandler* const           _handler_p,
                                  ILink::OnDataPF&&              _on_video_pf,
                                  ILink::OnDataPF&&              _on_audio_pf      = {},
                                  ILink::OnDataPF&&              _on_other_pf      = {},
                                  const xbase::IScheduler::SPtr& _custom_scheduler = nullptr);

} // namespace xmedia

/**
 * @brief The xrational namespace provides the functionalities for working with XRational objects.
 */
namespace xrational {
    /**
     * @brief Checks if a given rational number is valid.
     * @param _rat The rational number to check.
     * @param _zero_is_valid A flag indicating whether zero is considered valid.
     *
     * @return true if the given optional rational number has a value, and its denominator is not zero
     *            or zero_is_valid is true. Otherwise, false is returned.
     */
    bool IsValid(const std::optional<XRational>& _rat, bool _zero_is_valid);
    /**
     * @brief Converts an rational number to a double value.
     * @param _rat The rational number to convert.
     * @param _default The default value to return if the optional rational number is empty or its value is zero.
     * @param _zero_is_valid A flag indicating whether zero is considered valid.
     *
     * @return The double value equivalent to the given optional rational number, or _default if the optional rational
     * number is empty or its value is zero.
     */
    double ToDouble(const std::optional<XRational>& _rat, double _default = 0.0, bool _zero_is_valid = true);
    /**
     * @brief Compares two rational numbers with some precision.
     * @param _left: The first rational number to compare.
     * @param _right: The second rational number to compare.
     * @param _precision: The precision threshold for deciding equality.
     *
     * @return The result of the comparison: 1 if _left is less than _right, -1 if _left is greater than _right, and 0
     * if _left is equal to _right.
     */
    int32_t Compare(const std::optional<XRational>& _left,
                    const std::optional<XRational>& _right,
                    double                          _precision = 0.001);

    XRational MakeWithReduce(const int64_t _num, const int64_t _den);
    // double  Value(const std::optional<XRational>& _val, double _default_val = 0.0);
} // namespace xrational

namespace xoptions {

    std::string OpenURL(const IMediaHandler::InitParamsVariant& _init_url_or_func, const INode::SPtrC& _options);
    std::optional<Media>                MediaForOpen(const IMediaHandler::InitParamsVariant& _init_url_or_func,
                                                     const INode::SPtrC&                     _options);
    std::pair<std::string, std::string> DeviceClassAndName(std::string_view _open_url, const INode::SPtrC& _options);
} // namespace xoptions

namespace xside_data {

    template <typename TSideData, typename TType>
    std::vector<TSideData> Filtering(const std::vector<TSideData>& _side_data, const TType _sd_type)
    {
        std::vector<TSideData> filtered;
        for (const auto& sd : _side_data)
            if (sd.type == _sd_type)
                filtered.push_back(sd);

        return filtered;
    }
} // namespace xside_data

} // namespace xsdk
