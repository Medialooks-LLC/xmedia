#pragma once

#include <string_view>

namespace xsdk::av_opt::v_encoder {
/**
 * @brief Sample aspect ratio
 *
 * Type: binary, possible values [0.0, 10.0]
 */
static constexpr std::string_view kAspect = "aspect";

/**
 * @brief avctx.level option
 *
 * For possible values see @ref avctx.level namespace
 */
static constexpr std::string_view kAvctxLevel = "avctx.level";

/**
 * @brief avctx.profile option
 *
 * For possible values see @ref avctx.profile namespace
 */
static constexpr std::string_view kAvctxProfile = "avctx.profile";

/**
 * @brief Set bitrate (in bits/s)
 *
 * Type: double, possible values [0.0, 9223372036854776000.0]
 */
static constexpr std::string_view kB = "b";

/**
 * @brief QP factor between P- and B-frames
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kBQfactor = "b_qfactor";

/**
 * @brief QP offset between P- and B-frames
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kBQoffset = "b_qoffset";

/**
 * @brief Set maximum number of B-frames between non-B-frames
 *
 * Type: int64, possible values [-1.0, 2147483647.0]
 */
static constexpr std::string_view kBf = "bf";

/**
 * @brief Refine the two motion vectors used in bidirectional macroblocks
 *
 * Type: int64, possible values [0.0, 4.0]
 */
static constexpr std::string_view kBidirRefine = "bidir_refine";

/**
 * @brief Set video bitrate tolerance (in bits/s). In 1-pass mode, bitrate tolerance specifies how far ratecontrol
 * is willing to deviate from the target average bitrate value. This is not related to minimum/maximum bitrate.
 * Lowering tolerance too much has an adverse effect on quality.
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kBt = "bt";

/**
 * @brief Set ratecontrol buffer size (in bits)
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kBufsize = "bufsize";

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
 * @brief Full-pel ME compare function
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kCmp = "cmp";

/**
 * @brief cmp_func option
 *
 * For possible values see @ref cmp_func namespace
 */
static constexpr std::string_view kCmpFunc = "cmp_func";
/**
 * @brief Namespace containing possible values of ::kCmpFunc option.
 */
namespace cmp_func {
    ///@brief number of bits needed for the block
    static constexpr std::string_view kBit = "bit";
    ///@brief sum of absolute DCT transformed differences
    static constexpr std::string_view kDct = "dct";
    ///@brief sum of absolute differences, median predicted
    static constexpr std::string_view kMsad = "msad";
    ///@brief noise preserving sum of squared differences
    static constexpr std::string_view kNsse = "nsse";
    ///@brief sum of squared quantization errors (avoid, low quality)
    static constexpr std::string_view kPsnr = "psnr";
    ///@brief rate distortion optimal, slow
    static constexpr std::string_view kRd = "rd";
    ///@brief sum of absolute differences, fast
    static constexpr std::string_view kSad = "sad";
    ///@brief sum of absolute Hadamard transformed differences
    static constexpr std::string_view kSatd = "satd";
    ///@brief sum of squared errors
    static constexpr std::string_view kSse = "sse";
    ///@brief sum of absolute vertical differences
    static constexpr std::string_view kVsad = "vsad";
    ///@brief sum of squared vertical differences
    static constexpr std::string_view kVsse = "vsse";
    ///@brief 5/3 wavelet, only used in snow
    static constexpr std::string_view kW53 = "w53";
    ///@brief 9/7 wavelet, only used in snow
    static constexpr std::string_view kW97 = "w97";
    ///@brief 0
    static constexpr std::string_view kZero = "zero";
} // namespace cmp_func

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
 * @brief compression_level option
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kCompressionLevel = "compression_level";

/**
 * @brief Compresses dark areas stronger than medium ones
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kDarkMask = "dark_mask";

/**
 * @brief Intra_dc_precision
 *
 * Type: int64, possible values [-8.0, 16.0]
 */
static constexpr std::string_view kDc = "dc";

/**
 * @brief DCT algorithm
 *
 * For possible values see @ref dct namespace
 */
static constexpr std::string_view kDct = "dct";
/**
 * @brief Namespace containing possible values of ::kDct option.
 */
namespace dct {
    ///@brief autoselect a good one
    static constexpr std::string_view kAuto = "auto";
    ///@brief floating point AAN DCT
    static constexpr std::string_view kFaan = "faan";
    ///@brief fast integer
    static constexpr std::string_view kFastint = "fastint";
    ///@brief accurate integer
    static constexpr std::string_view kInt = "int";
} // namespace dct

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
    ///@brief rate control
    static constexpr std::string_view kRc = "rc";
} // namespace debug

/**
 * @brief Diamond type & size for motion estimation
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kDiaSize = "dia_size";

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
 * For possible values see @ref export_side_data namespace
 */
static constexpr std::string_view kExportSideData = "export_side_data";
/**
 * @brief Namespace containing possible values of ::kExportSideData option.
 */
namespace export_side_data {
    ///@brief export Producer Reference Time through packet side data
    static constexpr std::string_view kPrft = "prft";
} // namespace export_side_data

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
    ///@brief H.263 advanced intra coding / MPEG-4 AC prediction
    static constexpr std::string_view kAic = "aic";
    ///@brief use only bitexact functions (except (I)DCT)
    static constexpr std::string_view kBitexact = "bitexact";
    ///@brief closed GOP
    static constexpr std::string_view kCgop = "cgop";
    ///@brief place global headers in extradata instead of every keyframe
    static constexpr std::string_view kGlobalHeader = "global_header";
    ///@brief only decode/encode grayscale
    static constexpr std::string_view kGray = "gray";
    ///@brief use interlaced DCT
    static constexpr std::string_view kIldct = "ildct";
    ///@brief interlaced motion estimation
    static constexpr std::string_view kIlme = "ilme";
    ///@brief use loop filter
    static constexpr std::string_view kLoop = "loop";
    ///@brief force low delay
    static constexpr std::string_view kLowDelay = "low_delay";
    ///@brief use four motion vectors per macroblock (MPEG-4)
    static constexpr std::string_view kMv4 = "mv4";
    ///@brief error[?] variables will be set during encoding
    static constexpr std::string_view kPsnr = "psnr";
    ///@brief use 1/4-pel motion compensation
    static constexpr std::string_view kQpel = "qpel";
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
    ///@brief allow non-spec-compliant speedup tricks
    static constexpr std::string_view kFast = "fast";
    ///@brief place global headers at every keyframe instead of in extradata
    static constexpr std::string_view kLocalHeader = "local_header";
    ///@brief skip bitstream encoding
    static constexpr std::string_view kNoout = "noout";
} // namespace flags2

/**
 * @brief Set the group of picture (GOP) size
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kG = "g";

/**
 * @brief global_quality option
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kGlobalQuality = "global_quality";

/**
 * @brief QP factor between P- and I-frames
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kIQfactor = "i_qfactor";

/**
 * @brief QP offset between P- and I-frames
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kIQoffset = "i_qoffset";

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
 * @brief Interlaced DCT compare function
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kIldctcmp = "ildctcmp";

/**
 * @brief Minimum interval between IDR-frames
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kKeyintMin = "keyint_min";

/**
 * @brief Amount of motion predictors from the previous frame
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kLastPred = "last_pred";

/**
 * @brief Encoding level, usually corresponding to the profile level, codec-specific
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kLevel = "level";

/**
 * @brief Compresses bright areas stronger than medium ones
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kLumiMask = "lumi_mask";

/**
 * @brief Maximum number of pixels
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxPixels = "max_pixels";

/**
 * @brief Maximum bitrate (in bits/s). Used for VBV together with bufsize.
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxrate = "maxrate";

/**
 * @brief Macroblock compare function
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kMbcmp = "mbcmp";

/**
 * @brief Macroblock decision algorithm (high quality mode)
 *
 * For possible values see @ref mbd namespace
 */
static constexpr std::string_view kMbd = "mbd";
/**
 * @brief Namespace containing possible values of ::kMbd option.
 */
namespace mbd {
    ///@brief use fewest bits
    static constexpr std::string_view kBits = "bits";
    ///@brief use best rate distortion
    static constexpr std::string_view kRd = "rd";
    ///@brief use mbcmp
    static constexpr std::string_view kSimple = "simple";
} // namespace mbd

/**
 * @brief Maximum macroblock Lagrange factor (VBR)
 *
 * Type: int64, possible values [1.0, 32767.0]
 */
static constexpr std::string_view kMblmax = "mblmax";

/**
 * @brief Minimum macroblock Lagrange factor (VBR)
 *
 * Type: int64, possible values [1.0, 32767.0]
 */
static constexpr std::string_view kMblmin = "mblmin";

/**
 * @brief Limit motion vectors range (1023 for DivX player)
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kMeRange = "me_range";

/**
 * @brief Minimum bitrate (in bits/s). Most useful in setting up a CBR encode. It is of little use otherwise.
 *
 * Type: double, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kMinrate = "minrate";

/**
 * @brief mv0_threshold option
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMv0Threshold = "mv0_threshold";

/**
 * @brief Nsse weight
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kNssew = "nssew";

/**
 * @brief Inter masking
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kPMask = "p_mask";

/**
 * @brief Diamond type & size for motion estimation pre-pass
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kPreDiaSize = "pre_dia_size";

/**
 * @brief Pre motion estimation compare function
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kPrecmp = "precmp";

/**
 * @brief profile option
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kProfile = "profile";

/**
 * @brief Video quantizer scale blur (VBR)
 *
 * Type: string, possible values [-1.0, 3.4028234663852886e38]
 */
static constexpr std::string_view kQblur = "qblur";

/**
 * @brief Video quantizer scale compression (VBR). Constant of ratecontrol equation. Recommended range for default
 * rc_eq: 0.0-1.0
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kQcomp = "qcomp";

/**
 * @brief Maximum difference between the quantizer scales (VBR)
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kQdiff = "qdiff";

/**
 * @brief Maximum video quantizer scale (VBR)
 *
 * Type: int64, possible values [-1.0, 1024.0]
 */
static constexpr std::string_view kQmax = "qmax";

/**
 * @brief Minimum video quantizer scale (VBR)
 *
 * Type: int64, possible values [-1.0, 69.0]
 */
static constexpr std::string_view kQmin = "qmin";

/**
 * @brief Number of bits which should be loaded into the rc buffer before decoding starts
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kRcInitOccupancy = "rc_init_occupancy";

/**
 * @brief rc_max_vbv_use option
 *
 * Type: string, possible values [0.0, 3.4028234663852886e38]
 */
static constexpr std::string_view kRcMaxVbvUse = "rc_max_vbv_use";

/**
 * @brief rc_min_vbv_use option
 *
 * Type: string, possible values [0.0, 3.4028234663852886e38]
 */
static constexpr std::string_view kRcMinVbvUse = "rc_min_vbv_use";

/**
 * @brief Reference frames to consider for motion compensation
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kRefs = "refs";

/**
 * @brief Sample aspect ratio
 *
 * Type: binary, possible values [0.0, 10.0]
 */
static constexpr std::string_view kSar = "sar";

/**
 * @brief Spatial complexity masking
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kScplxMask = "scplx_mask";

/**
 * @brief Set the number of slices, used in parallelized encoding
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kSlices = "slices";

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
 * @brief Sub-pel ME compare function
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSubcmp = "subcmp";

/**
 * @brief Sub-pel motion estimation quality
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kSubq = "subq";

/**
 * @brief Temporal complexity masking
 *
 * Type: string, possible values [-3.4028234663852886e38, 3.4028234663852886e38]
 */
static constexpr std::string_view kTcplxMask = "tcplx_mask";

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
 * @brief Rate-distortion optimal quantization
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kTrellis = "trellis";

/**
 * @name Options for video encoders
This group contains a set of static string constants used to define various options of video encoders.
 */
///@{
namespace amv {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Always write luma and chroma matrix for mjpeg, useful for rtp streaming.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForceDuplicatedMatrix = "force_duplicated_matrix";

    /**
     * @brief Huffman table strategy
     *
     * For possible values see @ref huffman namespace
     */
    static constexpr std::string_view kHuffman = "huffman";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace amv
namespace apng {
    /**
     * @brief Set image resolution (in dots per inch)
     *
     * Type: int64, possible values     [0.0, 65536.0]
     */
    static constexpr std::string_view kDpi = "dpi";

    /**
     * @brief Set image resolution (in dots per meter)
     *
     * Type: int64, possible values     [0.0, 65536.0]
     */
    static constexpr std::string_view kDpm = "dpm";

    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace apng
namespace cfhd {
    /**
     * @brief q option
     *
     * For possible values see @ref q namespace
     */
    static constexpr std::string_view kQ = "q";

    /**
     * @brief Set quality
     *
     * Type: int64, possible values     [0.0, 12.0]
     */
    static constexpr std::string_view kQuality = "quality";

} // namespace cfhd
namespace cinepak {
    /**
     * @brief Max extra codebook recalculation passes, more is better and slower
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kMaxExtraCbIterations = "max_extra_cb_iterations";

    /**
     * @brief Limit strips/frame, vintage compatible is 1..3, otherwise the more the better
     *
     * Type: int64, possible values     [1.0, 32.0]
     */
    static constexpr std::string_view kMaxStrips = "max_strips";

    /**
     * @brief Enforce min strips/frame, more is worse and faster, must be <= max_strips
     *
     * Type: int64, possible values     [1.0, 32.0]
     */
    static constexpr std::string_view kMinStrips = "min_strips";

