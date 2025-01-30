#pragma once

#include <string_view>

namespace xsdk::av_opt::v_decoder {

/**
 * @brief apply_cropping option
 *
 * Type: chlayout, possible values []
 */
static constexpr std::string_view kApplyCropping = "apply_cropping";

/**
 * @brief avdiscard option
 *
 * For possible values see @ref avdiscard namespace
 */
static constexpr std::string_view kAvdiscard = "avdiscard";
/**
 * @brief Namespace containing possible values of ::kAvdiscard option.
 */
namespace avdiscard {
    ///@brief discard all frames
    static constexpr std::string_view kAll = "all";
    ///@brief discard all bidirectional frames
    static constexpr std::string_view kBidir = "bidir";
    ///@brief discard useless frames
    static constexpr std::string_view kDefault = "default";
    ///@brief discard all frames except I frames
    static constexpr std::string_view kNointra = "nointra";
    ///@brief discard all frames except keyframes
    static constexpr std::string_view kNokey = "nokey";
    ///@brief discard no frame
    static constexpr std::string_view kNone = "none";
    ///@brief discard all non-reference frames
    static constexpr std::string_view kNoref = "noref";
} // namespace avdiscard

/**
 * @brief Work around not autodetected encoder bugs
 *
 * For possible values see @ref bug namespace
 */
static constexpr std::string_view kBug = "bug";
/**
 * @brief Namespace containing possible values of ::kBug option.
 */
namespace bug {
    ///@brief direct-qpel-blocksize bug (autodetected per FOURCC/version)
    static constexpr std::string_view kDirectBlocksize = "direct_blocksize";
    ///@brief edge padding bug (autodetected per FOURCC/version)
    static constexpr std::string_view kEdge = "edge";
    ///@brief work around various bugs in Microsoft's broken decoders
    static constexpr std::string_view kMs = "ms";
    ///@brief padding bug (autodetected)
    static constexpr std::string_view kNoPadding = "no_padding";
    ///@brief old standard qpel (autodetected per FOURCC/version)
    static constexpr std::string_view kStdQpel = "std_qpel";
    ///@brief truncated frames
    static constexpr std::string_view kTrunc = "trunc";
    ///@brief (autodetected if FOURCC == UMP4)
    static constexpr std::string_view kUmp4 = "ump4";
    ///@brief Xvid interlacing bug (autodetected if FOURCC == XVIX)
    static constexpr std::string_view kXvidIlace = "xvid_ilace";
} // namespace bug

/**
 * @brief Chroma sample location
 *
 * For possible values see @ref chroma_sample_location namespace
 */
static constexpr std::string_view kChromaSampleLocation = "chroma_sample_location";
/**
 * @brief Namespace containing possible values of ::kChromaSampleLocation option.
 */
namespace chroma_sample_location {
    ///@brief Bottom
    static constexpr std::string_view kBottom = "bottom";
    ///@brief Bottom-left
    static constexpr std::string_view kBottomleft = "bottomleft";
    ///@brief Center
    static constexpr std::string_view kCenter = "center";
    ///@brief Left
    static constexpr std::string_view kLeft = "left";
    ///@brief Top
    static constexpr std::string_view kTop = "top";
    ///@brief Top-left
    static constexpr std::string_view kTopleft = "topleft";
    ///@brief Unspecified
    static constexpr std::string_view kUnknown = "unknown";
    ///@brief Unspecified
    static constexpr std::string_view kUnspecified = "unspecified";
} // namespace chroma_sample_location

/**
 * @brief List of decoders that are allowed to be used
 *
 * Type: rational, possible values []
 */
static constexpr std::string_view kCodecWhitelist = "codec_whitelist";

/**
 * @brief Color primaries
 *
 * For possible values see @ref color_primaries namespace
 */
static constexpr std::string_view kColorPrimaries = "color_primaries";
/**
 * @brief Namespace containing possible values of ::kColorPrimaries option.
 */
namespace color_primaries {
    ///@brief BT.2020
    static constexpr std::string_view kBt2020 = "bt2020";
    ///@brief BT.470 BG
    static constexpr std::string_view kBt470bg = "bt470bg";
    ///@brief BT.470 M
    static constexpr std::string_view kBt470m = "bt470m";
    ///@brief BT.709
    static constexpr std::string_view kBt709 = "bt709";
    ///@brief EBU 3213-E
    static constexpr std::string_view kEbu3213 = "ebu3213";
    ///@brief Film
    static constexpr std::string_view kFilm = "film";
    ///@brief JEDEC P22
    static constexpr std::string_view kJedecP22 = "jedec-p22";
    ///@brief SMPTE 170 M
    static constexpr std::string_view kSmpte170m = "smpte170m";
    ///@brief SMPTE 240 M
    static constexpr std::string_view kSmpte240m = "smpte240m";
    ///@brief SMPTE 428-1
    static constexpr std::string_view kSmpte428 = "smpte428";
    ///@brief SMPTE 428-1
    static constexpr std::string_view kSmpte4281 = "smpte428_1";
    ///@brief SMPTE 431-2
    static constexpr std::string_view kSmpte431 = "smpte431";
    ///@brief SMPTE 422-1
    static constexpr std::string_view kSmpte432 = "smpte432";
    ///@brief Unspecified
    static constexpr std::string_view kUnknown = "unknown";
    ///@brief Unspecified
    static constexpr std::string_view kUnspecified = "unspecified";
} // namespace color_primaries

/**
 * @brief Color range
 *
 * For possible values see @ref color_range namespace
 */
static constexpr std::string_view kColorRange = "color_range";
/**
 * @brief Namespace containing possible values of ::kColorRange option.
 */
namespace color_range {
    ///@brief JPEG (2^n-1)
    static constexpr std::string_view kFull = "full";
    ///@brief JPEG (2^n-1)
    static constexpr std::string_view kJpeg = "jpeg";
    ///@brief MPEG (219*2^(n-8))
    static constexpr std::string_view kLimited = "limited";
    ///@brief MPEG (219*2^(n-8))
    static constexpr std::string_view kMpeg = "mpeg";
    ///@brief JPEG (2^n-1)
    static constexpr std::string_view kPc = "pc";
    ///@brief MPEG (219*2^(n-8))
    static constexpr std::string_view kTv = "tv";
    ///@brief Unspecified
    static constexpr std::string_view kUnknown = "unknown";
    ///@brief Unspecified
    static constexpr std::string_view kUnspecified = "unspecified";
} // namespace color_range

/**
 * @brief Color transfer characteristics
 *
 * For possible values see @ref color_trc namespace
 */
static constexpr std::string_view kColorTrc = "color_trc";
/**
 * @brief Namespace containing possible values of ::kColorTrc option.
 */
namespace color_trc {
    ///@brief ARIB STD-B67
    static constexpr std::string_view kAribStdB67 = "arib-std-b67";
    ///@brief BT.1361
    static constexpr std::string_view kBt1361 = "bt1361";
    ///@brief BT.1361
    static constexpr std::string_view kBt1361e = "bt1361e";
    ///@brief BT.2020 - 10 bit
    static constexpr std::string_view kBt202010 = "bt2020-10";
    ///@brief BT.2020 - 12 bit
    static constexpr std::string_view kBt202012 = "bt2020-12";
    ///@brief BT.2020 - 10 bit
    static constexpr std::string_view kBt202010bit = "bt2020_10bit";
    ///@brief BT.2020 - 12 bit
    static constexpr std::string_view kBt202012bit = "bt2020_12bit";
    ///@brief BT.709
    static constexpr std::string_view kBt709 = "bt709";
    ///@brief BT.470 M
    static constexpr std::string_view kGamma22 = "gamma22";
    ///@brief BT.470 BG
    static constexpr std::string_view kGamma28 = "gamma28";
    ///@brief IEC 61966-2-1
    static constexpr std::string_view kIec6196621 = "iec61966-2-1";
    ///@brief IEC 61966-2-4
    static constexpr std::string_view kIec6196624 = "iec61966-2-4";
    ///@brief IEC 61966-2-1
    static constexpr std::string_view kIec6196621 = "iec61966_2_1";
    ///@brief IEC 61966-2-4
    static constexpr std::string_view kIec6196624 = "iec61966_2_4";
    ///@brief Linear
    static constexpr std::string_view kLinear = "linear";
    ///@brief Log
    static constexpr std::string_view kLog = "log";
    ///@brief Log
    static constexpr std::string_view kLog100 = "log100";
    ///@brief Log square root
    static constexpr std::string_view kLog316 = "log316";
    ///@brief Log square root
    static constexpr std::string_view kLogSqrt = "log_sqrt";
    ///@brief SMPTE 170 M
    static constexpr std::string_view kSmpte170m = "smpte170m";
    ///@brief SMPTE 2084
    static constexpr std::string_view kSmpte2084 = "smpte2084";
    ///@brief SMPTE 240 M
    static constexpr std::string_view kSmpte240m = "smpte240m";
    ///@brief SMPTE 428-1
    static constexpr std::string_view kSmpte428 = "smpte428";
    ///@brief SMPTE 428-1
    static constexpr std::string_view kSmpte4281 = "smpte428_1";
    ///@brief Unspecified
    static constexpr std::string_view kUnknown = "unknown";
    ///@brief Unspecified
    static constexpr std::string_view kUnspecified = "unspecified";
} // namespace color_trc

/**
 * @brief Color space
 *
 * For possible values see @ref colorspace namespace
 */
static constexpr std::string_view kColorspace = "colorspace";
/**
 * @brief Namespace containing possible values of ::kColorspace option.
 */
namespace colorspace {
    ///@brief BT.2020 CL
    static constexpr std::string_view kBt2020Cl = "bt2020_cl";
    ///@brief BT.2020 NCL
    static constexpr std::string_view kBt2020Ncl = "bt2020_ncl";
    ///@brief BT.2020 CL
    static constexpr std::string_view kBt2020c = "bt2020c";
    ///@brief BT.2020 NCL
    static constexpr std::string_view kBt2020nc = "bt2020nc";
    ///@brief BT.470 BG
    static constexpr std::string_view kBt470bg = "bt470bg";
    ///@brief BT.709
    static constexpr std::string_view kBt709 = "bt709";
    ///@brief Chroma-derived CL
    static constexpr std::string_view kChromaDerivedC = "chroma-derived-c";
    ///@brief Chroma-derived NCL
    static constexpr std::string_view kChromaDerivedNc = "chroma-derived-nc";
    ///@brief FCC
    static constexpr std::string_view kFcc = "fcc";
    ///@brief ICtCp
    static constexpr std::string_view kIctcp = "ictcp";
    ///@brief RGB
    static constexpr std::string_view kRgb = "rgb";
    ///@brief SMPTE 170 M
    static constexpr std::string_view kSmpte170m = "smpte170m";
    ///@brief SMPTE 2085
    static constexpr std::string_view kSmpte2085 = "smpte2085";
    ///@brief SMPTE 240 M
    static constexpr std::string_view kSmpte240m = "smpte240m";
    ///@brief Unspecified
    static constexpr std::string_view kUnknown = "unknown";
    ///@brief Unspecified
    static constexpr std::string_view kUnspecified = "unspecified";
    ///@brief YCGCO
    static constexpr std::string_view kYcgco = "ycgco";
    ///@brief YCGCO
    static constexpr std::string_view kYcocg = "ycocg";
} // namespace colorspace

/**
 * @brief Print specific debug info
 *
 * For possible values see @ref debug namespace
 */
static constexpr std::string_view kDebug = "debug";
/**
 * @brief Namespace containing possible values of ::kDebug option.
 */
namespace debug {
    ///@brief picture buffer allocations
    static constexpr std::string_view kBuffers = "buffers";
    ///@brief error recognition
    static constexpr std::string_view kEr = "er";
    ///@brief macroblock (MB) type
    static constexpr std::string_view kMbType = "mb_type";
    ///@brief memory management control operations (H.264)
    static constexpr std::string_view kMmco = "mmco";
    ///@brief skip motion compensation
    static constexpr std::string_view kNomc = "nomc";
    ///@brief picture info
    static constexpr std::string_view kPict = "pict";
    ///@brief per-block quantization parameter (QP)
    static constexpr std::string_view kQp = "qp";
    ///@brief threading operations
    static constexpr std::string_view kThreadOps = "thread_ops";
} // namespace debug

/**
 * @brief Percentage of damaged samples to discard a frame
 *
 * Type: int64, possible values [0.0, 100.0]
 */
static constexpr std::string_view kDiscardDamagedPercentage = "discard_damaged_percentage";

/**
 * @brief Set information dump field separator
 *
 * Type: rational, possible values []
 */
static constexpr std::string_view kDumpSeparator = "dump_separator";

/**
 * @brief Set error concealment strategy
 *
 * For possible values see @ref ec namespace
 */
static constexpr std::string_view kEc = "ec";
/**
 * @brief Namespace containing possible values of ::kEc option.
 */
namespace ec {
    ///@brief use strong deblock filter for damaged MBs
    static constexpr std::string_view kDeblock = "deblock";
    ///@brief favor predicting from the previous frame
    static constexpr std::string_view kFavorInter = "favor_inter";
    ///@brief iterative motion vector (MV) search (slow)
    static constexpr std::string_view kGuessMvs = "guess_mvs";
} // namespace ec

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
 * For possible values see @ref export_side_data namespace
 */
static constexpr std::string_view kExportSideData = "export_side_data";
/**
 * @brief Namespace containing possible values of ::kExportSideData option.
 */
namespace export_side_data {
    ///@brief export film grain parameters through frame side data
    static constexpr std::string_view kFilmGrain = "film_grain";
    ///@brief export motion vectors through frame side data
    static constexpr std::string_view kMvs = "mvs";
    ///@brief export video encoding parameters through frame side data
    static constexpr std::string_view kVencParams = "venc_params";
} // namespace export_side_data

/**
 * @brief Number of extra hardware frames to allocate for the user
 *
 * Type: int64, possible values [-1.0, 2147483647.0]
 */
static constexpr std::string_view kExtraHwFrames = "extra_hw_frames";

/**
 * @brief Field order
 *
 * For possible values see @ref field_order namespace
 */
static constexpr std::string_view kFieldOrder = "field_order";

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
    ///@brief Drop frames whose parameters differ from first decoded frame
    static constexpr std::string_view kDropChanged = "drop_changed";
    ///@brief only decode/encode grayscale
    static constexpr std::string_view kGray = "gray";
    ///@brief force low delay
    static constexpr std::string_view kLowDelay = "low_delay";
    ///@brief Output even potentially corrupted frames
    static constexpr std::string_view kOutputCorrupt = "output_corrupt";
    ///@brief allow decoders to produce unaligned output
    static constexpr std::string_view kUnaligned = "unaligned";
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
    ///@brief Frame data might be split into multiple chunks
    static constexpr std::string_view kChunks = "chunks";
    ///@brief export motion vectors through frame side data
    static constexpr std::string_view kExportMvs = "export_mvs";
    ///@brief ignore cropping information from sps
    static constexpr std::string_view kIgnorecrop = "ignorecrop";
    ///@brief Show all frames before the first keyframe
    static constexpr std::string_view kShowall = "showall";
} // namespace flags2

