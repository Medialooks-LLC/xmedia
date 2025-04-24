#pragma once

#include "xmedia_enums.h"

#include "xbase.h"
#include "xnode.h"

#include "constants/av_codec_ids.h"
#include "constants/av_constants.h"
#include "constants/av_pixel_formats.h"
#include "constants/av_sample_formats.h"

#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace xsdk {
/// @brief Struct representing a rational number with integer numerator and denominator.
struct XRational {
    int32_t num = 0;
    int32_t den = 0;
};

/// @brief Struct representing a size with integer width and height.
struct XSize {
    int32_t cx = 0;
    int32_t cy = 0;
};

/// @brief Struct representing a rectangle with integer coordinates for left, top, right and bottom.
struct XRect {
    int32_t left   = 0;
    int32_t top    = 0;
    int32_t right  = 0;
    int32_t bottom = 0;
};

/// @brief Struct representing a rectangle with double coordinates for left, top, right and bottom.
struct XRectD {
    double left   = 0;
    double top    = 0;
    double right  = 0;
    double bottom = 0;
};

/// @brief Enum representing different timecode types: LTC and VITC.
enum class TimecodeType {
    /// @brief LTC (Longitudinal Timecode)
    kLTC,
    /// @brief VITC (Vertical Interval Timecode)
    kVITC
};

/**
 * @brief Struct XTimecode represents timecode information.
 * This struct holds timecode information including hours, minutes, seconds, frames, drop frame flag, and optional
 * timecode type.
 */
struct XTimecode {
    uint16_t                    hours      = 0;
    uint16_t                    minutes    = 0;
    uint16_t                    seconds    = 0;
    uint16_t                    frames     = 0;
    bool                        drop_frame = false;
    std::optional<TimecodeType> type;
};

/**
 * @brief Struct XSegment represents media segment information.
 */
struct XSegment {
    /// @brief Optional media segment start time (in Time64 !!!)
    std::optional<xbase::Time64> segment_start;
    /// @brief Optional media segment end time (in Time64 !!!)
    std::optional<xbase::Time64> segment_end;
};

/**
 * @brief Struct XTime represents media time information.
 * This struct holds media time information including timestamp, duration, segment start, timebase, and optional
 * timecode.
 */
struct XTime {
    /// @brief 64-bit media timestamp
    // - for frames is's presentation timestamp
    // - for packets this is decode timestamp, pts could be obtained via Packet::pts_offset in 'extra' member
    int64_t timestamp = 0;
    /// @brief Optional media timebase
    /// @note If not set, 1/10'000'000 timescale used (xbase::Time64 units)
    std::optional<XRational> timebase;
    /// @brief Optional media duration (same timebase as timestamp)
    std::optional<int64_t> duration;
    /// @brief Playing media segment information (in xbase::Time64 units)
    XSegment segment;
    /// @brief Optional media segment start time (in Time64 !!!)
    // std::optional<xbase::Time64> segment_start;
    /// @brief Optional media segment end time (in Time64 !!!)
    // std::optional<xbase::Time64> segment_end;
    /// @brief Optional media rate control type
    std::optional<RateControl> rc_type;

    /// @brief Media packet information, if struct XTime is representing a packet
    struct Packet {
        /// @brief Packet flags
        PacketFlags pkt_flags = PacketFlags::None; // AV_PKT_FLAG_xxx map
        /// @brief Packet PTS offset
        int64_t pts_offset = 0;
    };

    /// @brief Media frame information, if struct XTime is representing a frame
    struct Frame {
        /// @brief Picture type
        PictureType picture_type = PictureType::None; // AV_PICTURE_TYPE_xxx map
        /// @brief Extra counter used for duplicated eos and paused frames (started from 1)
        int64_t dup_counter = 0;
    };

    /// @brief Extra information, can be either Packet or Frame
    std::variant<std::monostate, Packet, Frame> extra;

    /// @brief Media timecode information, optional
    std::vector<XTimecode> timecodes;
};