    /**
     * @brief Avoid wasting bytes, ignore vintage MacOS decoder
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSkipEmptyCb = "skip_empty_cb";

    /**
     * @brief How fast the strip number adapts, more is slightly better, much slower
     *
     * Type: int64, possible values     [0.0, 31.0]
     */
    static constexpr std::string_view kStripNumberAdaptivity = "strip_number_adaptivity";

} // namespace cinepak
namespace cljr {
    /**
     * @brief Dither type
     *
     * Type: int64, possible values     [0.0, 2.0]
     */
    static constexpr std::string_view kDitherType = "dither_type";

} // namespace cljr
namespace dnxhd {
    /**
     * @brief Intra quant bias
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kIbias = "ibias";

    /**
     * @brief Encode with Avid Nitris compatibility
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNitrisCompat = "nitris_compat";

    /**
     * @brief profile option
     *
     * For possible values see @ref profile namespace
     */
    static constexpr std::string_view kProfile = "profile";

} // namespace dnxhd
namespace dvvideo {
    /**
     * @brief Quantizer dead zone
     *
     * Type: int64, possible values     [0.0, 1024.0]
     */
    static constexpr std::string_view kQuantDeadzone = "quant_deadzone";

} // namespace dvvideo
namespace dxv {
    /**
     * @brief format option
     *
     * For possible values see @ref format namespace
     */
    static constexpr std::string_view kFormat = "format";
    /**
     * @brief Namespace containing possible values of ::kFormat option.
     */
    namespace format {
        ///@brief DXT1 (Normal Quality, No Alpha)
        static constexpr std::string_view kDxt1 = "dxt1";
    } // namespace format

} // namespace dxv
namespace exr {
    /**
     * @brief compr option
     *
     * For possible values see @ref compr namespace
     */
    static constexpr std::string_view kCompr = "compr";
    /**
     * @brief Namespace containing possible values of ::kCompr option.
     */
    namespace compr {
        ///@brief none
        static constexpr std::string_view kNone = "none";
        ///@brief RLE
        static constexpr std::string_view kRle = "rle";
        ///@brief ZIP1
        static constexpr std::string_view kZip1 = "zip1";
        ///@brief ZIP16
        static constexpr std::string_view kZip16 = "zip16";
    } // namespace compr

    /**
     * @brief Set compression type
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kCompression = "compression";

    /**
     * @brief Set pixel type
     *
     * Type: int64, possible values     [1.0, 2.0]
     */
    static constexpr std::string_view kFormat = "format";

    /**
     * @brief Set gamma
     *
     * Type: string, possible values     [0.001, 3.4028234663852886e38]
     */
    static constexpr std::string_view kGamma = "gamma";

    /**
     * @brief pixel option
     *
     * For possible values see @ref pixel namespace
     */
    static constexpr std::string_view kPixel = "pixel";

} // namespace exr
namespace ffv1 {
    /**
     * @brief Coder type
     *
     * For possible values see @ref coder namespace
     */
    static constexpr std::string_view kCoder = "coder";
    /**
     * @brief Namespace containing possible values of ::kCoder option.
     */
    namespace coder {
        ///@brief Range with custom table (the ac option exists for compatibility and is deprecated)
        static constexpr std::string_view kAc = "ac";
        ///@brief Range with default table
        static constexpr std::string_view kRangeDef = "range_def";
        ///@brief Range with custom table
        static constexpr std::string_view kRangeTab = "range_tab";
        ///@brief Golomb rice
        static constexpr std::string_view kRice = "rice";
    } // namespace coder

    /**
     * @brief Context model
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kContext = "context";

    /**
     * @brief Protect slices with CRCs
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSlicecrc = "slicecrc";

} // namespace ffv1
namespace ffvhuff {
    /**
     * @brief Set per-frame huffman tables
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kContext = "context";

    /**
     * @brief Allow multithreading for e.g. context=1 at the expense of determinism
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNonDeterministic = "non_deterministic";

    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace ffvhuff
namespace flv {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace flv
namespace gif {
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
        ///@brief enable picture offsetting
        static constexpr std::string_view kOffsetting = "offsetting";
        ///@brief enable transparency detection between frames
        static constexpr std::string_view kTransdiff = "transdiff";
    } // namespace flags

    /**
     * @brief Set GIF flags
     *
     * Type: int, possible values     []
     */
    static constexpr std::string_view kGifflags = "gifflags";

    /**
     * @brief Enable encoding only images per frame
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kGifimage = "gifimage";

    /**
     * @brief Write a palette to the global gif header where feasible
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kGlobalPalette = "global_palette";

} // namespace gif
namespace h261 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace h261
namespace h263 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Emit macroblock info for RFC 2190 packetization, the parameter value is the maximum payload size
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kMbInfo = "mb_info";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief Use overlapped block motion compensation.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kObmc = "obmc";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace h263
namespace h263p {
    /**
     * @brief Use alternative inter VLC.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAiv = "aiv";

    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief Use overlapped block motion compensation.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kObmc = "obmc";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

    /**
     * @brief Write slice start position at every GOB header instead of just GOB number.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStructuredSlices = "structured_slices";

    /**
     * @brief Use unlimited motion vectors.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUmv = "umv";

} // namespace h263p
namespace hap {
    /**
     * @brief Chunk count
     *
     * Type: int64, possible values     [1.0, 64.0]
     */
    static constexpr std::string_view kChunks = "chunks";

    /**
     * @brief Second-stage compressor
     *
     * For possible values see @ref compressor namespace
     */
    static constexpr std::string_view kCompressor = "compressor";
    /**
     * @brief Namespace containing possible values of ::kCompressor option.
     */
    namespace compressor {
        ///@brief None
        static constexpr std::string_view kNone = "none";
        ///@brief Snappy
        static constexpr std::string_view kSnappy = "snappy";
    } // namespace compressor

    /**
     * @brief format option
     *
     * For possible values see @ref format namespace
     */
    static constexpr std::string_view kFormat = "format";
    /**
     * @brief Namespace containing possible values of ::kFormat option.
     */
    namespace format {
        ///@brief Hap 1 (DXT1 textures)
        static constexpr std::string_view kHap = "hap";
        ///@brief Hap Alpha (DXT5 textures)
        static constexpr std::string_view kHapAlpha = "hap_alpha";
        ///@brief Hap Q (DXT5-YCoCg textures)
        static constexpr std::string_view kHapQ = "hap_q";
    } // namespace format

} // namespace hap
namespace huffyuv {
    /**
     * @brief Allow multithreading for e.g. context=1 at the expense of determinism
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNonDeterministic = "non_deterministic";

    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace huffyuv
namespace jpeg2000 {
    /**
     * @brief EPH marker
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kEph = "eph";

    /**
     * @brief Codec Format
     *
     * For possible values see @ref format namespace
     */
    static constexpr std::string_view kFormat = "format";

    /**
     * @brief Layer Rates
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kLayerRates = "layer_rates";

    /**
     * @brief DWT Type
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

    /**
     * @brief Progression Order
     *
     * For possible values see @ref prog namespace
     */
    static constexpr std::string_view kProg = "prog";

    /**
     * @brief SOP marker
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kSop = "sop";

    /**
     * @brief Tile Height
     *
     * Type: int64, possible values     [1.0, 1073741824.0]
     */
    static constexpr std::string_view kTileHeight = "tile_height";

    /**
     * @brief Tile Width
     *
     * Type: int64, possible values     [1.0, 1073741824.0]
     */
    static constexpr std::string_view kTileWidth = "tile_width";

} // namespace jpeg2000
namespace jpegls {
    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace jpegls
namespace ljpeg {
    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace ljpeg
namespace magicyuv {
    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace magicyuv
namespace mjpeg {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Always write luma and chroma matrix for mjpeg, useful for rtp streaming.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForceDuplicatedMatrix = "force_duplicated_matrix";

    /**
     * @brief Huffman table strategy
     *
     * For possible values see @ref huffman namespace
     */
    static constexpr std::string_view kHuffman = "huffman";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace mjpeg
namespace mpeg1video {
    /**
     * @brief Adjust sensitivity of b_frame_strategy 1
     *
     * Type: int64, possible values     [1.0, 2147483647.0]
     */
    static constexpr std::string_view kBSensitivity = "b_sensitivity";

    /**
     * @brief Strategy to choose between I/P/B-frames
     *
     * Type: int64, possible values     [0.0, 2.0]
     */
    static constexpr std::string_view kBStrategy = "b_strategy";

    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Downscale frames for dynamic B-frame decision
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kBrdScale = "brd_scale";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Timecode is in drop frame format.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kDropFrameTimecode = "drop_frame_timecode";

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief MPEG GOP Timecode in hh:mm:ss[:;.]ff format. Overrides timecode_frame_start.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kGopTimecode = "gop_timecode";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Reserve space for SVCD scan offset user data.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kScanOffset = "scan_offset";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

    /**
     * @brief GOP timecode frame start number, in non-drop-frame format
     *
     * Type: double, possible values     [-1.0, 9223372036854776000.0]
     */
    static constexpr std::string_view kTimecodeFrameStart = "timecode_frame_start";

} // namespace mpeg1video
namespace mpeg2video {
    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief Enable alternate scantable.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAlternateScan = "alternate_scan";

    /**
     * @brief avctx.level option
     *
     * For possible values see @ref avctx.level namespace
     */
    static constexpr std::string_view kAvctxLevel = "avctx.level";

    /**
     * @brief avctx.profile option
     *
     * For possible values see @ref avctx.profile namespace
     */
    static constexpr std::string_view kAvctxProfile = "avctx.profile";

    /**
     * @brief Adjust sensitivity of b_frame_strategy 1
     *
     * Type: int64, possible values     [1.0, 2147483647.0]
     */
    static constexpr std::string_view kBSensitivity = "b_sensitivity";

    /**
     * @brief Strategy to choose between I/P/B-frames
     *
     * Type: int64, possible values     [0.0, 2.0]
     */
    static constexpr std::string_view kBStrategy = "b_strategy";

    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Downscale frames for dynamic B-frame decision
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kBrdScale = "brd_scale";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Timecode is in drop frame format.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kDropFrameTimecode = "drop_frame_timecode";

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief MPEG GOP Timecode in hh:mm:ss[:;.]ff format. Overrides timecode_frame_start.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kGopTimecode = "gop_timecode";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Use MPEG-2 intra VLC table.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIntraVlc = "intra_vlc";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief Use nonlinear quantizer.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNonLinearQuant = "non_linear_quant";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Reserve space for SVCD scan offset user data.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kScanOffset = "scan_offset";

    /**
     * @brief Write sequence_display_extension blocks.
     *
     * For possible values see @ref seq_disp_ext namespace
     */
    static constexpr std::string_view kSeqDispExt = "seq_disp_ext";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

    /**
     * @brief GOP timecode frame start number, in non-drop-frame format
     *
     * Type: double, possible values     [-1.0, 9223372036854776000.0]
     */
    static constexpr std::string_view kTimecodeFrameStart = "timecode_frame_start";

    /**
     * @brief Video_format in the sequence_display_extension indicating the source of the video.
     *
     * For possible values see @ref video_format namespace
     */
    static constexpr std::string_view kVideoFormat = "video_format";

} // namespace mpeg2video
namespace mpeg4 {
    /**
     * @brief Enable alternate scantable.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAlternateScan = "alternate_scan";

    /**
     * @brief avctx.profile option
     *
     * For possible values see @ref avctx.profile namespace
     */
    static constexpr std::string_view kAvctxProfile = "avctx.profile";

    /**
     * @brief Adjust sensitivity of b_frame_strategy 1
     *
     * Type: int64, possible values     [1.0, 2147483647.0]
     */
    static constexpr std::string_view kBSensitivity = "b_sensitivity";

    /**
     * @brief Strategy to choose between I/P/B-frames
     *
     * Type: int64, possible values     [0.0, 2.0]
     */
    static constexpr std::string_view kBStrategy = "b_strategy";

    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Downscale frames for dynamic B-frame decision
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kBrdScale = "brd_scale";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Use data partitioning.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kDataPartitioning = "data_partitioning";

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Use MPEG quantizers instead of H.263
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kMpegQuant = "mpeg_quant";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace mpeg4
namespace msmpeg4v2 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace msmpeg4v2
namespace msmpeg4 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace msmpeg4
namespace png {
    /**
     * @brief Set image resolution (in dots per inch)
     *
     * Type: int64, possible values     [0.0, 65536.0]
     */
    static constexpr std::string_view kDpi = "dpi";

    /**
     * @brief Set image resolution (in dots per meter)
     *
     * Type: int64, possible values     [0.0, 65536.0]
     */
    static constexpr std::string_view kDpm = "dpm";

    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace png
namespace prores {
    /**
     * @brief Vendor ID
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kVendor = "vendor";

} // namespace prores
namespace prores_aw {
    /**
     * @brief Vendor ID
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kVendor = "vendor";

} // namespace prores_aw
namespace prores_ks {
    /**
     * @brief Bits for alpha plane
     *
     * Type: int64, possible values     [0.0, 16.0]
     */
    static constexpr std::string_view kAlphaBits = "alpha_bits";

    /**
     * @brief Desired bits per macroblock
     *
     * Type: int64, possible values     [0.0, 8192.0]
     */
    static constexpr std::string_view kBitsPerMb = "bits_per_mb";

    /**
     * @brief Macroblocks per slice
     *
     * Type: int64, possible values     [1.0, 8.0]
     */
    static constexpr std::string_view kMbsPerSlice = "mbs_per_slice";

    /**
     * @brief profile option
     *
     * For possible values see @ref profile namespace
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Quantiser matrix
     *
     * For possible values see @ref quant_mat namespace
     */
    static constexpr std::string_view kQuantMat = "quant_mat";

    /**
     * @brief Vendor ID
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kVendor = "vendor";

} // namespace prores_ks
namespace roqvideo {
    /**
     * @brief Whether to respect known limitations in Quake 3 decoder
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kQuake3Compat = "quake3_compat";

} // namespace roqvideo
namespace rpza {
    /**
     * @brief continue_one_color_thresh option
     *
     * Type: int64, possible values     [0.0, 24.0]
     */
    static constexpr std::string_view kContinueOneColorThresh = "continue_one_color_thresh";

    /**
     * @brief sixteen_color_thresh option
     *
     * Type: int64, possible values     [0.0, 24.0]
     */
    static constexpr std::string_view kSixteenColorThresh = "sixteen_color_thresh";

    /**
     * @brief skip_frame_thresh option
     *
     * Type: int64, possible values     [0.0, 24.0]
     */
    static constexpr std::string_view kSkipFrameThresh = "skip_frame_thresh";