/**
 * @brief hwaccel_flags option
 *
 * For possible values see @ref hwaccel_flags namespace
 */
static constexpr std::string_view kHwaccelFlags = "hwaccel_flags";
/**
 * @brief Namespace containing possible values of ::kHwaccelFlags option.
 */
namespace hwaccel_flags {
    ///@brief allow to output YUV pixel formats with a different chroma sampling than 4:2:0 and/or other than 8 bits
    /// per handler
    static constexpr std::string_view kAllowHighDepth = "allow_high_depth";
    ///@brief attempt to decode anyway if HW accelerated decoder's supported profiles do not exactly match the
    /// stream
    static constexpr std::string_view kAllowProfileMismatch = "allow_profile_mismatch";
    ///@brief ignore level even if the codec level used is unknown or higher than the maximum supported level
    /// reported by the hardware driver
    static constexpr std::string_view kIgnoreLevel = "ignore_level";
    ///@brief allow potentially unsafe hwaccel frame output that might require special care to process successfully
    static constexpr std::string_view kUnsafeOutput = "unsafe_output";
} // namespace hwaccel_flags

/**
 * @brief Select IDCT implementation
 *
 * For possible values see @ref idct namespace
 */
static constexpr std::string_view kIdct = "idct";
/**
 * @brief Namespace containing possible values of ::kIdct option.
 */
