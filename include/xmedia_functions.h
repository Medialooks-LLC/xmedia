#pragma once

#include "functions/commands_functions.h"
#include "functions/container_functions.h"
#include "functions/factory_functions.h"
#include "functions/format_functions.h"
#include "functions/frame_functions.h"
#include "functions/links_functions.h"
#include "functions/playlist_functions.h"
#include "functions/scheme_functions.h"
#include "functions/time_functions.h"
#include "functions/tostring_functions.h"

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
     * @param _handler_p The IMediaHandler instance to retrieve the media data from.
     * @param _output_idx An optional output index of the IMediaHandler specifying which one will be used to get media
     * data.
     * @param _hints The optional hints/properties to be used for the retrieval process.
     * @return Returns an XResult with a shared pointer to the retrieved media data if successful,
     *         or an error if getting fails.
     */
    template <typename TInterface>
    xbase::XResult<std::shared_ptr<const TInterface>> MediaGet(IMediaHandler*               _handler_p,
                                                               const std::optional<size_t>& _output_idx = std::nullopt,
                                                               const INode::SPtrC&          _hints      = nullptr)
    {
        if (!_handler_p)
            return XError::NullPointer;

        auto get_xr = _handler_p->MediaGet(_output_idx, _hints);
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
     * @param _handler_p The IMediaHandler instance to retrieve the media data from.
     * @param _output_idx An optional output index of the IMediaHandler specifying which one will be used to get media
     * data.
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
        IMediaHandler*               _handler_p,
        const std::optional<size_t>& _output_idx  = std::nullopt,
        const INode::SPtrC&          _first_hints = nullptr,
        size_t                       _max_size    = 128)
    {
        if (!_handler_p)
            return XError::NullPointer;

        auto first_hints = _first_hints;

        std::vector<std::shared_ptr<const TInterface>> media_vec;
        while (media_vec.size() < _max_size) {
            auto get_xr = _handler_p->MediaGet(_output_idx, first_hints);
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
    // 2Think: replace bt ToString?
    /**
     * @brief Return the name of a state of a media handler.
     * @param _state The state of the media handler.
     * @return The name of the state as std::string_view.
     */
    std::string_view StateName(const IMediaHandler::State _state);
    /**
     * @brief Return the index of a stream associated with a media object.
     * @param _object_p The media object to check.
     * @return The index of the stream if it exists.
     */
    std::optional<uint32_t> StreamIdx(const IMediaObject* _object_p);
    /**
     * @brief Return the name of a stream associated with a media object.
     * @param _object_p The media object to check.
     * @return The name of the stream if it exists.
     */
    std::string StreamName(const IMediaObject* _object_p);
    /**
     * @brief Check if the end of a stream has been reached for a given packet or frame.
     * @param _packet_or_frame Pointer to the packet or frame.
     * @return true if this packet or frame is the end of the stream. If the media object is neither a packet nor a
     * frame, std::nullopt is returned.
     */
    std::optional<bool> IsEndOfStream(const IMediaObject* _packet_or_frame);

    /**
     * @brief Compare two media formats of media objects by their properties.
     * @param _left_p The first media object.
     * @param _right_p The second media object.
     *
     * @return 0 if media formats are equal.
     */
    int32_t CompareFormats(const IMediaProps* _left_p, const IMediaProps* _right_p);
    /**
     * @brief Return the program UID of a media object.
     * @param _media_p The media object.
     * @param _prog_index Index of the program within the media object.
     * @return The program UID if possible else std::nullopt.
     */
    std::optional<uint64_t> ProgramUid(const IMediaProps* _media_p, size_t _prog_index = 0);

    /**
     * @brief Return the vector of IMediaProps::SPtrC from IMediaHandler::StreamProps vector.
     * @param _streams_props IMediaHandler::StreamProps vector.
     * @param _append_to optional IMediaHandler::StreamProps vector for append taken props
     * @return The vector of IMediaProps::SPtrC.
     */
    MediaPropsVec MediaPropsVecMake(const std::vector<IMediaHandler::StreamProps>& _streams_props,
                                    MediaPropsVec&&                                _append_to = {});

    /**
     * @brief Return the vector of IMediaHandler::StreamProps from IMediaProps::SPtrC vector, name generated
     * as _prefix + xmedia::StreamName(props)
     * @param _media_props IMediaProps::SPtrC vector.
     * @param _prefix optional string for add as prefix for stream name.
     * @param _append_to optional IMediaHandler::StreamProps vector for append taken props
     * @return The vector of IMediaHandler::StreamProps.
     */
    std::vector<IMediaHandler::StreamProps> StreamPropsVecMake(
        const MediaPropsVec&                      _media_props,
        const std::string_view                    _prefix    = {},
        std::vector<IMediaHandler::StreamProps>&& _append_to = {});

    /**
     * @brief Return codec props from media props or media packet object
     */
    const XCodec* CodecProps(const IMediaObject* _obj);

    /**
     * @brief Start output from handler to callback
     */
    std::error_code OutputStart(IMediaHandler* const _handler_p, ILink::OnDataPF&& _on_data_pf);

    /**
     * @brief Start output from handler for audio, video, sub(and aux) callback
     */
    std::error_code OutputStartAV(IMediaHandler* const _handler_p,
                                  ILink::OnDataPF&&    _on_video_pf,
                                  ILink::OnDataPF&&    _on_audio_pf = {},
                                  ILink::OnDataPF&&    _on_other_pf = {});

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
    // double  Value(const std::optional<XRational>& _val, double _default_val = 0.0);
} // namespace xrational

namespace xoptions {

    std::pair<std::string, std::string> DeviceClassAndName(std::string_view _open_url, const INode::SPtrC& _options);
} // namespace xoptions

} // namespace xsdk