/// @brief Struct holding information about multimedia stream
struct XStreamInfo {
    /// @brief stream name
    std::string stream_name;
    /// @brief Optional metadata of the stream.
    INode::SPtrC stream_metadata;
    /// @brief Unique identifier of the original stream.
    std::optional<uint64_t> original_stream_uid; ///< const ?
    /// @brief Optional source stream index.
    std::optional<uint32_t> stream_idx;
    /// @brief Optional source stream PID. Usually MPEG-TS PID.
    std::optional<uint32_t> stream_pid;
    /// @brief Optional start time of the stream.
    std::optional<int64_t> start_time;
    /// @brief Optional duration of the stream.
    std::optional<int64_t> duration;
    /// @brief Optional number of frames in the stream.
    std::optional<int64_t> frames_num;
    /// @brief Optional timebase for the stream.
    /// @note If not set, 1/10'000'000 timescale used (xbase::Time64 units)
    std::optional<XRational> stream_timebase; // 2Think: Remove for do not have two timebases
    /// @brief Optional clock of the stream.
    xbase::IClock::SPtrC stream_clock;
};
/**
 * @brief Struct representation of side-data packet.
 * This struct is used to define a side-data packet which can contain different types of side-data.
 */
struct XSideData {
    /// @brief Type of side-data.
    SideDataType type = SideDataType::EMPTY;
    /// @brief Blob containing side-data.
    xbase::XBufferC data_blob;
};

/**
 * @brief Struct representation of side-data frame.
 * This struct is used to define a side-data frame which can contain side-data and metadata.
 */
struct XFrameSideData {
    /// @brief Type of side-data frame.
    FrameSideDataType type = FrameSideDataType::EMPTY;
    /// @brief Blob containing side-data.
    xbase::XBufferC data_blob;
    /// @brief Metadata associated with the side-data frame.
    INode::SPtrC metadata;
};

/**
 * @brief Represents an audio or video codec.
 *
 * The XCodec struct holds information about a codec, including its type, ID,
 * profile, level, optional tags, bit rate, codec data, and side data. For audio
 * codecs, additional decoding information is stored in the 'audio_data' field.
 */
struct XCodec {
    /// @brief The codec type. @see XObjectType
    XObjectType codec_type = XObjectType::None;
    /// @brief The codec ID. See av_codec_ids.h for a list of supported codecs. TODO add link to file and file to
    /// documentation
    std::string codec_id;
    /// @brief The codec profile.
    int32_t profile = 0;
    /// @brief The codec level.
    int32_t level = 0;
    /// @brief The codec tag, if available.
    std::optional<std::string> codec_tag;
    /// @brief The codec bit rate, if available.
    std::optional<int64_t> bit_rate;
    /// @brief The codec-specific data, if available.
    std::shared_ptr<const std::vector<uint8_t>> codec_data;
    /// @brief The codec side data.
    std::vector<XSideData> codec_side_data;

    /// @brief Additional audio decoding information.
    struct Audio {
        int32_t block_align           = 0;
        int32_t bits_per_coded_sample = 0;
        int32_t bits_per_raw_sample   = 0;
        int32_t frame_size            = 0;
        int32_t initial_padding       = 0;
        int32_t trailing_padding      = 0;
        int32_t seek_preroll          = 0;
    };

    /// @brief The audio decoding information, if available.
    std::optional<Audio> audio_data;
};

struct HWAccel {
    HWDeviceType hw_device_type = HWDeviceType::kNONE; // + size_t index; // ?
    std::string  hw_format;
    std::any     hw_frames_ctx;
};

/**
 * @brief Representation of media format for video streams.
 * This struct contains information about pixel format, size, fields order, frame rate,
 * picture aspect ratio, color range, color primaries, color transfer characteristic,
 * color space, chroma location.
 */
struct XFormatV {
    /**
     * @brief Pixel format of the video stream.
     * @see @ref av_pixel_formats.h for the list of supported pixel formats.
     */
    std::string pixel_format;
    /// @brief Width of the video stream.
    int32_t width = 0;
    /// @brief Height of the video stream.
    int32_t height = 0;
    /// @brief Fields order of the video stream.
    std::optional<eXFieldsOrder> fields_order;
    /// @brief Frame rate of the video stream.
    std::optional<XRational> frame_rate;
    /// @brief Picture aspect ratio of the video stream.
    std::optional<XRational> picture_ar;