namespace idct {
    ///@brief floating point AAN IDCT
    static constexpr std::string_view kFaani = "faani";
    ///@brief deprecated, for compatibility only
    static constexpr std::string_view kXvidmmx = "xvidmmx";
} // namespace idct

/**
 * @brief Decode at 1= 1/2, 2=1/4, 3=1/8 resolutions
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kLowres = "lowres";

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
 * @brief Skip processing alpha
 *
 * Type: chlayout, possible values []
 */
static constexpr std::string_view kSkipAlpha = "skip_alpha";

/**
 * @brief Number of macroblock rows at the bottom which are skipped
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSkipBottom = "skip_bottom";

/**
 * @brief Skip decoding for the selected frames
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSkipFrame = "skip_frame";

/**
 * @brief Skip IDCT/dequantization for the selected frames
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSkipIdct = "skip_idct";

/**
 * @brief Skip loop filtering process for the selected frames
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSkipLoopFilter = "skip_loop_filter";

/**
 * @brief Number of macroblock rows at the top which are skipped
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSkipTop = "skip_top";

/**
 * @brief How strictly to follow the standards
 *
 * For possible values see @ref strict namespace
 */
static constexpr std::string_view kStrict = "strict";
/**
 * @brief Namespace containing possible values of ::kStrict option.
 */