    /**
     * @brief start_one_color_thresh option
     *
     * Type: int64, possible values     [0.0, 24.0]
     */
    static constexpr std::string_view kStartOneColorThresh = "start_one_color_thresh";

} // namespace rpza
namespace rv10 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace rv10
namespace rv20 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace rv20
namespace sgi {
    /**
     * @brief Use run-length compression
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kRle = "rle";

} // namespace sgi
namespace snow {
    /**
     * @brief Penalty for intra blocks in block decission
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Dia size for the iterative ME
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kIterativeDiaSize = "iterative_dia_size";

    /**
     * @brief Only do ME/MC (I frames -> ref, P frame -> ME+MC).
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMemcOnly = "memc_only";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Skip final bitstream writeout.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNoBitstream = "no_bitstream";

    /**
     * @brief Spatial decomposition type
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

} // namespace snow
namespace speedhq {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace speedhq
namespace sunrast {
    /**
     * @brief Use run-length compression
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kRle = "rle";

} // namespace sunrast
namespace svq1 {
    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion-est namespace
     */
    static constexpr std::string_view kMotionEst = "motion-est";

} // namespace svq1
namespace targa {
    /**
     * @brief Use run-length compression
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kRle = "rle";

} // namespace targa
namespace tiff {
    /**
     * @brief compression_algo option
     *
     * For possible values see @ref compression_algo namespace
     */
    static constexpr std::string_view kCompressionAlgo = "compression_algo";

    /**
     * @brief Set the image resolution (in dpi)
     *
     * Type: int64, possible values     [1.0, 65536.0]
     */
    static constexpr std::string_view kDpi = "dpi";

} // namespace tiff
namespace utvideo {
    /**
     * @brief Prediction method
     *
     * For possible values see @ref pred namespace
     */
    static constexpr std::string_view kPred = "pred";

} // namespace utvideo
namespace vbn {
    /**
     * @brief Texture format
     *
     * For possible values see @ref format namespace
     */
    static constexpr std::string_view kFormat = "format";
    /**
     * @brief Namespace containing possible values of ::kFormat option.
     */
    namespace format {
        ///@brief DXT1 texture
        static constexpr std::string_view kDxt1 = "dxt1";
        ///@brief DXT5 texture
        static constexpr std::string_view kDxt5 = "dxt5";
        ///@brief RAW texture
        static constexpr std::string_view kRaw = "raw";
    } // namespace format

} // namespace vbn
namespace vc2 {
    /**
     * @brief Custom quantization matrix
     *
     * Type: int64, possible values     [0.0, 3.0]
     */
    static constexpr std::string_view kQm = "qm";

    /**
     * @brief quant_matrix option
     *
     * For possible values see @ref quant_matrix namespace
     */
    static constexpr std::string_view kQuantMatrix = "quant_matrix";
    /**
     * @brief Namespace containing possible values of ::kQuantMatrix option.
     */
    namespace quant_matrix {
        ///@brief Prevents low bitrate discoloration
        static constexpr std::string_view kColor = "color";
        ///@brief Default from the specifications
        static constexpr std::string_view kDefault = "default";
        ///@brief Optimize for PSNR
        static constexpr std::string_view kFlat = "flat";
    } // namespace quant_matrix

    /**
     * @brief Slice height
     *
     * Type: int64, possible values     [8.0, 1024.0]
     */
    static constexpr std::string_view kSliceHeight = "slice_height";

    /**
     * @brief Slice width
     *
     * Type: int64, possible values     [32.0, 1024.0]
     */
    static constexpr std::string_view kSliceWidth = "slice_width";

    /**
     * @brief Max undershoot in percent
     *
     * Type: float, possible values     [0.0, 45.0]
     */
    static constexpr std::string_view kTolerance = "tolerance";

    /**
     * @brief Transform depth
     *
     * Type: int64, possible values     [1.0, 5.0]
     */
    static constexpr std::string_view kWaveletDepth = "wavelet_depth";

    /**
     * @brief wavelet_idx option
     *
     * For possible values see @ref wavelet_idx namespace
     */
    static constexpr std::string_view kWaveletIdx = "wavelet_idx";
    /**
     * @brief Namespace containing possible values of ::kWaveletIdx option.
     */
    namespace wavelet_idx {
        ///@brief LeGall (5,3)
        static constexpr std::string_view k53 = "5_3";
        ///@brief Deslauriers-Dubuc (9,7)
        static constexpr std::string_view k97 = "9_7";
        ///@brief Haar (with shift)
        static constexpr std::string_view kHaar = "haar";
        ///@brief Haar (without shift)
        static constexpr std::string_view kHaarNoshift = "haar_noshift";
    } // namespace wavelet_idx

    /**
     * @brief Transform type
     *
     * Type: int64, possible values     [0.0, 7.0]
     */
    static constexpr std::string_view kWaveletType = "wavelet_type";

} // namespace vc2
namespace wmv1 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace wmv1
namespace wmv2 {
    /**
     * @brief Increase the quantizer for macroblocks close to borders
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kBorderMask = "border_mask";

    /**
     * @brief Single coefficient elimination threshold for chrominance (negative values also consider dc
     * coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaElimThreshold = "chroma_elim_threshold";

    /**
     * @brief cmp_func option
     *
     * For possible values see @ref cmp_func namespace
     */
    static constexpr std::string_view kCmpFunc = "cmp_func";
    /**
     * @brief Namespace containing possible values of ::kCmpFunc option.
     */
    namespace cmp_func {
        ///@brief Number of bits needed for the block
        static constexpr std::string_view kBit = "bit";
        ///@brief Sum of absolute DCT transformed differences
        static constexpr std::string_view kDct = "dct";
        ///@brief Sum of absolute differences, median predicted
        static constexpr std::string_view kMsad = "msad";
        ///@brief Noise preserving sum of squared differences
        static constexpr std::string_view kNsse = "nsse";
        ///@brief Sum of squared quantization errors, low quality
        static constexpr std::string_view kPsnr = "psnr";
        ///@brief Rate distortion optimal, slow
        static constexpr std::string_view kRd = "rd";
        ///@brief Sum of absolute differences, fast
        static constexpr std::string_view kSad = "sad";
        ///@brief Sum of absolute Hadamard transformed differences
        static constexpr std::string_view kSatd = "satd";
        ///@brief Sum of squared errors
        static constexpr std::string_view kSse = "sse";
        ///@brief Sum of absolute vertical differences
        static constexpr std::string_view kVsad = "vsad";
        ///@brief Sum of squared vertical differences
        static constexpr std::string_view kVsse = "vsse";
        ///@brief Zero
        static constexpr std::string_view kZero = "zero";
    } // namespace cmp_func

    /**
     * @brief Simulate errors in the bitstream to test error concealment.
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kErrorRate = "error_rate";

    /**
     * @brief Penalty for intra blocks in block decision
     *
     * Type: int64, possible values     [0.0, 1073741823.0]
     */
    static constexpr std::string_view kIntraPenalty = "intra_penalty";

    /**
     * @brief Maximum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmax = "lmax";

    /**
     * @brief Minimum Lagrange factor (VBR)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kLmin = "lmin";

    /**
     * @brief Single coefficient elimination threshold for luminance (negative values also consider dc coefficient)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kLumaElimThreshold = "luma_elim_threshold";

    /**
     * @brief Motion estimation bitrate penalty compensation (1.0 = 256)
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepc = "mepc";

    /**
     * @brief Pre motion estimation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kMepre = "mepre";

    /**
     * @brief Motion estimation algorithm
     *
     * For possible values see @ref motion_est namespace
     */
    static constexpr std::string_view kMotionEst = "motion_est";

    /**
     * @brief Flags common for all mpegvideo-based encoders.
     *
     * For possible values see @ref mpv_flags namespace
     */
    static constexpr std::string_view kMpvFlags = "mpv_flags";
    /**
     * @brief Namespace containing possible values of ::kMpvFlags option.
     */
    namespace mpv_flags {
        ///@brief use rate distortion optimization for CBP
        static constexpr std::string_view kCbpRd = "cbp_rd";
        ///@brief always try a mb with mv=<0,0>
        static constexpr std::string_view kMv0 = "mv0";
        ///@brief normalize adaptive quantization
        static constexpr std::string_view kNaq = "naq";
        ///@brief Use rate distortion optimization for qp selection
        static constexpr std::string_view kQpRd = "qp_rd";
        ///@brief RD optimal MB level residual skipping
        static constexpr std::string_view kSkipRd = "skip_rd";
        ///@brief Strictly enforce gop size
        static constexpr std::string_view kStrictGop = "strict_gop";
    } // namespace mpv_flags

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief RTP payload size in bytes
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kPs = "ps";

    /**
     * @brief How to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function)
     *
     * Type: string, possible values     [0.0, 99.0]
     */
    static constexpr std::string_view kQsquish = "qsquish";

    /**
     * @brief quantizer_noise_shaping option
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kQuantizerNoiseShaping = "quantizer_noise_shaping";

    /**
     * @brief Currently useless
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcBufAggressivity = "rc_buf_aggressivity";

    /**
     * @brief Set rate control equation. When computing the expression, besides the standard functions defined in
     * the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also
     * the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp
     * avgIITex avgPITex avgPPTex avgBPTex avgTex.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kRcEq = "rc_eq";

    /**
     * @brief Initial complexity for 1-pass encoding
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcInitCplx = "rc_init_cplx";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: string, possible values     [-3.4028234663852886e38, 3.4028234663852886e38]
     */
    static constexpr std::string_view kRcQmodAmp = "rc_qmod_amp";

    /**
     * @brief Experimental quantizer modulation
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kRcQmodFreq = "rc_qmod_freq";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Frame skip compare function
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipCmp = "skip_cmp";

    /**
     * @brief Frame skip exponent
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipExp = "skip_exp";

    /**
     * @brief Frame skip factor
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipFactor = "skip_factor";

    /**
     * @brief Frame skip threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kSkipThreshold = "skip_threshold";

} // namespace wmv2
namespace libaom_av1 {
    /**
     * @brief Set libaom options using a :-separated list of key=value pairs
     *
     * Type: uint64, possible values     []
     */
    static constexpr std::string_view kAomParams = "aom-params";

    /**
     * @brief Adaptive quantization mode
     *
     * Type: int64, possible values     [-1.0, 4.0]
     */
    static constexpr std::string_view kAqMode = "aq-mode";

    /**
     * @brief aq_mode option
     *
     * For possible values see @ref aq_mode namespace
     */
    static constexpr std::string_view kAqMode = "aq_mode";
    /**
     * @brief Namespace containing possible values of ::kAqMode option.
     */
    namespace aq_mode {
        ///@brief Complexity based Aq
        static constexpr std::string_view kComplexity = "complexity";
        ///@brief Cyclic Refresh Aq
        static constexpr std::string_view kCyclic = "cyclic";
        ///@brief Aq not used
        static constexpr std::string_view kNone = "none";
        ///@brief Variance based Aq
        static constexpr std::string_view kVariance = "variance";
    } // namespace aq_mode

    /**
     * @brief Altref noise reduction max frame count
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrMaxFrames = "arnr-max-frames";

    /**
     * @brief Altref noise reduction filter strength
     *
     * Type: int64, possible values     [-1.0, 6.0]
     */
    static constexpr std::string_view kArnrStrength = "arnr-strength";

    /**
     * @brief Enable use of alternate reference frames (2-pass only)
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kAutoAltRef = "auto-alt-ref";

    /**
     * @brief avctx.profile option
     *
     * For possible values see @ref avctx.profile namespace
     */
    static constexpr std::string_view kAvctxProfile = "avctx.profile";

    /**
     * @brief Quality/Speed ratio modifier
     *
     * Type: int64, possible values     [0.0, 8.0]
     */
    static constexpr std::string_view kCpuUsed = "cpu-used";

    /**
     * @brief Select the quality for constant quality mode
     *
     * Type: int64, possible values     [-1.0, 63.0]
     */
    static constexpr std::string_view kCrf = "crf";

    /**
     * @brief Denoise block size
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kDenoiseBlockSize = "denoise-block-size";

    /**
     * @brief Amount of noise to be removed
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kDenoiseNoiseLevel = "denoise-noise-level";

    /**
     * @brief Frame drop threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kDropThreshold = "drop-threshold";

    /**
     * @brief Enable 1:4/4:1 partitions
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnable1to4Partitions = "enable-1to4-partitions";

    /**
     * @brief Enable ab shape partitions
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableAbPartitions = "enable-ab-partitions";

    /**
     * @brief Enable angle delta intra prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableAngleDelta = "enable-angle-delta";

    /**
     * @brief Enable CDEF filtering
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableCdef = "enable-cdef";

    /**
     * @brief Enable chroma predicted from luma intra prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableCflIntra = "enable-cfl-intra";

    /**
     * @brief Enable difference-weighted compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableDiffWtdComp = "enable-diff-wtd-comp";

    /**
     * @brief Enable distance-weighted compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableDistWtdComp = "enable-dist-wtd-comp";

    /**
     * @brief Enable dual filter
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableDualFilter = "enable-dual-filter";

    /**
     * @brief Enable filter intra predictor
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableFilterIntra = "enable-filter-intra";

    /**
     * @brief Enable extended transform type
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableFlipIdtx = "enable-flip-idtx";

    /**
     * @brief Enable global motion
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableGlobalMotion = "enable-global-motion";

    /**
     * @brief Enable interinter wedge compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableInterinterWedge = "enable-interinter-wedge";

    /**
     * @brief Enable interintra compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableInterintraComp = "enable-interintra-comp";

    /**
     * @brief Enable interintra wedge compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableInterintraWedge = "enable-interintra-wedge";

    /**
     * @brief Enable intra edge filter
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableIntraEdgeFilter = "enable-intra-edge-filter";

    /**
     * @brief Enable intra block copy prediction mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableIntrabc = "enable-intrabc";

    /**
     * @brief Enable masked compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableMaskedComp = "enable-masked-comp";

    /**
     * @brief Enable obmc
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableObmc = "enable-obmc";

    /**
     * @brief Enable one sided compound
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableOnesidedComp = "enable-onesided-comp";

    /**
     * @brief Enable paeth predictor in intra prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnablePaethIntra = "enable-paeth-intra";

    /**
     * @brief Enable palette prediction mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnablePalette = "enable-palette";

    /**
     * @brief Enable rectangular partitions
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableRectPartitions = "enable-rect-partitions";

    /**
     * @brief Use reduced set of single and compound references
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableReducedReferenceSet = "enable-reduced-reference-set";

    /**
     * @brief Enable temporal mv prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableRefFrameMvs = "enable-ref-frame-mvs";

    /**
     * @brief Enable Loop Restoration filtering
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableRestoration = "enable-restoration";

    /**
     * @brief Enable smooth interintra mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableSmoothInterintra = "enable-smooth-interintra";

    /**
     * @brief Enable smooth intra prediction mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableSmoothIntra = "enable-smooth-intra";

    /**
     * @brief Enable 64-pt transform
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableTx64 = "enable-tx64";

    /**
     * @brief er option
     *
     * For possible values see @ref er namespace
     */
    static constexpr std::string_view kEr = "er";
    /**
     * @brief Namespace containing possible values of ::kEr option.
     */
    namespace er {
        ///@brief Improve resiliency against losses of whole frames
        static constexpr std::string_view kDefault = "default";
    } // namespace er