    ///@{ Optional video data
    /// @brief Optional color range for the video stream.
    std::optional<ColorRange> color_range;
    /// @brief Optional color primaries for the video stream.
    std::optional<ColorPrimaries> color_primaries;
    /// @brief Optional color transfer characteristic for the video stream.
    std::optional<ColorTransferCharacteristic> color_trc;
    /// @brief Optional color space for the video stream.
    std::optional<ColorSpace> color_space;
    /// @brief Optional chroma location for the video stream.
    std::optional<ChromaLocation> chroma_location;
    ///@}

    /// @brief Codec for the stream for encoded streams.
    std::optional<XCodec> codec;

    /// @brief Hardware video acceleration.
    std::optional<HWAccel> hw_accel;
};

/**
 * @brief Representation of media format for audio stream.
 * This struct contains information about sample format, number of channels, sample
 * rate and optional codec for the audio stream.
 */
struct XFormatA {
    /**
     * @brief Sample format of the audio stream.
     * See av_sample_formats.h for the list of supported sample formats.
     */
    std::string sample_format;
    /// @brief Number of channels in the audio stream.
    int32_t channels = 0;
    /// @brief Sample rate of the audio stream.
    int32_t sample_rate = 0;
    /// @brief Optional audio channels layout
    std::optional<std::string> channels_layout;

    /// @brief Codec for the audio stream for encoded streams.
    std::optional<XCodec> codec;
};

/**
 * @brief Representation of media format for substitle stream.
 * This struct contains information about substitle format.
 */
struct XFormatS {
    /// @brief Codec for the substitle stream for encoded streams.
    std::optional<XCodec> codec;
};

/// @brief Pair of XFormatA and XFormatV for AV streams.
// using XFormatAV      = std::pair<XFormatA, XFormatV>;
/// @brief Variant of XFormatA, XFormatV, XFormatAV and monostate.
// using XFormatVariant = std::variant<std::monostate, XFormatA, XFormatV, XFormatAV>;

// 2Think: make format for chunk stream ?
/**
 * @brief Class representing media format.
 * This class provides access to audio and video formats stored as XFormatA and
 * XFormatV respectively. It also provides methods to determine the format type
 * and get pointers to audio and video formats.
 */
class XFormat {

    std::optional<XFormatA> audio;
    std::optional<XFormatV> video;
    std::optional<XFormatS> subtitle;

public:
    XFormat()               = default;
    XFormat(XFormat&&)      = default;
    XFormat(const XFormat&) = default;

    XFormat& operator=(XFormat&&)      = default;
    XFormat& operator=(const XFormat&) = default;

    /**
     * @brief XFormat constructor, use e.g. { formar_v, format_a } as initializer list
     */
    template <typename TArg,
              typename... TArgs,
              std::enable_if_t<!std::is_same_v<typename std::decay_t<TArg>, XFormat>, bool> = true>
    XFormat(const TArg& _arg, TArgs&&... _args)
    {
        Set(_arg);
        (Set(std::forward<TArgs>(_args)), ...);
    }

    /**
     * @brief Set audio format, use nullptr for reset type
     */
    void Set(const XFormatA* _format_p) { audio = (_format_p ? std::optional<XFormatA> {*_format_p} : std::nullopt); }
    void Set(const XFormatA& _format) { Set(&_format); }
    /**
     * @brief Set video format, use nullptr for reset type
     */
    void Set(const XFormatV* _format_p) { video = (_format_p ? std::optional<XFormatV> {*_format_p} : std::nullopt); }
    void Set(const XFormatV& _format) { Set(&_format); }
    /**
     * @brief Set subtitle format, use nullptr for reset type
     */
    void Set(const XFormatS* _format_p)
    {
        subtitle = (_format_p ? std::optional<XFormatS> {*_format_p} : std::nullopt);
    }
    void Set(const XFormatS& _format) { Set(&_format); }
    /**
     * @brief Reset format type.
     */
    void Reset();

