#pragma once

#include <string_view>

namespace xsdk::av_opt::s_decoder {
/**
 * @brief List of decoders that are allowed to be used
 *
 * Type: rational, possible values []
 */
static constexpr std::string_view kCodecWhitelist = "codec_whitelist";

/**
 * @brief Print specific debug info
 *
 * Type: int, possible values []
 */
static constexpr std::string_view kDebug = "debug";

/**
 * @brief Set information dump field separator
 *
 * Type: rational, possible values []
 */
static constexpr std::string_view kDumpSeparator = "dump_separator";

/**
 * @brief Set error detection flags
 *
 * For possible values see @ref err_detect namespace
 */
static constexpr std::string_view kErrDetect = "err_detect";
/**
 * @brief Namespace containing possible values of ::kErrDetect option.
 */
namespace err_detect {
    ///@brief consider things that a sane encoder should not do as an error
    static constexpr std::string_view kAggressive = "aggressive";
    ///@brief detect bitstream specification deviations
    static constexpr std::string_view kBitstream = "bitstream";
    ///@brief detect improper bitstream length
    static constexpr std::string_view kBuffer = "buffer";
    ///@brief consider things that violate the spec, are fast to check and have not been seen in the wild as errors
    static constexpr std::string_view kCareful = "careful";
    ///@brief consider all spec non compliancies as errors
    static constexpr std::string_view kCompliant = "compliant";
    ///@brief verify embedded CRCs
    static constexpr std::string_view kCrccheck = "crccheck";
    ///@brief abort decoding on minor error detection
    static constexpr std::string_view kExplode = "explode";
    ///@brief ignore errors
    static constexpr std::string_view kIgnoreErr = "ignore_err";
} // namespace err_detect

/**
 * @brief Export metadata as side data
 *
 * Type: int, possible values []
 */
static constexpr std::string_view kExportSideData = "export_side_data";

/**
 * @brief flags option
 *
 * For possible values see @ref flags namespace
 */
static constexpr std::string_view kFlags = "flags";
/**
 * @brief Namespace containing possible values of ::kFlags option.
 */
namespace flags {
    ///@brief use only bitexact functions (except (I)DCT)
    static constexpr std::string_view kBitexact = "bitexact";
} // namespace flags

/**
 * @brief flags2 option
 *
 * For possible values see @ref flags2 namespace
 */
static constexpr std::string_view kFlags2 = "flags2";
/**
 * @brief Namespace containing possible values of ::kFlags2 option.
 */
namespace flags2 {
    ///@brief do not reset ASS ReadOrder field on flush
    static constexpr std::string_view kAssRoFlushNoop = "ass_ro_flush_noop";
    ///@brief generate/parse embedded ICC profiles from/to colorimetry tags
    static constexpr std::string_view kIccProfiles = "icc_profiles";
} // namespace flags2

/**
 * @brief Maximum number of pixels
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxPixels = "max_pixels";

/**
 * @brief Comma-separated list of side data types for which user-supplied (container) data is preferred over coded
 * bytestream
 *
 * Type: , possible values []
 */
static constexpr std::string_view kSideDataPreferPacket = "side_data_prefer_packet";

/**
 * @brief Set input text subtitles character encoding
 *
 * Type: rational, possible values []
 */
static constexpr std::string_view kSubCharenc = "sub_charenc";

/**
 * @brief Set input text subtitles character encoding mode
 *
 * For possible values see @ref sub_charenc_mode namespace
 */
static constexpr std::string_view kSubCharencMode = "sub_charenc_mode";

/**
 * @name Options for subtitle encoders
This group contains a set of static string constants used to define various options of subtitle encoders.
 */
///@{
namespace cc_dec {
    /**
     * @brief Select data field
     *
     * For possible values see @ref data_field namespace
     */
    static constexpr std::string_view kDataField = "data_field";
    /**
     * @brief Namespace containing possible values of ::kDataField option.
     */
    namespace data_field {
        ///@brief pick first one that appears
        static constexpr std::string_view kAuto = "auto";
    } // namespace data_field

    /**
     * @brief Emit subtitle events as they are decoded for real-time display
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kRealTime = "real_time";

    /**
     * @brief Minimum elapsed time between emitting real-time subtitle events
     *
     * Type: int64, possible values     [0.0, 500.0]
     */
    static constexpr std::string_view kRealTimeLatencyMsec = "real_time_latency_msec";

} // namespace cc_dec
namespace dvbsub {
    /**
     * @brief Compute clut when not available(-1) or only once (-2) or always(1) or never(0)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kComputeClut = "compute_clut";

    /**
     * @brief Compute end of time using pts or timeout
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kComputeEdt = "compute_edt";

    /**
     * @brief dvb_substream option
     *
     * Type: int64, possible values     [-1.0, 63.0]
     */
    static constexpr std::string_view kDvbSubstream = "dvb_substream";

} // namespace dvbsub
namespace dvdsub {
    /**
     * @brief Only show forced subtitles
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedSubsOnly = "forced_subs_only";

    /**
     * @brief Obtain the global palette from .IFO file
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kIfoPalette = "ifo_palette";

    /**
     * @brief Set the global palette
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPalette = "palette";

} // namespace dvdsub
namespace mov_text {
    /**
     * @brief Frame height, usually video height
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kHeight = "height";

    /**
     * @brief Frame width, usually video width
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kWidth = "width";

} // namespace mov_text
namespace pgssub {
    /**
     * @brief Only show forced subtitles
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedSubsOnly = "forced_subs_only";

} // namespace pgssub
namespace pjs {
    /**
     * @brief Set if ASS tags must be escaped
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kKeepAssMarkup = "keep_ass_markup";

} // namespace pjs
namespace stl {
    /**
     * @brief Set if ASS tags must be escaped
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kKeepAssMarkup = "keep_ass_markup";

} // namespace stl
namespace subviewer1 {
    /**
     * @brief Set if ASS tags must be escaped
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kKeepAssMarkup = "keep_ass_markup";

} // namespace subviewer1
namespace text {
    /**
     * @brief Set if ASS tags must be escaped
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kKeepAssMarkup = "keep_ass_markup";

} // namespace text
namespace vplayer {
    /**
     * @brief Set if ASS tags must be escaped
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kKeepAssMarkup = "keep_ass_markup";

} // namespace vplayer
namespace libaribcaption {
    /**
     * @brief Workaround of ASS subtitle for players which can't handle multi-rectangle [ass]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAssSingleRect = "ass_single_rect";

    /**
     * @brief Set input video size (WxH or abbreviation) [bitmap]
     *
     * Type: pixel_fmt, possible values     []
     */
    static constexpr std::string_view kCanvasSize = "canvas_size";