    /**
     * @brief Error resilience configuration
     *
     * Type: int, possible values     []
     */
    static constexpr std::string_view kErrorResilience = "error-resilience";

    /**
     * @brief Enable frame parallel decodability features
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFrameParallel = "frame-parallel";

    /**
     * @brief Number of frames to look ahead at for alternate reference frame selection
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kLagInFrames = "lag-in-frames";

    /**
     * @brief GOP max bitrate (% of target)
     *
     * Type: int64, possible values     [-1.0, 5000.0]
     */
    static constexpr std::string_view kMaxsectionPct = "maxsection-pct";

    /**
     * @brief GOP min bitrate (% of target)
     *
     * Type: int64, possible values     [-1.0, 100.0]
     */
    static constexpr std::string_view kMinsectionPct = "minsection-pct";

    /**
     * @brief Datarate overshoot (max) target (%)
     *
     * Type: int64, possible values     [-1.0, 1000.0]
     */
    static constexpr std::string_view kOvershootPct = "overshoot-pct";

    /**
     * @brief Use reduced set of transform types
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kReducedTxTypeSet = "reduced-tx-type-set";

    /**
     * @brief Enable row based multi-threading
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kRowMt = "row-mt";

    /**
     * @brief A change threshold on blocks below which they will be skipped by the encoder
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kStaticThresh = "static-thresh";

    /**
     * @brief Encode in single frame mode (typically used for still AVIF images).
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStillPicture = "still-picture";

    /**
     * @brief Log2 of number of tile columns to use
     *
     * Type: int64, possible values     [-1.0, 6.0]
     */
    static constexpr std::string_view kTileColumns = "tile-columns";

    /**
     * @brief Log2 of number of tile rows to use
     *
     * Type: int64, possible values     [-1.0, 6.0]
     */
    static constexpr std::string_view kTileRows = "tile-rows";

    /**
     * @brief Tile columns x rows
     *
     * Type: pixel_fmt, possible values     []
     */
    static constexpr std::string_view kTiles = "tiles";

    /**
     * @brief The metric that the encoder tunes for. Automatically chosen by the encoder by default
     *
     * For possible values see @ref tune namespace
     */
    static constexpr std::string_view kTune = "tune";

    /**
     * @brief Datarate undershoot (min) target (%)
     *
     * Type: int64, possible values     [-1.0, 100.0]
     */
    static constexpr std::string_view kUndershootPct = "undershoot-pct";

    /**
     * @brief Quality and compression efficiency vs speed trade-off
     *
     * For possible values see @ref usage namespace
     */
    static constexpr std::string_view kUsage = "usage";
    /**
     * @brief Namespace containing possible values of ::kUsage option.
     */
    namespace usage {
        ///@brief All Intra encoding
        static constexpr std::string_view kAllintra = "allintra";
        ///@brief Good quality
        static constexpr std::string_view kGood = "good";
        ///@brief Realtime encoding
        static constexpr std::string_view kRealtime = "realtime";
    } // namespace usage

    /**
     * @brief Use DCT only for INTER modes
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUseInterDctOnly = "use-inter-dct-only";

    /**
     * @brief Use DCT only for INTRA modes
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUseIntraDctOnly = "use-intra-dct-only";

    /**
     * @brief Use default-transform only for INTRA modes
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUseIntraDefaultTxOnly = "use-intra-default-tx-only";

} // namespace libaom_av1
namespace libopenjpeg {
    /**
     * @brief Digital Cinema
     *
     * For possible values see @ref cinema_mode namespace
     */
    static constexpr std::string_view kCinemaMode = "cinema_mode";

    /**
     * @brief disto_alloc option
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kDistoAlloc = "disto_alloc";

    /**
     * @brief fixed_quality option
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kFixedQuality = "fixed_quality";

    /**
     * @brief Codec Format
     *
     * For possible values see @ref format namespace
     */
    static constexpr std::string_view kFormat = "format";

    /**
     * @brief irreversible option
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kIrreversible = "irreversible";

    /**
     * @brief numresolution option
     *
     * Type: int64, possible values     [0.0, 33.0]
     */
    static constexpr std::string_view kNumresolution = "numresolution";

    /**
     * @brief profile option
     *
     * For possible values see @ref profile namespace
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Progression Order
     *
     * For possible values see @ref prog_order namespace
     */
    static constexpr std::string_view kProgOrder = "prog_order";

} // namespace libopenjpeg
namespace libvpx {
    /**
     * @brief arnr option
     *
     * For possible values see @ref arnr namespace
     */
    static constexpr std::string_view kArnr = "arnr";

    /**
     * @brief Altref noise reduction max frame count
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrMaxframes = "arnr-maxframes";

    /**
     * @brief Altref noise reduction filter strength
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrStrength = "arnr-strength";

    /**
     * @brief Altref noise reduction filter type
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrType = "arnr-type";

    /**
     * @brief Altref noise reduction max frame count
     *
     * Type: int64, possible values     [0.0, 15.0]
     */
    static constexpr std::string_view kArnrMaxFrames = "arnr_max_frames";

    /**
     * @brief Altref noise reduction filter strength
     *
     * Type: int64, possible values     [0.0, 6.0]
     */
    static constexpr std::string_view kArnrStrength = "arnr_strength";

    /**
     * @brief Altref noise reduction filter type
     *
     * Type: int64, possible values     [1.0, 3.0]
     */
    static constexpr std::string_view kArnrType = "arnr_type";

    /**
     * @brief Enable use of alternate reference frames (2-pass only)
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kAutoAltRef = "auto-alt-ref";

    /**
     * @brief Quality/Speed ratio modifier
     *
     * Type: int64, possible values     [-16.0, 16.0]
     */
    static constexpr std::string_view kCpuUsed = "cpu-used";

    /**
     * @brief Select the quality for constant quality mode
     *
     * Type: int64, possible values     [-1.0, 63.0]
     */
    static constexpr std::string_view kCrf = "crf";

    /**
     * @brief Time to spend encoding, in microseconds.
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kDeadline = "deadline";

    /**
     * @brief Frame drop threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kDropThreshold = "drop-threshold";

    /**
     * @brief er option
     *
     * For possible values see @ref er namespace
     */
    static constexpr std::string_view kEr = "er";
    /**
     * @brief Namespace containing possible values of ::kEr option.
     */
    namespace er {
        ///@brief Improve resiliency against losses of whole frames
        static constexpr std::string_view kDefault = "default";
        ///@brief The frame partitions are independently decodable by the bool decoder, meaning that partitions can
        /// be decoded even though earlier partitions have been lost. Note that intra prediction is still done over
        /// the partition boundary.
        static constexpr std::string_view kPartitions = "partitions";
    } // namespace er

    /**
     * @brief Error resilience configuration
     *
     * Type: int, possible values     []
     */
    static constexpr std::string_view kErrorResilient = "error-resilient";

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
        ///@brief enable use of alternate reference frames (VP8/2-pass only)
        static constexpr std::string_view kAltref = "altref";
        ///@brief enable error resilience
        static constexpr std::string_view kErrorResilient = "error_resilient";
    } // namespace flags

    /**
     * @brief Number of frames to look ahead for alternate reference frame selection
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kLagInFrames = "lag-in-frames";

    /**
     * @brief Maximum I-frame bitrate (pct) 0=unlimited
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kMaxIntraRate = "max-intra-rate";

    /**
     * @brief Noise sensitivity
     *
     * Type: int64, possible values     [0.0, 4.0]
     */
    static constexpr std::string_view kNoiseSensitivity = "noise-sensitivity";

    /**
     * @brief Datarate overshoot (max) target (%)
     *
     * Type: int64, possible values     [-1.0, 1000.0]
     */
    static constexpr std::string_view kOvershootPct = "overshoot-pct";

    /**
     * @brief quality option
     *
     * For possible values see @ref quality namespace
     */
    static constexpr std::string_view kQuality = "quality";

    /**
     * @brief Number of frames to look ahead for alternate reference frame selection
     *
     * Type: int64, possible values     [0.0, 25.0]
     */
    static constexpr std::string_view kRcLookahead = "rc_lookahead";

    /**
     * @brief Encoder screen content mode
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kScreenContentMode = "screen-content-mode";

    /**
     * @brief Increase sharpness at the expense of lower PSNR
     *
     * Type: int64, possible values     [-1.0, 7.0]
     */
    static constexpr std::string_view kSharpness = "sharpness";

    /**
     * @brief speed option
     *
     * Type: int64, possible values     [-16.0, 16.0]
     */
    static constexpr std::string_view kSpeed = "speed";

    /**
     * @brief A change threshold on blocks below which they will be skipped by the encoder
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kStaticThresh = "static-thresh";

    /**
     * @brief Temporal scaling configuration using a :-separated list of key=value parameters
     *
     * Type: uint64, possible values     []
     */
    static constexpr std::string_view kTsParameters = "ts-parameters";

    /**
     * @brief Tune the encoding to a specific scenario
     *
     * For possible values see @ref tune namespace
     */
    static constexpr std::string_view kTune = "tune";

    /**
     * @brief Datarate undershoot (min) target (%)
     *
     * Type: int64, possible values     [-1.0, 100.0]
     */
    static constexpr std::string_view kUndershootPct = "undershoot-pct";

    /**
     * @brief vp8flags option
     *
     * Type: int, possible values     []
     */
    static constexpr std::string_view kVp8flags = "vp8flags";

} // namespace libvpx
namespace libvpx_vp9 {
    /**
     * @brief Adaptive quantization mode
     *
     * Type: int64, possible values     [-1.0, 4.0]
     */
    static constexpr std::string_view kAqMode = "aq-mode";

    /**
     * @brief aq_mode option
     *
     * For possible values see @ref aq_mode namespace
     */
    static constexpr std::string_view kAqMode = "aq_mode";
    /**
     * @brief Namespace containing possible values of ::kAqMode option.
     */
    namespace aq_mode {
        ///@brief Complexity based Aq
        static constexpr std::string_view kComplexity = "complexity";
        ///@brief Cyclic Refresh Aq
        static constexpr std::string_view kCyclic = "cyclic";
        ///@brief 360 video Aq
        static constexpr std::string_view kEquator360 = "equator360";
        ///@brief Aq not used
        static constexpr std::string_view kNone = "none";
        ///@brief Variance based Aq
        static constexpr std::string_view kVariance = "variance";
    } // namespace aq_mode

    /**
     * @brief arnr option
     *
     * For possible values see @ref arnr namespace
     */
    static constexpr std::string_view kArnr = "arnr";

    /**
     * @brief Altref noise reduction max frame count
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrMaxframes = "arnr-maxframes";

    /**
     * @brief Altref noise reduction filter strength
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrStrength = "arnr-strength";

    /**
     * @brief Altref noise reduction filter type
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kArnrType = "arnr-type";

    /**
     * @brief Altref noise reduction max frame count
     *
     * Type: int64, possible values     [0.0, 15.0]
     */
    static constexpr std::string_view kArnrMaxFrames = "arnr_max_frames";

    /**
     * @brief Altref noise reduction filter strength
     *
     * Type: int64, possible values     [0.0, 6.0]
     */
    static constexpr std::string_view kArnrStrength = "arnr_strength";

    /**
     * @brief Altref noise reduction filter type
     *
     * Type: int64, possible values     [1.0, 3.0]
     */
    static constexpr std::string_view kArnrType = "arnr_type";

    /**
     * @brief Enable use of alternate reference frames (2-pass only)
     *
     * Type: int64, possible values     [-1.0, 6.0]
     */
    static constexpr std::string_view kAutoAltRef = "auto-alt-ref";

    /**
     * @brief Corpus vbr complexity midpoint
     *
     * Type: int64, possible values     [-1.0, 10000.0]
     */
    static constexpr std::string_view kCorpusComplexity = "corpus-complexity";

    /**
     * @brief Quality/Speed ratio modifier
     *
     * Type: int64, possible values     [-8.0, 8.0]
     */
    static constexpr std::string_view kCpuUsed = "cpu-used";

    /**
     * @brief Select the quality for constant quality mode
     *
     * Type: int64, possible values     [-1.0, 63.0]
     */
    static constexpr std::string_view kCrf = "crf";

    /**
     * @brief Time to spend encoding, in microseconds.
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kDeadline = "deadline";

    /**
     * @brief Frame drop threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kDropThreshold = "drop-threshold";

    /**
     * @brief Enable temporal dependency model
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEnableTpl = "enable-tpl";

    /**
     * @brief er option
     *
     * For possible values see @ref er namespace
     */
    static constexpr std::string_view kEr = "er";
    /**
     * @brief Namespace containing possible values of ::kEr option.
     */
    namespace er {
        ///@brief Improve resiliency against losses of whole frames
        static constexpr std::string_view kDefault = "default";
        ///@brief The frame partitions are independently decodable by the bool decoder, meaning that partitions can
        /// be decoded even though earlier partitions have been lost. Note that intra prediction is still done over
        /// the partition boundary.
        static constexpr std::string_view kPartitions = "partitions";
    } // namespace er