    /**
     * @brief Determines the format type.
     * @return XObjectType::Audio, XObjectType::Video, XObjectType::AV or XObjectType::None,
     * depending on the stored format.
     */
    XObjectType Type() const;

    /**
     * @brief Const getter for the audio format.
     * @return Const pointer to XFormatA representing the audio format.
     */
    const XFormatA* Audio() const;
    /**
     * @brief Non-const getter for the audio format.
     * @return Pointer to XFormatA representing the audio format.
     */
    XFormatA* Audio();

    /**
     * @brief Const getter for the video format.
     * @return Const pointer to XFormatV representing the video format.
     */
    const XFormatV* Video() const;
    /**
     * @brief Non-const getter for the video format.
     * @return Pointer to XFormatV representing the video format.
     */
    XFormatV* Video();

    /**
     * @brief Const getter for the video format.
     * @return Const pointer to XFormatV representing the video format.
     */
    const XFormatS* Subtitle() const;
    /**
     * @brief Non-const getter for the video format.
     * @return Pointer to XFormatV representing the video format.
     */
    XFormatS* Subtitle();
};

/**
 * @brief Struct representing a video object plane (VOP).
 * In object-based coding, a video frame is defined in terms of layers of video object planes (VOP).
 * Each VOP is a video frame of a specific object of interest or interacted with.
 * The struct XPlaneV represents the properties of a single video object plane.
 */
struct XPlaneV {
    /// @brief Pointer to the video data of the plane.
    const uint8_t* video_p = nullptr;
    /// @brief Width of the video plane in pixels.
    int32_t width = 0;
    /// @brief Height of the video plane in pixels.
    int32_t height = 0;
    /// @brief Number of bytes stored in the video plane.
    int32_t row_bytes = 0; // raw_bytes?
};

/**
 * @brief Struct representing an audio plane.
 * In object-based coding, audio planes are also used to store audio data for each object plane.
 * The struct XPlaneA represents the properties of a single audio plane.
 */
struct XPlaneA {
    /// @brief Pointer to the audio data of the plane.
    const uint8_t* audio_p = nullptr;
    /// @brief Total number of bytes in the audio plane.
    int32_t bytes = 0;
};

/**
 * @brief Represents MPEG-TS program info
 *
 * This structure holds information about a program in an MPEG-TS transport stream.
 * Each program is described by a program map table (PMT), and the elementary streams
 * associated with that program have PIDs listed in the PMT. Another PID is associated
 * with the PMT itself.
 */
struct XProgram {
    // uint64_t program_uid = 0;
    /**
     * @brief Program number
     * A unique number assigned to each program in the transport stream.
     */
    uint32_t program_num = 0;
    /**
     * @brief Program ID
     * A unique identifier for the program.
     */
    uint32_t program_id = 0;
    /**
     * @brief Program flags
     * Additional flags related to the program.
     */
    uint32_t flags = 0;

    /**
     * @brief Optional PMT PID
     * The program map table PID.
     */
    std::optional<uint32_t> pmt_pid = 0;
    /**
     * @brief Optional PCR PID
     * The program clock reference PID.
     */
    std::optional<uint32_t> pcr_pid = 0;
    /**
     * @brief Optional PMT version
     * The version number of the program map table.
     */
    std::optional<uint32_t> pmt_version = 0;

    /**
     * @brief Optional metadata
     * Additional metadata associated with the program.
     */
    INode::SPtrC metadata;
};

struct XSubtitleImg {
    XRectD               pos;
    uint32_t             colors = 0;
    std::vector<XPlaneV> planes;
    std::any             buffer;
};

struct XSubtitle {
    std::string               text_plain;
    std::string               text_ass;
    std::vector<XSubtitleImg> images;

    uint32_t               duration_msec = 0;
    bool                   is_forced     = false;
    std::optional<int32_t> start_offset_msec;
};

// using XCaptions608 = std::array<uint8_t, 4>;
// using XCaptions708 = xbase::XBuffer;

} // namespace xsdk