namespace strict {
    ///@brief allow non-standardized experimental things
    static constexpr std::string_view kExperimental = "experimental";
    ///@brief strictly conform to all the things in the spec no matter what the consequences
    static constexpr std::string_view kStrict = "strict";
    ///@brief allow unofficial extensions
    static constexpr std::string_view kUnofficial = "unofficial";
    ///@brief strictly conform to a older more strict version of the spec or reference software
    static constexpr std::string_view kVery = "very";
} // namespace strict

/**
 * @brief Select multithreading type
 *
 * For possible values see @ref thread_type namespace
 */
static constexpr std::string_view kThreadType = "thread_type";

/**
 * @brief Set the number of threads
 *
 * For possible values see @ref threads namespace
 */
static constexpr std::string_view kThreads = "threads";
/**
 * @brief Namespace containing possible values of ::kThreads option.
 */
namespace threads {
    ///@brief autodetect a suitable number of threads to use
    static constexpr std::string_view kAuto = "auto";
} // namespace threads

/**
 * @brief ticks_per_frame option
 *
 * Type: int64, possible values [1.0, 2147483647.0]
 */
static constexpr std::string_view kTicksPerFrame = "ticks_per_frame";

/**
 * @name Options for video encoders
This group contains a set of static string constants used to define various options of video encoders.
 */