    /**
     * @brief Error resilience configuration
     *
     * Type: int, possible values     []
     */
    static constexpr std::string_view kErrorResilient = "error-resilient";

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
        ///@brief enable use of alternate reference frames (VP8/2-pass only)
        static constexpr std::string_view kAltref = "altref";
        ///@brief enable error resilience
        static constexpr std::string_view kErrorResilient = "error_resilient";
    } // namespace flags

    /**
     * @brief Enable frame parallel decodability features
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFrameParallel = "frame-parallel";

    /**
     * @brief Number of frames to look ahead for alternate reference frame selection
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kLagInFrames = "lag-in-frames";

    /**
     * @brief Specify level
     *
     * Type: string, possible values     [-1.0, 6.2]
     */
    static constexpr std::string_view kLevel = "level";

    /**
     * @brief Lossless mode
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kLossless = "lossless";

    /**
     * @brief Maximum I-frame bitrate (pct) 0=unlimited
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kMaxIntraRate = "max-intra-rate";

    /**
     * @brief Minimum golden/alternate reference frame interval
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kMinGfInterval = "min-gf-interval";

    /**
     * @brief Noise sensitivity
     *
     * Type: int64, possible values     [0.0, 4.0]
     */
    static constexpr std::string_view kNoiseSensitivity = "noise-sensitivity";

    /**
     * @brief Datarate overshoot (max) target (%)
     *
     * Type: int64, possible values     [-1.0, 1000.0]
     */
    static constexpr std::string_view kOvershootPct = "overshoot-pct";

    /**
     * @brief quality option
     *
     * For possible values see @ref quality namespace
     */
    static constexpr std::string_view kQuality = "quality";

    /**
     * @brief Number of frames to look ahead for alternate reference frame selection
     *
     * Type: int64, possible values     [0.0, 25.0]
     */
    static constexpr std::string_view kRcLookahead = "rc_lookahead";

    /**
     * @brief Row based multi-threading
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kRowMt = "row-mt";

    /**
     * @brief Increase sharpness at the expense of lower PSNR
     *
     * Type: int64, possible values     [-1.0, 7.0]
     */
    static constexpr std::string_view kSharpness = "sharpness";

    /**
     * @brief speed option
     *
     * Type: int64, possible values     [-16.0, 16.0]
     */
    static constexpr std::string_view kSpeed = "speed";

    /**
     * @brief A change threshold on blocks below which they will be skipped by the encoder
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kStaticThresh = "static-thresh";

    /**
     * @brief Number of tile columns to use, log2
     *
     * Type: int64, possible values     [-1.0, 6.0]
     */
    static constexpr std::string_view kTileColumns = "tile-columns";

    /**
     * @brief Number of tile rows to use, log2
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kTileRows = "tile-rows";

    /**
     * @brief Temporal scaling configuration using a :-separated list of key=value parameters
     *
     * Type: uint64, possible values     []
     */
    static constexpr std::string_view kTsParameters = "ts-parameters";

    /**
     * @brief Tune the encoding to a specific scenario
     *
     * For possible values see @ref tune namespace
     */
    static constexpr std::string_view kTune = "tune";

    /**
     * @brief Tune content type
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kTuneContent = "tune-content";

    /**
     * @brief tune_content option
     *
     * For possible values see @ref tune_content namespace
     */
    static constexpr std::string_view kTuneContent = "tune_content";
    /**
     * @brief Namespace containing possible values of ::kTuneContent option.
     */
    namespace tune_content {
        ///@brief Regular video content
        static constexpr std::string_view kDefault = "default";
        ///@brief Film content; improves grain retention
        static constexpr std::string_view kFilm = "film";
        ///@brief Screen capture content
        static constexpr std::string_view kScreen = "screen";
    } // namespace tune_content

    /**
     * @brief Datarate undershoot (min) target (%)
     *
     * Type: int64, possible values     [-1.0, 100.0]
     */
    static constexpr std::string_view kUndershootPct = "undershoot-pct";

    /**
     * @brief vp8flags option
     *
     * Type: int, possible values     []
     */
    static constexpr std::string_view kVp8flags = "vp8flags";

} // namespace libvpx_vp9
namespace libwebp_anim {
    /**
     * @brief Conditional replenishment block size
     *
     * Type: int64, possible values     [0.0, 256.0]
     */
    static constexpr std::string_view kCrSize = "cr_size";

    /**
     * @brief Conditional replenishment threshold
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kCrThreshold = "cr_threshold";

    /**
     * @brief Use lossless mode
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kLossless = "lossless";

    /**
     * @brief Configuration preset
     *
     * For possible values see @ref preset namespace
     */
    static constexpr std::string_view kPreset = "preset";
    /**
     * @brief Namespace containing possible values of ::kPreset option.
     */
    namespace preset {
        ///@brief default preset
        static constexpr std::string_view kDefault = "default";
        ///@brief hand or line drawing, with high-contrast details
        static constexpr std::string_view kDrawing = "drawing";
        ///@brief small-sized colorful images
        static constexpr std::string_view kIcon = "icon";
        ///@brief do not use a preset
        static constexpr std::string_view kNone = "none";
        ///@brief outdoor photograph, with natural lighting
        static constexpr std::string_view kPhoto = "photo";
        ///@brief digital picture, like portrait, inner shot
        static constexpr std::string_view kPicture = "picture";
        ///@brief text-like
        static constexpr std::string_view kText = "text";
    } // namespace preset

    /**
     * @brief Quality
     *
     * Type: string, possible values     [0.0, 100.0]
     */
    static constexpr std::string_view kQuality = "quality";

} // namespace libwebp_anim
namespace libwebp {
    /**
     * @brief Conditional replenishment block size
     *
     * Type: int64, possible values     [0.0, 256.0]
     */
    static constexpr std::string_view kCrSize = "cr_size";

    /**
     * @brief Conditional replenishment threshold
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kCrThreshold = "cr_threshold";

    /**
     * @brief Use lossless mode
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kLossless = "lossless";

    /**
     * @brief Configuration preset
     *
     * For possible values see @ref preset namespace
     */
    static constexpr std::string_view kPreset = "preset";
    /**
     * @brief Namespace containing possible values of ::kPreset option.
     */
    namespace preset {
        ///@brief default preset
        static constexpr std::string_view kDefault = "default";
        ///@brief hand or line drawing, with high-contrast details
        static constexpr std::string_view kDrawing = "drawing";
        ///@brief small-sized colorful images
        static constexpr std::string_view kIcon = "icon";
        ///@brief do not use a preset
        static constexpr std::string_view kNone = "none";
        ///@brief outdoor photograph, with natural lighting
        static constexpr std::string_view kPhoto = "photo";
        ///@brief digital picture, like portrait, inner shot
        static constexpr std::string_view kPicture = "picture";
        ///@brief text-like
        static constexpr std::string_view kText = "text";
    } // namespace preset

    /**
     * @brief Quality
     *
     * Type: string, possible values     [0.0, 100.0]
     */
    static constexpr std::string_view kQuality = "quality";

} // namespace libwebp
namespace libx264 {
    /**
     * @brief High profile 8x8 transform.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view k8x8dct = "8x8dct";

    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief AQ method
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kAqMode = "aq-mode";

    /**
     * @brief AQ strength. Reduces blocking and blurring in flat and textured areas.
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kAqStrength = "aq-strength";

    /**
     * @brief aq_mode option
     *
     * For possible values see @ref aq_mode namespace
     */
    static constexpr std::string_view kAqMode = "aq_mode";
    /**
     * @brief Namespace containing possible values of ::kAqMode option.
     */
    namespace aq_mode {
        ///@brief Auto-variance AQ
        static constexpr std::string_view kAutovariance = "autovariance";
        ///@brief Auto-variance AQ with bias to dark scenes
        static constexpr std::string_view kAutovarianceBiased = "autovariance-biased";
        ///@brief Variance AQ (complexity mask)
        static constexpr std::string_view kVariance = "variance";
    } // namespace aq_mode

    /**
     * @brief Use access unit delimiters.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAud = "aud";

    /**
     * @brief AVC-Intra class 50/100/200/300/480
     *
     * Type: int64, possible values     [-1.0, 480.0]
     */
    static constexpr std::string_view kAvcintraClass = "avcintra-class";

    /**
     * @brief Influences how often B-frames are used
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kBBias = "b-bias";

    /**
     * @brief Keep some B-frames as references.
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kBPyramid = "b-pyramid";

    /**
     * @brief b_pyramid option
     *
     * For possible values see @ref b_pyramid namespace
     */
    static constexpr std::string_view kBPyramid = "b_pyramid";
    /**
     * @brief Namespace containing possible values of ::kBPyramid option.
     */
    namespace b_pyramid {
        ///@brief Non-strict (not Blu-ray compatible)
        static constexpr std::string_view kNormal = "normal";
        ///@brief Strictly hierarchical pyramid
        static constexpr std::string_view kStrict = "strict";
    } // namespace b_pyramid

    /**
     * @brief Strategy to choose between I/P/B-frames
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kBStrategy = "b_strategy";

    /**
     * @brief Bluray compatibility workarounds.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kBlurayCompat = "bluray-compat";

    /**
     * @brief QP difference between chroma and luma
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaoffset = "chromaoffset";

    /**
     * @brief Coder type
     *
     * For possible values see @ref coder namespace
     */
    static constexpr std::string_view kCoder = "coder";

    /**
     * @brief Reduce fluctuations in QP (before curve compression)
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCplxblur = "cplxblur";

    /**
     * @brief Select the quality for constant quality mode
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCrf = "crf";

    /**
     * @brief In CRF mode, prevents VBV from lowering quality beyond this point.
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCrfMax = "crf_max";

    /**
     * @brief Loop filter parameters, in <alpha:beta> form.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kDeblock = "deblock";

    /**
     * @brief Direct MV prediction mode
     *
     * For possible values see @ref direct-pred namespace
     */
    static constexpr std::string_view kDirectPred = "direct-pred";

    /**
     * @brief fast-pskip option
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFastPskip = "fast-pskip";

    /**
     * @brief Use fast settings when encoding first pass
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFastfirstpass = "fastfirstpass";

    /**
     * @brief If forcing keyframes, force them as IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedIdr = "forced-idr";

    /**
     * @brief Use Periodic Intra Refresh instead of IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIntraRefresh = "intra-refresh";

    /**
     * @brief Specify level (as defined by Annex A)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kLevel = "level";

    /**
     * @brief Set mb_info data through AVSideData, only useful when used from the API
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMbInfo = "mb_info";

    /**
     * @brief Use macroblock tree ratecontrol.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMbtree = "mbtree";

    /**
     * @brief Set motion estimation method
     *
     * Type: int64, possible values     [-1.0, 4.0]
     */
    static constexpr std::string_view kMeMethod = "me_method";

    /**
     * @brief One reference per partition, as opposed to one reference per macroblock
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMixedRefs = "mixed-refs";

    /**
     * @brief Set motion estimation method
     *
     * For possible values see @ref motion-est namespace
     */
    static constexpr std::string_view kMotionEst = "motion-est";

    /**
     * @brief Signal HRD information (requires vbv-bufsize; cbr not allowed in .mp4)
     *
     * For possible values see @ref nal-hrd namespace
     */
    static constexpr std::string_view kNalHrd = "nal-hrd";

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief A comma-separated list of partitions to consider. Possible values: p8x8, p4x4, b8x8, i8x8, i4x4, none,
     * all
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPartitions = "partitions";

    /**
     * @brief Filename for 2 pass stats
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPasslogfile = "passlogfile";

    /**
     * @brief Set the encoding preset (cf. x264 --fullhelp)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPreset = "preset";

    /**
     * @brief Set profile restrictions (cf. x264 --fullhelp)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Use psychovisual optimizations.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPsy = "psy";

    /**
     * @brief Strength of psychovisual optimization, in <psy-rd>:<psy-trellis> format.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPsyRd = "psy-rd";

    /**
     * @brief Constant quantization parameter rate control method
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kQp = "qp";

    /**
     * @brief Number of frames to look ahead for frametype and ratecontrol
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kRcLookahead = "rc-lookahead";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Limit the size of each slice in bytes
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kSliceMaxSize = "slice-max-size";

    /**
     * @brief Calculate and print SSIM stats.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSsim = "ssim";

    /**
     * @brief Filename for 2 pass stats
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kStats = "stats";

    /**
     * @brief Tune the encoding params (cf. x264 --fullhelp)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kTune = "tune";

    /**
     * @brief Use user data unregistered SEI if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUduSei = "udu_sei";

    /**
     * @brief Weighted prediction for B-frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kWeightb = "weightb";

    /**
     * @brief Weighted prediction analysis method.
     *
     * For possible values see @ref weightp namespace
     */
    static constexpr std::string_view kWeightp = "weightp";

    /**
     * @brief Weighted prediction for P-frames
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kWpredp = "wpredp";

    /**
     * @brief Override the x264 configuration using a :-separated list of key=value parameters
     *
     * Type: uint64, possible values     []
     */
    static constexpr std::string_view kX264Params = "x264-params";

    /**
     * @brief X264 options
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kX264opts = "x264opts";

} // namespace libx264
namespace libx264rgb {
    /**
     * @brief High profile 8x8 transform.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view k8x8dct = "8x8dct";

    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief AQ method
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kAqMode = "aq-mode";

    /**
     * @brief AQ strength. Reduces blocking and blurring in flat and textured areas.
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kAqStrength = "aq-strength";

    /**
     * @brief aq_mode option
     *
     * For possible values see @ref aq_mode namespace
     */
    static constexpr std::string_view kAqMode = "aq_mode";
    /**
     * @brief Namespace containing possible values of ::kAqMode option.
     */
    namespace aq_mode {
        ///@brief Auto-variance AQ
        static constexpr std::string_view kAutovariance = "autovariance";
        ///@brief Auto-variance AQ with bias to dark scenes
        static constexpr std::string_view kAutovarianceBiased = "autovariance-biased";
        ///@brief Variance AQ (complexity mask)
        static constexpr std::string_view kVariance = "variance";
    } // namespace aq_mode