    /**
     * @brief Encoding scheme of subtitle text
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kCaptionEncoding = "caption_encoding";

    /**
     * @brief encoding option
     *
     * For possible values see @ref encoding namespace
     */
    static constexpr std::string_view kEncoding = "encoding";
    /**
     * @brief Namespace containing possible values of ::kEncoding option.
     */
    namespace encoding {
        ///@brief automatically detect encoding scheme
        static constexpr std::string_view kAuto = "auto";
        ///@brief 8bit-char JIS encoding (Japanese ISDB captions)
        static constexpr std::string_view kJis = "jis";
        ///@brief latin characters (SBTVD / ISDB-Tb captions used in South America)
        static constexpr std::string_view kLatin = "latin";
        ///@brief UTF-8 encoding (Philippines ISDB-T captions)
        static constexpr std::string_view kUtf8 = "utf8";
    } // namespace encoding

    /**
     * @brief Comma-separated font family [ass, bitmap]
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kFont = "font";

    /**
     * @brief Always render characters with outline [(ass), bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForceOutlineText = "force_outline_text";

    /**
     * @brief Ignore rendering caption background [(ass), bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIgnoreBackground = "ignore_background";

    /**
     * @brief Ignore ruby-like characters [ass, bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIgnoreRuby = "ignore_ruby";

    /**
     * @brief Outline width of text [(ass), bitmap]
     *
     * Type: string, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kOutlineWidth = "outline_width";

    /**
     * @brief Replace known DRCS [bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kReplaceDrcs = "replace_drcs";

    /**
     * @brief Replace MSZ fullwidth alphanumerics with halfwidth alphanumerics [ass, bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kReplaceMszAscii = "replace_msz_ascii";

    /**
     * @brief Replace MSZ characters with halfwidth glyphs [bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kReplaceMszGlyph = "replace_msz_glyph";

    /**
     * @brief Replace MSZ fullwidth Japanese with halfwidth [ass, bitmap]
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kReplaceMszJapanese = "replace_msz_japanese";

    /**
     * @brief Subtitle rendering type
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kSubType = "sub_type";

    /**
     * @brief type option
     *
     * For possible values see @ref type namespace
     */
    static constexpr std::string_view kType = "type";
    /**
     * @brief Namespace containing possible values of ::kType option.
     */
    namespace type {
        ///@brief formatted text
        static constexpr std::string_view kAss = "ass";
        ///@brief bitmap rendering
        static constexpr std::string_view kBitmap = "bitmap";
        ///@brief do nothing
        static constexpr std::string_view kNone = "none";
        ///@brief plain text
        static constexpr std::string_view kText = "text";
    } // namespace type

} // namespace libaribcaption
namespace libzvbi_teletextdec {
    /**
     * @brief Chops leading and trailing spaces from text
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kTxtChopSpaces = "txt_chop_spaces";

    /**
     * @brief Discards the top teletext line
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kTxtChopTop = "txt_chop_top";

    /**
     * @brief Default G0 character set used for decoding
     *
     * Type: int64, possible values     [-1.0, 87.0]
     */
    static constexpr std::string_view kTxtDefaultRegion = "txt_default_region";

    /**
     * @brief Display duration of teletext pages in msecs
     *
     * Type: int64, possible values     [-1.0, 86400000.0]
     */
    static constexpr std::string_view kTxtDuration = "txt_duration";

    /**
     * @brief Format of the subtitles (bitmap or text or ass)
     *
     * For possible values see @ref txt_format namespace
     */
    static constexpr std::string_view kTxtFormat = "txt_format";

    /**
     * @brief X offset of generated bitmaps
     *
     * Type: int64, possible values     [0.0, 65535.0]
     */
    static constexpr std::string_view kTxtLeft = "txt_left";

    /**
     * @brief Set opacity of the transparent background
     *
     * Type: int64, possible values     [-1.0, 255.0]
     */
    static constexpr std::string_view kTxtOpacity = "txt_opacity";

    /**
     * @brief Page numbers to decode, subtitle for subtitles, * for all
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kTxtPage = "txt_page";

    /**
     * @brief Y offset of generated bitmaps
     *
     * Type: int64, possible values     [0.0, 65535.0]
     */
    static constexpr std::string_view kTxtTop = "txt_top";

    /**
     * @brief Force transparent background of the teletext
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kTxtTransparent = "txt_transparent";

} // namespace libzvbi_teletextdec
///@}
} // namespace xsdk::av_opt::s_decoder