///@{
namespace exr {
    /**
     * @brief Color transfer characteristics to apply to EXR linear input
     *
     * For possible values see @ref apply_trc namespace
     */
    static constexpr std::string_view kApplyTrc = "apply_trc";
    /**
     * @brief Namespace containing possible values of ::kApplyTrc option.
     */
    namespace apply_trc {
        ///@brief BT.1361
        static constexpr std::string_view kBt1361 = "bt1361";
        ///@brief BT.2020 - 10 bit
        static constexpr std::string_view kBt202010bit = "bt2020_10bit";
        ///@brief BT.2020 - 12 bit
        static constexpr std::string_view kBt202012bit = "bt2020_12bit";
        ///@brief BT.709
        static constexpr std::string_view kBt709 = "bt709";
        ///@brief gamma
        static constexpr std::string_view kGamma = "gamma";
        ///@brief BT.470 M
        static constexpr std::string_view kGamma22 = "gamma22";
        ///@brief BT.470 BG
        static constexpr std::string_view kGamma28 = "gamma28";
        ///@brief IEC 61966-2-1
        static constexpr std::string_view kIec6196621 = "iec61966_2_1";
        ///@brief IEC 61966-2-4
        static constexpr std::string_view kIec6196624 = "iec61966_2_4";
        ///@brief Linear
        static constexpr std::string_view kLinear = "linear";
        ///@brief Log
        static constexpr std::string_view kLog = "log";
        ///@brief Log square root
        static constexpr std::string_view kLogSqrt = "log_sqrt";
        ///@brief SMPTE 170 M
        static constexpr std::string_view kSmpte170m = "smpte170m";
        ///@brief SMPTE ST 2084
        static constexpr std::string_view kSmpte2084 = "smpte2084";
        ///@brief SMPTE 240 M
        static constexpr std::string_view kSmpte240m = "smpte240m";
        ///@brief SMPTE ST 428-1
        static constexpr std::string_view kSmpte4281 = "smpte428_1";
    } // namespace apply_trc