    /**
     * @brief Use access unit delimiters.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAud = "aud";

    /**
     * @brief AVC-Intra class 50/100/200/300/480
     *
     * Type: int64, possible values     [-1.0, 480.0]
     */
    static constexpr std::string_view kAvcintraClass = "avcintra-class";

    /**
     * @brief Influences how often B-frames are used
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kBBias = "b-bias";

    /**
     * @brief Keep some B-frames as references.
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kBPyramid = "b-pyramid";

    /**
     * @brief b_pyramid option
     *
     * For possible values see @ref b_pyramid namespace
     */
    static constexpr std::string_view kBPyramid = "b_pyramid";
    /**
     * @brief Namespace containing possible values of ::kBPyramid option.
     */
    namespace b_pyramid {
        ///@brief Non-strict (not Blu-ray compatible)
        static constexpr std::string_view kNormal = "normal";
        ///@brief Strictly hierarchical pyramid
        static constexpr std::string_view kStrict = "strict";
    } // namespace b_pyramid

    /**
     * @brief Strategy to choose between I/P/B-frames
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kBStrategy = "b_strategy";

    /**
     * @brief Bluray compatibility workarounds.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kBlurayCompat = "bluray-compat";

    /**
     * @brief QP difference between chroma and luma
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kChromaoffset = "chromaoffset";

    /**
     * @brief Coder type
     *
     * For possible values see @ref coder namespace
     */
    static constexpr std::string_view kCoder = "coder";

    /**
     * @brief Reduce fluctuations in QP (before curve compression)
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCplxblur = "cplxblur";

    /**
     * @brief Select the quality for constant quality mode
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCrf = "crf";

    /**
     * @brief In CRF mode, prevents VBV from lowering quality beyond this point.
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCrfMax = "crf_max";

    /**
     * @brief Loop filter parameters, in <alpha:beta> form.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kDeblock = "deblock";

    /**
     * @brief Direct MV prediction mode
     *
     * For possible values see @ref direct-pred namespace
     */
    static constexpr std::string_view kDirectPred = "direct-pred";

    /**
     * @brief fast-pskip option
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFastPskip = "fast-pskip";

    /**
     * @brief Use fast settings when encoding first pass
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFastfirstpass = "fastfirstpass";

    /**
     * @brief If forcing keyframes, force them as IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedIdr = "forced-idr";

    /**
     * @brief Use Periodic Intra Refresh instead of IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIntraRefresh = "intra-refresh";

    /**
     * @brief Specify level (as defined by Annex A)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kLevel = "level";

    /**
     * @brief Set mb_info data through AVSideData, only useful when used from the API
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMbInfo = "mb_info";

    /**
     * @brief Use macroblock tree ratecontrol.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMbtree = "mbtree";

    /**
     * @brief Set motion estimation method
     *
     * Type: int64, possible values     [-1.0, 4.0]
     */
    static constexpr std::string_view kMeMethod = "me_method";

    /**
     * @brief One reference per partition, as opposed to one reference per macroblock
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMixedRefs = "mixed-refs";

    /**
     * @brief Set motion estimation method
     *
     * For possible values see @ref motion-est namespace
     */
    static constexpr std::string_view kMotionEst = "motion-est";

    /**
     * @brief Signal HRD information (requires vbv-bufsize; cbr not allowed in .mp4)
     *
     * For possible values see @ref nal-hrd namespace
     */
    static constexpr std::string_view kNalHrd = "nal-hrd";

    /**
     * @brief Noise reduction
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kNoiseReduction = "noise_reduction";

    /**
     * @brief A comma-separated list of partitions to consider. Possible values: p8x8, p4x4, b8x8, i8x8, i4x4, none,
     * all
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPartitions = "partitions";

    /**
     * @brief Filename for 2 pass stats
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPasslogfile = "passlogfile";

    /**
     * @brief Set the encoding preset (cf. x264 --fullhelp)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPreset = "preset";

    /**
     * @brief Set profile restrictions (cf. x264 --fullhelp)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Use psychovisual optimizations.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPsy = "psy";

    /**
     * @brief Strength of psychovisual optimization, in <psy-rd>:<psy-trellis> format.
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPsyRd = "psy-rd";

    /**
     * @brief Constant quantization parameter rate control method
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kQp = "qp";

    /**
     * @brief Number of frames to look ahead for frametype and ratecontrol
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kRcLookahead = "rc-lookahead";

    /**
     * @brief Scene change threshold
     *
     * Type: int64, possible values     [-2147483648.0, 2147483647.0]
     */
    static constexpr std::string_view kScThreshold = "sc_threshold";

    /**
     * @brief Limit the size of each slice in bytes
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kSliceMaxSize = "slice-max-size";

    /**
     * @brief Calculate and print SSIM stats.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSsim = "ssim";

    /**
     * @brief Filename for 2 pass stats
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kStats = "stats";

    /**
     * @brief Tune the encoding params (cf. x264 --fullhelp)
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kTune = "tune";

    /**
     * @brief Use user data unregistered SEI if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUduSei = "udu_sei";

    /**
     * @brief Weighted prediction for B-frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kWeightb = "weightb";

    /**
     * @brief Weighted prediction analysis method.
     *
     * For possible values see @ref weightp namespace
     */
    static constexpr std::string_view kWeightp = "weightp";

    /**
     * @brief Weighted prediction for P-frames
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kWpredp = "wpredp";

    /**
     * @brief Override the x264 configuration using a :-separated list of key=value parameters
     *
     * Type: uint64, possible values     []
     */
    static constexpr std::string_view kX264Params = "x264-params";

    /**
     * @brief X264 options
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kX264opts = "x264opts";

} // namespace libx264rgb
namespace libx265 {
    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief Set the x265 crf
     *
     * Type: string, possible values     [-1.0, 3.4028234663852886e38]
     */
    static constexpr std::string_view kCrf = "crf";

    /**
     * @brief If forcing keyframes, force them as IDR frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedIdr = "forced-idr";

    /**
     * @brief Set the x265 preset
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPreset = "preset";

    /**
     * @brief Set the x265 profile
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Set the x265 qp
     *
     * Type: int64, possible values     [-1.0, 2147483647.0]
     */
    static constexpr std::string_view kQp = "qp";

    /**
     * @brief Set the x265 tune parameter
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kTune = "tune";

    /**
     * @brief Use user data unregistered SEI if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUduSei = "udu_sei";

    /**
     * @brief Set the x265 configuration using a :-separated list of key=value parameters
     *
     * Type: uint64, possible values     []
     */
    static constexpr std::string_view kX265Params = "x265-params";

} // namespace libx265
namespace av1_nvenc {
    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1
     * (low) - 15 (aggressive)
     *
     * Type: int64, possible values     [1.0, 15.0]
     */
    static constexpr std::string_view kAqStrength = "aq-strength";

    /**
     * @brief When lookahead is enabled, set this to 0 to disable adaptive B-frame decision
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kBAdapt = "b_adapt";

    /**
     * @brief Use B frames as references
     *
     * For possible values see @ref b_ref_mode namespace
     */
    static constexpr std::string_view kBRefMode = "b_ref_mode";
    /**
     * @brief Namespace containing possible values of ::kBRefMode option.
     */
    namespace b_ref_mode {
        ///@brief B frames will not be used for reference
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Each B frame will be used for reference
        static constexpr std::string_view kEach = "each";
        ///@brief Only (number of B frames)/2 will be used for reference
        static constexpr std::string_view kMiddle = "middle";
    } // namespace b_ref_mode

    /**
     * @brief Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control
     *
     * Type: string, possible values     [0.0, 51.0]
     */
    static constexpr std::string_view kCq = "cq";

    /**
     * @brief Delay frame output by the given amount of frames
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kDelay = "delay";

    /**
     * @brief Specifies the DPB size used for encoding (0 means automatic)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kDpbSize = "dpb_size";

    /**
     * @brief Pass on extra SEI data (e.g. a53 cc) to be included in the bitstream
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kExtraSei = "extra_sei";

    /**
     * @brief If forcing keyframes, force them as IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedIdr = "forced-idr";

    /**
     * @brief Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on.
     *
     * For possible values see @ref gpu namespace
     */
    static constexpr std::string_view kGpu = "gpu";
    /**
     * @brief Namespace containing possible values of ::kGpu option.
     */
    namespace gpu {
        ///@brief Pick the first device available
        static constexpr std::string_view kAny = "any";
        ///@brief List the available devices
        static constexpr std::string_view kList = "list";
    } // namespace gpu

    /**
     * @brief Enable 10 bit encode for 8 bit input
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kHighbitdepth = "highbitdepth";

    /**
     * @brief Initial QP value for B frame
     *
     * Type: int64, possible values     [-1.0, 255.0]
     */
    static constexpr std::string_view kInitQpB = "init_qpB";

    /**
     * @brief Initial QP value for I frame
     *
     * Type: int64, possible values     [-1.0, 255.0]
     */
    static constexpr std::string_view kInitQpI = "init_qpI";

    /**
     * @brief Initial QP value for P frame
     *
     * Type: int64, possible values     [-1.0, 255.0]
     */
    static constexpr std::string_view kInitQpP = "init_qpP";

    /**
     * @brief Use Periodic Intra Refresh instead of IDR frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIntraRefresh = "intra-refresh";

    /**
     * @brief Low delay key frame scale; Specifies the Scene Change frame size increase allowed in case of single
     * frame VBV and CBR
     *
     * Type: int64, possible values     [0.0, 255.0]
     */
    static constexpr std::string_view kLdkfs = "ldkfs";

    /**
     * @brief Set the encoding level restriction
     *
     * For possible values see @ref level namespace
     */
    static constexpr std::string_view kLevel = "level";

    /**
     * @brief Set the multipass encoding
     *
     * For possible values see @ref multipass namespace
     */
    static constexpr std::string_view kMultipass = "multipass";
    /**
     * @brief Namespace containing possible values of ::kMultipass option.
     */
    namespace multipass {
        ///@brief Single Pass
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Two Pass encoding is enabled where first Pass is full resolution
        static constexpr std::string_view kFullres = "fullres";
        ///@brief Two Pass encoding is enabled where first Pass is quarter resolution
        static constexpr std::string_view kQres = "qres";
    } // namespace multipass

    /**
     * @brief When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNoScenecut = "no-scenecut";

    /**
     * @brief Set this to 1 to enable automatic insertion of non-reference P-frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNonrefP = "nonref_p";

    /**
     * @brief Set the encoding preset
     *
     * For possible values see @ref preset namespace
     */
    static constexpr std::string_view kPreset = "preset";
    /**
     * @brief Namespace containing possible values of ::kPreset option.
     */
    namespace preset {
        ///@brief hp 1 pass
        static constexpr std::string_view kFast = "fast";
        ///@brief hq 1 pass
        static constexpr std::string_view kMedium = "medium";
        ///@brief fastest (lowest quality)
        static constexpr std::string_view kP1 = "p1";
        ///@brief faster (lower quality)
        static constexpr std::string_view kP2 = "p2";
        ///@brief fast (low quality)
        static constexpr std::string_view kP3 = "p3";
        ///@brief medium (default)
        static constexpr std::string_view kP4 = "p4";
        ///@brief slow (good quality)
        static constexpr std::string_view kP5 = "p5";
        ///@brief slower (better quality)
        static constexpr std::string_view kP6 = "p6";
        ///@brief slowest (best quality)
        static constexpr std::string_view kP7 = "p7";
        ///@brief hq 2 passes
        static constexpr std::string_view kSlow = "slow";
    } // namespace preset

    /**
     * @brief Constant quantization parameter rate control method
     *
     * Type: int64, possible values     [-1.0, 255.0]
     */
    static constexpr std::string_view kQp = "qp";

    /**
     * @brief Quantization parameter offset for cb channel
     *
     * Type: int64, possible values     [-12.0, 12.0]
     */
    static constexpr std::string_view kQpCbOffset = "qp_cb_offset";

    /**
     * @brief Quantization parameter offset for cr channel
     *
     * Type: int64, possible values     [-12.0, 12.0]
     */
    static constexpr std::string_view kQpCrOffset = "qp_cr_offset";

    /**
     * @brief Override the preset rate-control
     *
     * For possible values see @ref rc namespace
     */
    static constexpr std::string_view kRc = "rc";
    /**
     * @brief Namespace containing possible values of ::kRc option.
     */
    namespace rc {
        ///@brief Constant bitrate mode
        static constexpr std::string_view kCbr = "cbr";
        ///@brief Constant QP mode
        static constexpr std::string_view kConstqp = "constqp";
        ///@brief Variable bitrate mode
        static constexpr std::string_view kVbr = "vbr";
    } // namespace rc

    /**
     * @brief Number of frames to look ahead for rate-control
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kRcLookahead = "rc-lookahead";

    /**
     * @brief Configure how nvenc handles packed RGB input.
     *
     * For possible values see @ref rgb_mode namespace
     */
    static constexpr std::string_view kRgbMode = "rgb_mode";
    /**
     * @brief Namespace containing possible values of ::kRgbMode option.
     */
    namespace rgb_mode {
        ///@brief Disables support, throws an error.
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Convert to yuv420
        static constexpr std::string_view kYuv420 = "yuv420";
        ///@brief Convert to yuv444
        static constexpr std::string_view kYuv444 = "yuv444";
    } // namespace rgb_mode

    /**
     * @brief Use timecode (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kS12mTc = "s12m_tc";

    /**
     * @brief Set to 1 to enable Spatial AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSpatialAq = "spatial-aq";

    /**
     * @brief Set 1 to minimize GOP-to-GOP rate fluctuations
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStrictGop = "strict_gop";

    /**
     * @brief Number of concurrent surfaces
     *
     * Type: int64, possible values     [0.0, 64.0]
     */
    static constexpr std::string_view kSurfaces = "surfaces";

    /**
     * @brief Set to 1 to enable Temporal AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTemporalAq = "temporal-aq";

    /**
     * @brief Set the encoding tier
     *
     * For possible values see @ref tier namespace
     */
    static constexpr std::string_view kTier = "tier";

    /**
     * @brief Number of tile columns to encode with
     *
     * Type: int64, possible values     [-1.0, 64.0]
     */
    static constexpr std::string_view kTileColumns = "tile-columns";

    /**
     * @brief Number of tile rows to encode with
     *
     * Type: int64, possible values     [-1.0, 64.0]
     */
    static constexpr std::string_view kTileRows = "tile-rows";

    /**
     * @brief Include timing info in sequence/frame headers
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTimingInfo = "timing-info";

    /**
     * @brief Set the encoding tuning info
     *
     * For possible values see @ref tune namespace
     */
    static constexpr std::string_view kTune = "tune";
    /**
     * @brief Namespace containing possible values of ::kTune option.
     */
    namespace tune {
        ///@brief High quality
        static constexpr std::string_view kHq = "hq";
        ///@brief Low latency
        static constexpr std::string_view kLl = "ll";
        ///@brief Lossless
        static constexpr std::string_view kLossless = "lossless";
        ///@brief Ultra low latency
        static constexpr std::string_view kUll = "ull";
    } // namespace tune

    /**
     * @brief Enable weighted prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kWeightedPred = "weighted_pred";

    /**
     * @brief Set 1 to indicate zero latency operation (no reordering delay)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kZerolatency = "zerolatency";

} // namespace av1_nvenc
namespace libopenh264 {
    /**
     * @brief Allow skipping frames to hit the target bitrate
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAllowSkipFrames = "allow_skip_frames";

    /**
     * @brief Coder type
     *
     * For possible values see @ref coder namespace
     */
    static constexpr std::string_view kCoder = "coder";

    /**
     * @brief Enable loop filter
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kLoopfilter = "loopfilter";

    /**
     * @brief Set maximum NAL size in bytes
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kMaxNalSize = "max_nal_size";

    /**
     * @brief Set profile restrictions
     *
     * For possible values see @ref profile namespace
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Select rate control mode
     *
     * For possible values see @ref rc_mode namespace
     */
    static constexpr std::string_view kRcMode = "rc_mode";
    /**
     * @brief Namespace containing possible values of ::kRcMode option.
     */
    namespace rc_mode {
        ///@brief bitrate mode
        static constexpr std::string_view kBitrate = "bitrate";
        ///@brief using buffer status to adjust the video quality (no bitrate control)
        static constexpr std::string_view kBuffer = "buffer";
        ///@brief bit rate control off
        static constexpr std::string_view kOff = "off";
        ///@brief quality mode
        static constexpr std::string_view kQuality = "quality";
        ///@brief bit rate control based on timestamp
        static constexpr std::string_view kTimestamp = "timestamp";
    } // namespace rc_mode

} // namespace libopenh264
namespace h264_mf {
    /**
     * @brief Force hardware encoding
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kHwEncoding = "hw_encoding";

    /**
     * @brief Quality
     *
     * Type: int64, possible values     [-1.0, 100.0]
     */
    static constexpr std::string_view kQuality = "quality";

    /**
     * @brief Select rate control mode
     *
     * For possible values see @ref rate_control namespace
     */
    static constexpr std::string_view kRateControl = "rate_control";
    /**
     * @brief Namespace containing possible values of ::kRateControl option.
     */
    namespace rate_control {
        ///@brief CBR mode
        static constexpr std::string_view kCbr = "cbr";
        ///@brief Default mode
        static constexpr std::string_view kDefault = "default";
        ///@brief Global VBR mode
        static constexpr std::string_view kGVbr = "g_vbr";
        ///@brief Global low delay VBR mode
        static constexpr std::string_view kGldVbr = "gld_vbr";
        ///@brief Low delay VBR mode
        static constexpr std::string_view kLdVbr = "ld_vbr";
        ///@brief Peak constrained VBR mode
        static constexpr std::string_view kPcVbr = "pc_vbr";
        ///@brief Quality mode
        static constexpr std::string_view kQuality = "quality";
        ///@brief Unconstrained VBR mode
        static constexpr std::string_view kUVbr = "u_vbr";
    } // namespace rate_control

    /**
     * @brief Select usage scenario
     *
     * For possible values see @ref scenario namespace
     */
    static constexpr std::string_view kScenario = "scenario";
    /**
     * @brief Namespace containing possible values of ::kScenario option.
     */
    namespace scenario {
        ///@brief Archive
        static constexpr std::string_view kArchive = "archive";
        ///@brief Camera record
        static constexpr std::string_view kCameraRecord = "camera_record";
        ///@brief Default scenario
        static constexpr std::string_view kDefault = "default";
        ///@brief Display remoting
        static constexpr std::string_view kDisplayRemoting = "display_remoting";
        ///@brief Display remoting with feature map
        static constexpr std::string_view kDisplayRemotingWithFeatureMap = "display_remoting_with_feature_map";
        ///@brief Live streaming
        static constexpr std::string_view kLiveStreaming = "live_streaming";
        ///@brief Video conference
        static constexpr std::string_view kVideoConference = "video_conference";
    } // namespace scenario

} // namespace h264_mf
namespace h264_nvenc {
    /**
     * @brief Use 2pass encoding mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view k2pass = "2pass";

    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1
     * (low) - 15 (aggressive)
     *
     * Type: int64, possible values     [1.0, 15.0]
     */
    static constexpr std::string_view kAqStrength = "aq-strength";

    /**
     * @brief Use access unit delimiters
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAud = "aud";

    /**
     * @brief When lookahead is enabled, set this to 0 to disable adaptive B-frame decision
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kBAdapt = "b_adapt";

    /**
     * @brief Use B frames as references
     *
     * For possible values see @ref b_ref_mode namespace
     */
    static constexpr std::string_view kBRefMode = "b_ref_mode";
    /**
     * @brief Namespace containing possible values of ::kBRefMode option.
     */
    namespace b_ref_mode {
        ///@brief B frames will not be used for reference
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Each B frame will be used for reference
        static constexpr std::string_view kEach = "each";
        ///@brief Only (number of B frames)/2 will be used for reference
        static constexpr std::string_view kMiddle = "middle";
    } // namespace b_ref_mode

    /**
     * @brief Bluray compatibility workarounds
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kBlurayCompat = "bluray-compat";

    /**
     * @brief Use cbr encoding mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kCbr = "cbr";

    /**
     * @brief Coder type
     *
     * For possible values see @ref coder namespace
     */
    static constexpr std::string_view kCoder = "coder";

    /**
     * @brief Enable constrainedFrame encoding where each slice in the constrained picture is independent of other
     * slices
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kConstrainedEncoding = "constrained-encoding";

    /**
     * @brief Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control
     *
     * Type: string, possible values     [0.0, 51.0]
     */
    static constexpr std::string_view kCq = "cq";

    /**
     * @brief Delay frame output by the given amount of frames
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kDelay = "delay";

    /**
     * @brief Specifies the DPB size used for encoding (0 means automatic)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kDpbSize = "dpb_size";

    /**
     * @brief Pass on extra SEI data (e.g. a53 cc) to be included in the bitstream
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kExtraSei = "extra_sei";

    /**
     * @brief If forcing keyframes, force them as IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedIdr = "forced-idr";

    /**
     * @brief Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on.
     *
     * For possible values see @ref gpu namespace
     */
    static constexpr std::string_view kGpu = "gpu";
    /**
     * @brief Namespace containing possible values of ::kGpu option.
     */
    namespace gpu {
        ///@brief Pick the first device available
        static constexpr std::string_view kAny = "any";
        ///@brief List the available devices
        static constexpr std::string_view kList = "list";
    } // namespace gpu

    /**
     * @brief Initial QP value for B frame
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kInitQpB = "init_qpB";

    /**
     * @brief Initial QP value for I frame
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kInitQpI = "init_qpI";

    /**
     * @brief Initial QP value for P frame
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kInitQpP = "init_qpP";

    /**
     * @brief Use Periodic Intra Refresh instead of IDR frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIntraRefresh = "intra-refresh";

    /**
     * @brief Low delay key frame scale; Specifies the Scene Change frame size increase allowed in case of single
     * frame VBV and CBR
     *
     * Type: int64, possible values     [0.0, 255.0]
     */
    static constexpr std::string_view kLdkfs = "ldkfs";

    /**
     * @brief Set the encoding level restriction
     *
     * For possible values see @ref level namespace
     */
    static constexpr std::string_view kLevel = "level";

    /**
     * @brief Maximum encoded slice size in bytes
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kMaxSliceSize = "max_slice_size";

    /**
     * @brief Set the multipass encoding
     *
     * For possible values see @ref multipass namespace
     */
    static constexpr std::string_view kMultipass = "multipass";
    /**
     * @brief Namespace containing possible values of ::kMultipass option.
     */
    namespace multipass {
        ///@brief Single Pass
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Two Pass encoding is enabled where first Pass is full resolution
        static constexpr std::string_view kFullres = "fullres";
        ///@brief Two Pass encoding is enabled where first Pass is quarter resolution
        static constexpr std::string_view kQres = "qres";
    } // namespace multipass

    /**
     * @brief When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNoScenecut = "no-scenecut";

    /**
     * @brief Set this to 1 to enable automatic insertion of non-reference P-frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNonrefP = "nonref_p";

    /**
     * @brief Set the encoding preset
     *
     * For possible values see @ref preset namespace
     */
    static constexpr std::string_view kPreset = "preset";
    /**
     * @brief Namespace containing possible values of ::kPreset option.
     */
    namespace preset {
        ///@brief hp 1 pass
        static constexpr std::string_view kFast = "fast";
        ///@brief low latency
        static constexpr std::string_view kLl = "ll";
        ///@brief low latency hp
        static constexpr std::string_view kLlhp = "llhp";
        ///@brief low latency hq
        static constexpr std::string_view kLlhq = "llhq";
        ///@brief hq 1 pass
        static constexpr std::string_view kMedium = "medium";
        ///@brief fastest (lowest quality)
        static constexpr std::string_view kP1 = "p1";
        ///@brief faster (lower quality)
        static constexpr std::string_view kP2 = "p2";
        ///@brief fast (low quality)
        static constexpr std::string_view kP3 = "p3";
        ///@brief medium (default)
        static constexpr std::string_view kP4 = "p4";
        ///@brief slow (good quality)
        static constexpr std::string_view kP5 = "p5";
        ///@brief slower (better quality)
        static constexpr std::string_view kP6 = "p6";
        ///@brief slowest (best quality)
        static constexpr std::string_view kP7 = "p7";
        ///@brief hq 2 passes
        static constexpr std::string_view kSlow = "slow";
    } // namespace preset

    /**
     * @brief Set the encoding profile
     *
     * For possible values see @ref profile namespace
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Constant quantization parameter rate control method
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kQp = "qp";

    /**
     * @brief Quantization parameter offset for cb channel
     *
     * Type: int64, possible values     [-12.0, 12.0]
     */
    static constexpr std::string_view kQpCbOffset = "qp_cb_offset";

    /**
     * @brief Quantization parameter offset for cr channel
     *
     * Type: int64, possible values     [-12.0, 12.0]
     */
    static constexpr std::string_view kQpCrOffset = "qp_cr_offset";

    /**
     * @brief Override the preset rate-control
     *
     * For possible values see @ref rc namespace
     */
    static constexpr std::string_view kRc = "rc";
    /**
     * @brief Namespace containing possible values of ::kRc option.
     */
    namespace rc {
        ///@brief Constant bitrate mode
        static constexpr std::string_view kCbr = "cbr";
        ///@brief Constant bitrate high quality mode
        static constexpr std::string_view kCbrHq = "cbr_hq";
        ///@brief Constant bitrate low delay high quality mode
        static constexpr std::string_view kCbrLdHq = "cbr_ld_hq";
        ///@brief Constant QP mode
        static constexpr std::string_view kConstqp = "constqp";
        ///@brief Multi-pass optimized for image quality (deprecated)
        static constexpr std::string_view kLl2passQuality = "ll_2pass_quality";
        ///@brief Multi-pass optimized for constant frame size (deprecated)
        static constexpr std::string_view kLl2passSize = "ll_2pass_size";
        ///@brief Variable bitrate mode
        static constexpr std::string_view kVbr = "vbr";
        ///@brief Multi-pass variable bitrate mode (deprecated)
        static constexpr std::string_view kVbr2pass = "vbr_2pass";
        ///@brief Variable bitrate high quality mode
        static constexpr std::string_view kVbrHq = "vbr_hq";
        ///@brief Variable bitrate mode with MinQP (deprecated)
        static constexpr std::string_view kVbrMinqp = "vbr_minqp";
    } // namespace rc

    /**
     * @brief Number of frames to look ahead for rate-control
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kRcLookahead = "rc-lookahead";

    /**
     * @brief Configure how nvenc handles packed RGB input.
     *
     * For possible values see @ref rgb_mode namespace
     */
    static constexpr std::string_view kRgbMode = "rgb_mode";
    /**
     * @brief Namespace containing possible values of ::kRgbMode option.
     */
    namespace rgb_mode {
        ///@brief Disables support, throws an error.
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Convert to yuv420
        static constexpr std::string_view kYuv420 = "yuv420";
        ///@brief Convert to yuv444
        static constexpr std::string_view kYuv444 = "yuv444";
    } // namespace rgb_mode

    /**
     * @brief Use single slice intra refresh
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSingleSliceIntraRefresh = "single-slice-intra-refresh";

    /**
     * @brief Set to 1 to enable Spatial AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSpatialAq = "spatial-aq";

    /**
     * @brief Set to 1 to enable Spatial AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSpatialAq = "spatial_aq";

    /**
     * @brief Set 1 to minimize GOP-to-GOP rate fluctuations
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStrictGop = "strict_gop";

    /**
     * @brief Number of concurrent surfaces
     *
     * Type: int64, possible values     [0.0, 64.0]
     */
    static constexpr std::string_view kSurfaces = "surfaces";