    /**
     * @brief Set the float gamma value when decoding
     *
     * Type: string, possible values     [0.001, 3.4028234663852886e38]
     */
    static constexpr std::string_view kGamma = "gamma";

    /**
     * @brief Set the decoding layer
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kLayer = "layer";

    /**
     * @brief Set the decoding part
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kPart = "part";

} // namespace exr
namespace fic {
    /**
     * @brief Skip the cursor
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSkipCursor = "skip_cursor";

} // namespace fic
namespace fits {
    /**
     * @brief Value that is used to replace BLANK pixels in data array
     *
     * Type: int64, possible values     [0.0, 65535.0]
     */
    static constexpr std::string_view kBlankValue = "blank_value";

} // namespace fits
namespace frwu {
    /**
     * @brief Change field order
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kChangeFieldOrder = "change_field_order";

} // namespace frwu
namespace gif {
    /**
     * @brief Color value (ARGB) that is used instead of transparent color
     *
     * Type: int64, possible values     [0.0, 4294967295.0]
     */
    static constexpr std::string_view kTransColor = "trans_color";

} // namespace gif
namespace h264 {
    /**
     * @brief Enable error resilience on damaged frames (unsafe)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableEr = "enable_er";

    /**
     * @brief Is avc
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIsAvc = "is_avc";

    /**
     * @brief Nal_length_size
     *
     * Type: int64, possible values     [0.0, 4.0]
     */
    static constexpr std::string_view kNalLengthSize = "nal_length_size";