    /**
     * @brief Set to 1 to enable Temporal AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTemporalAq = "temporal-aq";

    /**
     * @brief Set to 1 to enable Temporal AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTemporalAq = "temporal_aq";

    /**
     * @brief Set the encoding tuning info
     *
     * For possible values see @ref tune namespace
     */
    static constexpr std::string_view kTune = "tune";
    /**
     * @brief Namespace containing possible values of ::kTune option.
     */
    namespace tune {
        ///@brief High quality
        static constexpr std::string_view kHq = "hq";
        ///@brief Low latency
        static constexpr std::string_view kLl = "ll";
        ///@brief Lossless
        static constexpr std::string_view kLossless = "lossless";
        ///@brief Ultra low latency
        static constexpr std::string_view kUll = "ull";
    } // namespace tune

    /**
     * @brief Pass on user data unregistered SEI if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUduSei = "udu_sei";

    /**
     * @brief Set 1 to enable weighted prediction
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kWeightedPred = "weighted_pred";

    /**
     * @brief Set 1 to indicate zero latency operation (no reordering delay)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kZerolatency = "zerolatency";

} // namespace h264_nvenc
namespace hevc_mf {
    /**
     * @brief Force hardware encoding
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kHwEncoding = "hw_encoding";

    /**
     * @brief Quality
     *
     * Type: int64, possible values     [-1.0, 100.0]
     */
    static constexpr std::string_view kQuality = "quality";

    /**
     * @brief Select rate control mode
     *
     * For possible values see @ref rate_control namespace
     */
    static constexpr std::string_view kRateControl = "rate_control";
    /**
     * @brief Namespace containing possible values of ::kRateControl option.
     */
    namespace rate_control {
        ///@brief CBR mode
        static constexpr std::string_view kCbr = "cbr";
        ///@brief Default mode
        static constexpr std::string_view kDefault = "default";
        ///@brief Global VBR mode
        static constexpr std::string_view kGVbr = "g_vbr";
        ///@brief Global low delay VBR mode
        static constexpr std::string_view kGldVbr = "gld_vbr";
        ///@brief Low delay VBR mode
        static constexpr std::string_view kLdVbr = "ld_vbr";
        ///@brief Peak constrained VBR mode
        static constexpr std::string_view kPcVbr = "pc_vbr";
        ///@brief Quality mode
        static constexpr std::string_view kQuality = "quality";
        ///@brief Unconstrained VBR mode
        static constexpr std::string_view kUVbr = "u_vbr";
    } // namespace rate_control

    /**
     * @brief Select usage scenario
     *
     * For possible values see @ref scenario namespace
     */
    static constexpr std::string_view kScenario = "scenario";
    /**
     * @brief Namespace containing possible values of ::kScenario option.
     */
    namespace scenario {
        ///@brief Archive
        static constexpr std::string_view kArchive = "archive";
        ///@brief Camera record
        static constexpr std::string_view kCameraRecord = "camera_record";
        ///@brief Default scenario
        static constexpr std::string_view kDefault = "default";
        ///@brief Display remoting
        static constexpr std::string_view kDisplayRemoting = "display_remoting";
        ///@brief Display remoting with feature map
        static constexpr std::string_view kDisplayRemotingWithFeatureMap = "display_remoting_with_feature_map";
        ///@brief Live streaming
        static constexpr std::string_view kLiveStreaming = "live_streaming";
        ///@brief Video conference
        static constexpr std::string_view kVideoConference = "video_conference";
    } // namespace scenario

} // namespace hevc_mf
namespace hevc_nvenc {
    /**
     * @brief Use 2pass encoding mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view k2pass = "2pass";

    /**
     * @brief Use A53 Closed Captions (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kA53cc = "a53cc";

    /**
     * @brief When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1
     * (low) - 15 (aggressive)
     *
     * Type: int64, possible values     [1.0, 15.0]
     */
    static constexpr std::string_view kAqStrength = "aq-strength";

    /**
     * @brief Use access unit delimiters
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAud = "aud";

    /**
     * @brief Use B frames as references
     *
     * For possible values see @ref b_ref_mode namespace
     */
    static constexpr std::string_view kBRefMode = "b_ref_mode";
    /**
     * @brief Namespace containing possible values of ::kBRefMode option.
     */
    namespace b_ref_mode {
        ///@brief B frames will not be used for reference
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Each B frame will be used for reference
        static constexpr std::string_view kEach = "each";
        ///@brief Only (number of B frames)/2 will be used for reference
        static constexpr std::string_view kMiddle = "middle";
    } // namespace b_ref_mode

    /**
     * @brief Bluray compatibility workarounds
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kBlurayCompat = "bluray-compat";

    /**
     * @brief Use cbr encoding mode
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kCbr = "cbr";

    /**
     * @brief Enable constrainedFrame encoding where each slice in the constrained picture is independent of other
     * slices
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kConstrainedEncoding = "constrained-encoding";

    /**
     * @brief Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control
     *
     * Type: string, possible values     [0.0, 51.0]
     */
    static constexpr std::string_view kCq = "cq";

    /**
     * @brief Delay frame output by the given amount of frames
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kDelay = "delay";

    /**
     * @brief Specifies the DPB size used for encoding (0 means automatic)
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kDpbSize = "dpb_size";

    /**
     * @brief Pass on extra SEI data (e.g. a53 cc) to be included in the bitstream
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kExtraSei = "extra_sei";

    /**
     * @brief If forcing keyframes, force them as IDR frames.
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kForcedIdr = "forced-idr";

    /**
     * @brief Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on.
     *
     * For possible values see @ref gpu namespace
     */
    static constexpr std::string_view kGpu = "gpu";
    /**
     * @brief Namespace containing possible values of ::kGpu option.
     */
    namespace gpu {
        ///@brief Pick the first device available
        static constexpr std::string_view kAny = "any";
        ///@brief List the available devices
        static constexpr std::string_view kList = "list";
    } // namespace gpu

    /**
     * @brief Initial QP value for B frame
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kInitQpB = "init_qpB";

    /**
     * @brief Initial QP value for I frame
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kInitQpI = "init_qpI";

    /**
     * @brief Initial QP value for P frame
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kInitQpP = "init_qpP";

    /**
     * @brief Use Periodic Intra Refresh instead of IDR frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kIntraRefresh = "intra-refresh";

    /**
     * @brief Low delay key frame scale; Specifies the Scene Change frame size increase allowed in case of single
     * frame VBV and CBR
     *
     * Type: int64, possible values     [0.0, 255.0]
     */
    static constexpr std::string_view kLdkfs = "ldkfs";

    /**
     * @brief Set the encoding level restriction
     *
     * For possible values see @ref level namespace
     */
    static constexpr std::string_view kLevel = "level";

    /**
     * @brief Maximum encoded slice size in bytes
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kMaxSliceSize = "max_slice_size";

    /**
     * @brief Set the multipass encoding
     *
     * For possible values see @ref multipass namespace
     */
    static constexpr std::string_view kMultipass = "multipass";
    /**
     * @brief Namespace containing possible values of ::kMultipass option.
     */
    namespace multipass {
        ///@brief Single Pass
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Two Pass encoding is enabled where first Pass is full resolution
        static constexpr std::string_view kFullres = "fullres";
        ///@brief Two Pass encoding is enabled where first Pass is quarter resolution
        static constexpr std::string_view kQres = "qres";
    } // namespace multipass

    /**
     * @brief When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNoScenecut = "no-scenecut";

    /**
     * @brief Set this to 1 to enable automatic insertion of non-reference P-frames
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kNonrefP = "nonref_p";

    /**
     * @brief Set the encoding preset
     *
     * For possible values see @ref preset namespace
     */
    static constexpr std::string_view kPreset = "preset";
    /**
     * @brief Namespace containing possible values of ::kPreset option.
     */
    namespace preset {
        ///@brief hp 1 pass
        static constexpr std::string_view kFast = "fast";
        ///@brief low latency
        static constexpr std::string_view kLl = "ll";
        ///@brief low latency hp
        static constexpr std::string_view kLlhp = "llhp";
        ///@brief low latency hq
        static constexpr std::string_view kLlhq = "llhq";
        ///@brief lossless
        static constexpr std::string_view kLossless = "lossless";
        ///@brief lossless hp
        static constexpr std::string_view kLosslesshp = "losslesshp";
        ///@brief hq 1 pass
        static constexpr std::string_view kMedium = "medium";
        ///@brief fastest (lowest quality)
        static constexpr std::string_view kP1 = "p1";
        ///@brief faster (lower quality)
        static constexpr std::string_view kP2 = "p2";
        ///@brief fast (low quality)
        static constexpr std::string_view kP3 = "p3";
        ///@brief medium (default)
        static constexpr std::string_view kP4 = "p4";
        ///@brief slow (good quality)
        static constexpr std::string_view kP5 = "p5";
        ///@brief slower (better quality)
        static constexpr std::string_view kP6 = "p6";
        ///@brief slowest (best quality)
        static constexpr std::string_view kP7 = "p7";
        ///@brief hq 2 passes
        static constexpr std::string_view kSlow = "slow";
    } // namespace preset

    /**
     * @brief Set the encoding profile
     *
     * For possible values see @ref profile namespace
     */
    static constexpr std::string_view kProfile = "profile";

    /**
     * @brief Constant quantization parameter rate control method
     *
     * Type: int64, possible values     [-1.0, 51.0]
     */
    static constexpr std::string_view kQp = "qp";

    /**
     * @brief Quantization parameter offset for cb channel
     *
     * Type: int64, possible values     [-12.0, 12.0]
     */
    static constexpr std::string_view kQpCbOffset = "qp_cb_offset";

    /**
     * @brief Quantization parameter offset for cr channel
     *
     * Type: int64, possible values     [-12.0, 12.0]
     */
    static constexpr std::string_view kQpCrOffset = "qp_cr_offset";

    /**
     * @brief Override the preset rate-control
     *
     * For possible values see @ref rc namespace
     */
    static constexpr std::string_view kRc = "rc";
    /**
     * @brief Namespace containing possible values of ::kRc option.
     */
    namespace rc {
        ///@brief Constant bitrate mode
        static constexpr std::string_view kCbr = "cbr";
        ///@brief Constant bitrate high quality mode
        static constexpr std::string_view kCbrHq = "cbr_hq";
        ///@brief Constant bitrate low delay high quality mode
        static constexpr std::string_view kCbrLdHq = "cbr_ld_hq";
        ///@brief Constant QP mode
        static constexpr std::string_view kConstqp = "constqp";
        ///@brief Multi-pass optimized for image quality (deprecated)
        static constexpr std::string_view kLl2passQuality = "ll_2pass_quality";
        ///@brief Multi-pass optimized for constant frame size (deprecated)
        static constexpr std::string_view kLl2passSize = "ll_2pass_size";
        ///@brief Variable bitrate mode
        static constexpr std::string_view kVbr = "vbr";
        ///@brief Multi-pass variable bitrate mode (deprecated)
        static constexpr std::string_view kVbr2pass = "vbr_2pass";
        ///@brief Variable bitrate high quality mode
        static constexpr std::string_view kVbrHq = "vbr_hq";
        ///@brief Variable bitrate mode with MinQP (deprecated)
        static constexpr std::string_view kVbrMinqp = "vbr_minqp";
    } // namespace rc

    /**
     * @brief Number of frames to look ahead for rate-control
     *
     * Type: int64, possible values     [0.0, 2147483647.0]
     */
    static constexpr std::string_view kRcLookahead = "rc-lookahead";

    /**
     * @brief Configure how nvenc handles packed RGB input.
     *
     * For possible values see @ref rgb_mode namespace
     */
    static constexpr std::string_view kRgbMode = "rgb_mode";
    /**
     * @brief Namespace containing possible values of ::kRgbMode option.
     */
    namespace rgb_mode {
        ///@brief Disables support, throws an error.
        static constexpr std::string_view kDisabled = "disabled";
        ///@brief Convert to yuv420
        static constexpr std::string_view kYuv420 = "yuv420";
        ///@brief Convert to yuv444
        static constexpr std::string_view kYuv444 = "yuv444";
    } // namespace rgb_mode

    /**
     * @brief Use timecode (if available)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kS12mTc = "s12m_tc";

    /**
     * @brief Use single slice intra refresh
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSingleSliceIntraRefresh = "single-slice-intra-refresh";

    /**
     * @brief Set to 1 to enable Spatial AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSpatialAq = "spatial-aq";

    /**
     * @brief Set to 1 to enable Spatial AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kSpatialAq = "spatial_aq";

    /**
     * @brief Set 1 to minimize GOP-to-GOP rate fluctuations
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStrictGop = "strict_gop";

    /**
     * @brief Number of concurrent surfaces
     *
     * Type: int64, possible values     [0.0, 64.0]
     */
    static constexpr std::string_view kSurfaces = "surfaces";

    /**
     * @brief Set to 1 to enable Temporal AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTemporalAq = "temporal-aq";

    /**
     * @brief Set to 1 to enable Temporal AQ
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kTemporalAq = "temporal_aq";

    /**
     * @brief Set the encoding tier
     *
     * For possible values see @ref tier namespace
     */
    static constexpr std::string_view kTier = "tier";

    /**
     * @brief Set the encoding tuning info
     *
     * For possible values see @ref tune namespace
     */
    static constexpr std::string_view kTune = "tune";
    /**
     * @brief Namespace containing possible values of ::kTune option.
     */
    namespace tune {
        ///@brief High quality
        static constexpr std::string_view kHq = "hq";
        ///@brief Low latency
        static constexpr std::string_view kLl = "ll";
        ///@brief Lossless
        static constexpr std::string_view kLossless = "lossless";
        ///@brief Ultra low latency
        static constexpr std::string_view kUll = "ull";
    } // namespace tune

    /**
     * @brief Pass on user data unregistered SEI if available
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUduSei = "udu_sei";

    /**
     * @brief Set 1 to enable weighted prediction
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kWeightedPred = "weighted_pred";

    /**
     * @brief Set 1 to indicate zero latency operation (no reordering delay)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kZerolatency = "zerolatency";

} // namespace hevc_nvenc
///@}
} // namespace xsdk::av_opt::v_encoder