    /**
     * @brief Avoid using gray gap frames as references
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNorefGray = "noref_gray";

    /**
     * @brief Do not return gray gap frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSkipGray = "skip_gray";

    /**
     * @brief Assume this x264 version if no x264 version found in any SEI
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kX264Build = "x264_build";

} // namespace h264
namespace hevc {
    /**
     * @brief Apply default display window from VUI
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kApplyDefdispwin = "apply_defdispwin";

    /**
     * @brief Stricly apply default display window size
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStrictDisplaywin = "strict-displaywin";

} // namespace hevc
namespace jpeg2000 {
    /**
     * @brief Lower the decoding resolution by a power of two
     *
     * Type: int64, possible values     [0.0, 33.0]
     */
    static constexpr std::string_view kLowres = "lowres";

} // namespace jpeg2000
namespace mjpeg {
    /**
     * @brief Use external huffman table.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kExternHuff = "extern_huff";

} // namespace mjpeg
namespace mpeg2video {
    /**
     * @brief Extract a specific Closed Captions format
     *
     * For possible values see @ref cc_format namespace
     */
    static constexpr std::string_view kCcFormat = "cc_format";
    /**
     * @brief Namespace containing possible values of ::kCcFormat option.
     */
    namespace cc_format {
        ///@brief pick A/53 Part 4 CC substream
        static constexpr std::string_view kA53 = "a53";
        ///@brief pick first seen CC substream
        static constexpr std::string_view kAuto = "auto";
        ///@brief pick DVD CC substream
        static constexpr std::string_view kDvd = "dvd";
        ///@brief pick SCTE-20 CC substream
        static constexpr std::string_view kScte20 = "scte20";
    } // namespace cc_format

} // namespace mpeg2video
namespace mpeg4 {
    /**
     * @brief Divx style packed b frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kDivxPacked = "divx_packed";

    /**
     * @brief 1/4 subpel MC
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kQuarterSample = "quarter_sample";

} // namespace mpeg4
namespace photocd {
    /**
     * @brief Lower the decoding resolution by a power of two
     *
     * Type: int64, possible values     [0.0, 4.0]
     */
    static constexpr std::string_view kLowres = "lowres";

} // namespace photocd
namespace rasc {
    /**
     * @brief Skip the cursor
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSkipCursor = "skip_cursor";

} // namespace rasc
namespace rawvideo {
    /**
     * @brief Top field first
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTop = "top";

} // namespace rawvideo
namespace tiff {
    /**
     * @brief Page number of multi-page image to decode (starting from 1)
     *
     * Type: int64, possible values     [0.0, 65535.0]
     */
    static constexpr std::string_view kPage = "page";

    /**
     * @brief Decode subimage instead if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSubimage = "subimage";

    /**
     * @brief Decode embedded thumbnail subimage instead if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kThumbnail = "thumbnail";

} // namespace tiff
namespace v210 {
    /**
     * @brief Custom V210 stride
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kCustomStride = "custom_stride";

} // namespace v210
namespace libdav1d {
    /**
     * @brief Output all spatial layers
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAlllayers = "alllayers";

    /**
     * @brief filmgrain option
     *
     * Type: , possible values
     */
    static constexpr std::string_view kFilmgrain = "filmgrain";

    /**
     * @brief framethreads option
     *
     * Type: , possible values
     */
    static constexpr std::string_view kFramethreads = "framethreads";

    /**
     * @brief Max frame delay
     *
     * Type: int64, possible values     [0.0, 256.0]
     */
    static constexpr std::string_view kMaxFrameDelay = "max_frame_delay";

    /**
     * @brief Select an operating point of the scalable bitstream
     *
     * Type: int64, possible values     [-1.0, 31.0]
     */
    static constexpr std::string_view kOppoint = "oppoint";

    /**
     * @brief tilethreads option
     *
     * Type: , possible values
     */
    static constexpr std::string_view kTilethreads = "tilethreads";

} // namespace libdav1d
namespace av1 {
    /**
     * @brief Select an operating point of the scalable bitstream
     *
     * Type: int64, possible values     [0.0, 31.0]
     */
    static constexpr std::string_view kOperatingPoint = "operating_point";

} // namespace av1
///@}
} // namespace xsdk::av_opt::v_decoder
