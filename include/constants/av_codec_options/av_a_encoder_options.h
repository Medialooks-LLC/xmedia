#pragma once

#include <string_view>

namespace xsdk::av_opt::a_encoder {
/**
 * @brief Set bitrate (in bits/s)
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kAb = "ab";

/**
 * @brief Set audio sampling rate (in Hz)
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kAr = "ar";

/**
 * @brief Audio service type
 *
 * For possible values see @ref audio_service_type namespace
 */
static constexpr std::string_view kAudioServiceType = "audio_service_type";
/**
 * @brief Namespace containing possible values of ::kAudioServiceType option.
 */
namespace audio_service_type {
    ///@brief Commentary
    static constexpr std::string_view kCo = "co";
    ///@brief Dialogue
    static constexpr std::string_view kDi = "di";
    ///@brief Effects
    static constexpr std::string_view kEf = "ef";
    ///@brief Emergency
    static constexpr std::string_view kEm = "em";
    ///@brief Hearing Impaired
    static constexpr std::string_view kHi = "hi";
    ///@brief Karaoke
    static constexpr std::string_view kKa = "ka";
    ///@brief Main Audio Service
    static constexpr std::string_view kMa = "ma";
    ///@brief Visually Impaired
    static constexpr std::string_view kVi = "vi";
    ///@brief Voice Over
    static constexpr std::string_view kVo = "vo";
} // namespace audio_service_type

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
 * @brief ch_layout option
 *
 * Type: , possible values []
 */
static constexpr std::string_view kChLayout = "ch_layout";

/**
 * @brief compression_level option
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kCompressionLevel = "compression_level";

/**
 * @brief Set cutoff bandwidth
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kCutoff = "cutoff";

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
    ///@brief place global headers in extradata instead of every keyframe
    static constexpr std::string_view kGlobalHeader = "global_header";
} // namespace flags

/**
 * @brief flags2 option
 *
 * Type: int, possible values []
 */
static constexpr std::string_view kFlags2 = "flags2";

/**
 * @brief frame_size option
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kFrameSize = "frame_size";

/**
 * @brief global_quality option
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kGlobalQuality = "global_quality";

/**
 * @brief Encoding level, usually corresponding to the profile level, codec-specific
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kLevel = "level";

/**
 * @brief Maximum number of pixels
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxPixels = "max_pixels";

/**
 * @brief Maximum number of samples
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxSamples = "max_samples";

/**
 * @brief Maximum bitrate (in bits/s). Used for VBV together with bufsize.
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxrate = "maxrate";

/**
 * @brief Minimum bitrate (in bits/s). Most useful in setting up a CBR encode. It is of little use otherwise.
 *
 * Type: double, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kMinrate = "minrate";

/**
 * @brief profile option
 *
 * Type: int64, possible values [-2147483648.0, 2147483647.0]
 */
static constexpr std::string_view kProfile = "profile";

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
 * Type: int, possible values []
 */
static constexpr std::string_view kThreadType = "thread_type";

/**
 * @brief Set the number of threads
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kThreads = "threads";

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
 * @name Options for audio encoders
This group contains a set of static string constants used to define various options of audio encoders.
 */
///@{
namespace aac {
    /**
     * @brief Coding algorithm
     *
     * Type: int64, possible values     [0.0, 2.0]
     */
    static constexpr std::string_view kAacCoder = "aac_coder";

    /**
     * @brief Intensity stereo coding
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacIs = "aac_is";

    /**
     * @brief Long term prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacLtp = "aac_ltp";

    /**
     * @brief Force M/S stereo coding
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacMs = "aac_ms";

    /**
     * @brief Forces the use of PCEs
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacPce = "aac_pce";

    /**
     * @brief Perceptual noise substitution
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacPns = "aac_pns";

    /**
     * @brief AAC-Main prediction
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacPred = "aac_pred";

    /**
     * @brief Temporal noise shaping
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAacTns = "aac_tns";

    /**
     * @brief avctx.profile option
     *
     * For possible values see @ref avctx.profile namespace
     */
    static constexpr std::string_view kAvctxProfile = "avctx.profile";

    /**
     * @brief coder option
     *
     * For possible values see @ref coder namespace
     */
    static constexpr std::string_view kCoder = "coder";
    /**
     * @brief Namespace containing possible values of ::kCoder option.
     */
    namespace coder {
        ///@brief ANMR method
        static constexpr std::string_view kAnmr = "anmr";
        ///@brief Default fast search
        static constexpr std::string_view kFast = "fast";
        ///@brief Two loop searching method
        static constexpr std::string_view kTwoloop = "twoloop";
    } // namespace coder

} // namespace aac
namespace ac3 {
    /**
     * @brief A/D Converter Type
     *
     * For possible values see @ref ad_conv_type namespace
     */
    static constexpr std::string_view kAdConvType = "ad_conv_type";
    /**
     * @brief Namespace containing possible values of ::kAdConvType option.
     */
    namespace ad_conv_type {
        ///@brief HDCD
        static constexpr std::string_view kHdcd = "hdcd";
        ///@brief Standard (default)
        static constexpr std::string_view kStandard = "standard";
    } // namespace ad_conv_type

    /**
     * @brief Center Mix Level
     *
     * Type: string, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kCenterMixlev = "center_mixlev";

    /**
     * @brief Channel Coupling
     *
     * For possible values see @ref channel_coupling namespace
     */
    static constexpr std::string_view kChannelCoupling = "channel_coupling";
    /**
     * @brief Namespace containing possible values of ::kChannelCoupling option.
     */
    namespace channel_coupling {
        ///@brief Selected by the Encoder
        static constexpr std::string_view kAuto = "auto";
    } // namespace channel_coupling

    /**
     * @brief Copyright Bit
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kCopyright = "copyright";

    /**
     * @brief Coupling Start Band
     *
     * For possible values see @ref cpl_start_band namespace
     */
    static constexpr std::string_view kCplStartBand = "cpl_start_band";
    /**
     * @brief Namespace containing possible values of ::kCplStartBand option.
     */
    namespace cpl_start_band {
        ///@brief Selected by the Encoder
        static constexpr std::string_view kAuto = "auto";
    } // namespace cpl_start_band

    /**
     * @brief Dolby Headphone Mode
     *
     * For possible values see @ref dheadphone_mode namespace
     */
    static constexpr std::string_view kDheadphoneMode = "dheadphone_mode";
    /**
     * @brief Namespace containing possible values of ::kDheadphoneMode option.
     */
    namespace dheadphone_mode {
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Headphone Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Headphone Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dheadphone_mode

    /**
     * @brief Dialogue Level (dB)
     *
     * Type: int64, possible values     [-31.0, -1.0]
     */
    static constexpr std::string_view kDialnorm = "dialnorm";

    /**
     * @brief Preferred Stereo Downmix Mode
     *
     * For possible values see @ref dmix_mode namespace
     */
    static constexpr std::string_view kDmixMode = "dmix_mode";
    /**
     * @brief Namespace containing possible values of ::kDmixMode option.
     */
    namespace dmix_mode {
        ///@brief Dolby Pro Logic II Downmix Preferred
        static constexpr std::string_view kDplii = "dplii";
        ///@brief Lo/Ro Downmix Preferred
        static constexpr std::string_view kLoro = "loro";
        ///@brief Lt/Rt Downmix Preferred
        static constexpr std::string_view kLtrt = "ltrt";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
    } // namespace dmix_mode

    /**
     * @brief Dolby Surround Mode
     *
     * For possible values see @ref dsur_mode namespace
     */
    static constexpr std::string_view kDsurMode = "dsur_mode";
    /**
     * @brief Namespace containing possible values of ::kDsurMode option.
     */
    namespace dsur_mode {
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Surround Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Surround Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dsur_mode

    /**
     * @brief Dolby Surround EX Mode
     *
     * For possible values see @ref dsurex_mode namespace
     */
    static constexpr std::string_view kDsurexMode = "dsurex_mode";
    /**
     * @brief Namespace containing possible values of ::kDsurexMode option.
     */
    namespace dsurex_mode {
        ///@brief Dolby Pro Logic IIz-encoded
        static constexpr std::string_view kDpliiz = "dpliiz";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Surround EX Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Surround EX Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dsurex_mode

    /**
     * @brief Lo/Ro Center Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLoroCmixlev = "loro_cmixlev";

    /**
     * @brief Lo/Ro Surround Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLoroSurmixlev = "loro_surmixlev";

    /**
     * @brief Lt/Rt Center Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLtrtCmixlev = "ltrt_cmixlev";

    /**
     * @brief Lt/Rt Surround Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLtrtSurmixlev = "ltrt_surmixlev";

    /**
     * @brief Mixing Level
     *
     * Type: int64, possible values     [-1.0, 111.0]
     */
    static constexpr std::string_view kMixingLevel = "mixing_level";

    /**
     * @brief Original Bit Stream
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kOriginal = "original";

    /**
     * @brief Allow Changing Metadata Per-Frame
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPerFrameMetadata = "per_frame_metadata";

    /**
     * @brief Room Type
     *
     * For possible values see @ref room_type namespace
     */
    static constexpr std::string_view kRoomType = "room_type";
    /**
     * @brief Namespace containing possible values of ::kRoomType option.
     */
    namespace room_type {
        ///@brief Large Room
        static constexpr std::string_view kLarge = "large";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Small Room
        static constexpr std::string_view kSmall = "small";
    } // namespace room_type

    /**
     * @brief Stereo Rematrixing
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStereoRematrixing = "stereo_rematrixing";

    /**
     * @brief Surround Mix Level
     *
     * Type: string, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kSurroundMixlev = "surround_mixlev";

} // namespace ac3
namespace ac3_fixed {
    /**
     * @brief A/D Converter Type
     *
     * For possible values see @ref ad_conv_type namespace
     */
    static constexpr std::string_view kAdConvType = "ad_conv_type";
    /**
     * @brief Namespace containing possible values of ::kAdConvType option.
     */
    namespace ad_conv_type {
        ///@brief HDCD
        static constexpr std::string_view kHdcd = "hdcd";
        ///@brief Standard (default)
        static constexpr std::string_view kStandard = "standard";
    } // namespace ad_conv_type

    /**
     * @brief Center Mix Level
     *
     * Type: string, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kCenterMixlev = "center_mixlev";

    /**
     * @brief Channel Coupling
     *
     * For possible values see @ref channel_coupling namespace
     */
    static constexpr std::string_view kChannelCoupling = "channel_coupling";
    /**
     * @brief Namespace containing possible values of ::kChannelCoupling option.
     */
    namespace channel_coupling {
        ///@brief Selected by the Encoder
        static constexpr std::string_view kAuto = "auto";
    } // namespace channel_coupling

    /**
     * @brief Copyright Bit
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kCopyright = "copyright";

    /**
     * @brief Coupling Start Band
     *
     * For possible values see @ref cpl_start_band namespace
     */
    static constexpr std::string_view kCplStartBand = "cpl_start_band";
    /**
     * @brief Namespace containing possible values of ::kCplStartBand option.
     */
    namespace cpl_start_band {
        ///@brief Selected by the Encoder
        static constexpr std::string_view kAuto = "auto";
    } // namespace cpl_start_band

    /**
     * @brief Dolby Headphone Mode
     *
     * For possible values see @ref dheadphone_mode namespace
     */
    static constexpr std::string_view kDheadphoneMode = "dheadphone_mode";
    /**
     * @brief Namespace containing possible values of ::kDheadphoneMode option.
     */
    namespace dheadphone_mode {
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Headphone Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Headphone Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dheadphone_mode

    /**
     * @brief Dialogue Level (dB)
     *
     * Type: int64, possible values     [-31.0, -1.0]
     */
    static constexpr std::string_view kDialnorm = "dialnorm";

    /**
     * @brief Preferred Stereo Downmix Mode
     *
     * For possible values see @ref dmix_mode namespace
     */
    static constexpr std::string_view kDmixMode = "dmix_mode";
    /**
     * @brief Namespace containing possible values of ::kDmixMode option.
     */
    namespace dmix_mode {
        ///@brief Dolby Pro Logic II Downmix Preferred
        static constexpr std::string_view kDplii = "dplii";
        ///@brief Lo/Ro Downmix Preferred
        static constexpr std::string_view kLoro = "loro";
        ///@brief Lt/Rt Downmix Preferred
        static constexpr std::string_view kLtrt = "ltrt";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
    } // namespace dmix_mode

    /**
     * @brief Dolby Surround Mode
     *
     * For possible values see @ref dsur_mode namespace
     */
    static constexpr std::string_view kDsurMode = "dsur_mode";
    /**
     * @brief Namespace containing possible values of ::kDsurMode option.
     */
    namespace dsur_mode {
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Surround Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Surround Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dsur_mode

    /**
     * @brief Dolby Surround EX Mode
     *
     * For possible values see @ref dsurex_mode namespace
     */
    static constexpr std::string_view kDsurexMode = "dsurex_mode";
    /**
     * @brief Namespace containing possible values of ::kDsurexMode option.
     */
    namespace dsurex_mode {
        ///@brief Dolby Pro Logic IIz-encoded
        static constexpr std::string_view kDpliiz = "dpliiz";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Surround EX Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Surround EX Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dsurex_mode

    /**
     * @brief Lo/Ro Center Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLoroCmixlev = "loro_cmixlev";

    /**
     * @brief Lo/Ro Surround Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLoroSurmixlev = "loro_surmixlev";

    /**
     * @brief Lt/Rt Center Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLtrtCmixlev = "ltrt_cmixlev";

    /**
     * @brief Lt/Rt Surround Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLtrtSurmixlev = "ltrt_surmixlev";

    /**
     * @brief Mixing Level
     *
     * Type: int64, possible values     [-1.0, 111.0]
     */
    static constexpr std::string_view kMixingLevel = "mixing_level";

    /**
     * @brief Original Bit Stream
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kOriginal = "original";

    /**
     * @brief Allow Changing Metadata Per-Frame
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPerFrameMetadata = "per_frame_metadata";

    /**
     * @brief Room Type
     *
     * For possible values see @ref room_type namespace
     */
    static constexpr std::string_view kRoomType = "room_type";
    /**
     * @brief Namespace containing possible values of ::kRoomType option.
     */
    namespace room_type {
        ///@brief Large Room
        static constexpr std::string_view kLarge = "large";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Small Room
        static constexpr std::string_view kSmall = "small";
    } // namespace room_type

    /**
     * @brief Stereo Rematrixing
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStereoRematrixing = "stereo_rematrixing";

    /**
     * @brief Surround Mix Level
     *
     * Type: string, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kSurroundMixlev = "surround_mixlev";

} // namespace ac3_fixed
namespace alac {
    /**
     * @brief max_prediction_order option
     *
     * Type: int64, possible values     [1.0, 30.0]
     */
    static constexpr std::string_view kMaxPredictionOrder = "max_prediction_order";

    /**
     * @brief min_prediction_order option
     *
     * Type: int64, possible values     [1.0, 30.0]
     */
    static constexpr std::string_view kMinPredictionOrder = "min_prediction_order";

} // namespace alac
namespace dca {
    /**
     * @brief Use ADPCM encoding
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kDcaAdpcm = "dca_adpcm";

} // namespace dca
namespace eac3 {
    /**
     * @brief A/D Converter Type
     *
     * For possible values see @ref ad_conv_type namespace
     */
    static constexpr std::string_view kAdConvType = "ad_conv_type";
    /**
     * @brief Namespace containing possible values of ::kAdConvType option.
     */
    namespace ad_conv_type {
        ///@brief HDCD
        static constexpr std::string_view kHdcd = "hdcd";
        ///@brief Standard (default)
        static constexpr std::string_view kStandard = "standard";
    } // namespace ad_conv_type

    /**
     * @brief Channel Coupling
     *
     * For possible values see @ref channel_coupling namespace
     */
    static constexpr std::string_view kChannelCoupling = "channel_coupling";
    /**
     * @brief Namespace containing possible values of ::kChannelCoupling option.
     */
    namespace channel_coupling {
        ///@brief Selected by the Encoder
        static constexpr std::string_view kAuto = "auto";
    } // namespace channel_coupling

    /**
     * @brief Copyright Bit
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kCopyright = "copyright";

    /**
     * @brief Coupling Start Band
     *
     * For possible values see @ref cpl_start_band namespace
     */
    static constexpr std::string_view kCplStartBand = "cpl_start_band";
    /**
     * @brief Namespace containing possible values of ::kCplStartBand option.
     */
    namespace cpl_start_band {
        ///@brief Selected by the Encoder
        static constexpr std::string_view kAuto = "auto";
    } // namespace cpl_start_band

    /**
     * @brief Dolby Headphone Mode
     *
     * For possible values see @ref dheadphone_mode namespace
     */
    static constexpr std::string_view kDheadphoneMode = "dheadphone_mode";
    /**
     * @brief Namespace containing possible values of ::kDheadphoneMode option.
     */
    namespace dheadphone_mode {
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Headphone Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Headphone Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dheadphone_mode

    /**
     * @brief Dialogue Level (dB)
     *
     * Type: int64, possible values     [-31.0, -1.0]
     */
    static constexpr std::string_view kDialnorm = "dialnorm";

    /**
     * @brief Preferred Stereo Downmix Mode
     *
     * For possible values see @ref dmix_mode namespace
     */
    static constexpr std::string_view kDmixMode = "dmix_mode";
    /**
     * @brief Namespace containing possible values of ::kDmixMode option.
     */
    namespace dmix_mode {
        ///@brief Dolby Pro Logic II Downmix Preferred
        static constexpr std::string_view kDplii = "dplii";
        ///@brief Lo/Ro Downmix Preferred
        static constexpr std::string_view kLoro = "loro";
        ///@brief Lt/Rt Downmix Preferred
        static constexpr std::string_view kLtrt = "ltrt";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
    } // namespace dmix_mode

    /**
     * @brief Dolby Surround Mode
     *
     * For possible values see @ref dsur_mode namespace
     */
    static constexpr std::string_view kDsurMode = "dsur_mode";
    /**
     * @brief Namespace containing possible values of ::kDsurMode option.
     */
    namespace dsur_mode {
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Surround Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Surround Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dsur_mode

    /**
     * @brief Dolby Surround EX Mode
     *
     * For possible values see @ref dsurex_mode namespace
     */
    static constexpr std::string_view kDsurexMode = "dsurex_mode";
    /**
     * @brief Namespace containing possible values of ::kDsurexMode option.
     */
    namespace dsurex_mode {
        ///@brief Dolby Pro Logic IIz-encoded
        static constexpr std::string_view kDpliiz = "dpliiz";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Not Dolby Surround EX Encoded
        static constexpr std::string_view kOff = "off";
        ///@brief Dolby Surround EX Encoded
        static constexpr std::string_view kOn = "on";
    } // namespace dsurex_mode

    /**
     * @brief Lo/Ro Center Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLoroCmixlev = "loro_cmixlev";

    /**
     * @brief Lo/Ro Surround Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLoroSurmixlev = "loro_surmixlev";

    /**
     * @brief Lt/Rt Center Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLtrtCmixlev = "ltrt_cmixlev";

    /**
     * @brief Lt/Rt Surround Mix Level
     *
     * Type: string, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kLtrtSurmixlev = "ltrt_surmixlev";

    /**
     * @brief Mixing Level
     *
     * Type: int64, possible values     [-1.0, 111.0]
     */
    static constexpr std::string_view kMixingLevel = "mixing_level";

    /**
     * @brief Original Bit Stream
     *
     * Type: int64, possible values     [-1.0, 1.0]
     */
    static constexpr std::string_view kOriginal = "original";

    /**
     * @brief Allow Changing Metadata Per-Frame
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPerFrameMetadata = "per_frame_metadata";

    /**
     * @brief Room Type
     *
     * For possible values see @ref room_type namespace
     */
    static constexpr std::string_view kRoomType = "room_type";
    /**
     * @brief Namespace containing possible values of ::kRoomType option.
     */
    namespace room_type {
        ///@brief Large Room
        static constexpr std::string_view kLarge = "large";
        ///@brief Not Indicated (default)
        static constexpr std::string_view kNotindicated = "notindicated";
        ///@brief Small Room
        static constexpr std::string_view kSmall = "small";
    } // namespace room_type

    /**
     * @brief Stereo Rematrixing
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kStereoRematrixing = "stereo_rematrixing";

} // namespace eac3
namespace flac {
    /**
     * @brief Stereo decorrelation mode
     *
     * For possible values see @ref ch_mode namespace
     */
    static constexpr std::string_view kChMode = "ch_mode";

    /**
     * @brief Calculate rice parameters exactly
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kExactRiceParameters = "exact_rice_parameters";

    /**
     * @brief LPC coefficient precision
     *
     * Type: int64, possible values     [0.0, 15.0]
     */
    static constexpr std::string_view kLpcCoeffPrecision = "lpc_coeff_precision";

    /**
     * @brief Number of passes to use for Cholesky factorization during LPC analysis
     *
     * Type: int64, possible values     [1.0, 2147483647.0]
     */
    static constexpr std::string_view kLpcPasses = "lpc_passes";

    /**
     * @brief LPC algorithm
     *
     * For possible values see @ref lpc_type namespace
     */
    static constexpr std::string_view kLpcType = "lpc_type";

    /**
     * @brief max_partition_order option
     *
     * Type: int64, possible values     [-1.0, 8.0]
     */
    static constexpr std::string_view kMaxPartitionOrder = "max_partition_order";

    /**
     * @brief max_prediction_order option
     *
     * Type: int64, possible values     [-1.0, 32.0]
     */
    static constexpr std::string_view kMaxPredictionOrder = "max_prediction_order";

    /**
     * @brief min_partition_order option
     *
     * Type: int64, possible values     [-1.0, 8.0]
     */
    static constexpr std::string_view kMinPartitionOrder = "min_partition_order";

    /**
     * @brief min_prediction_order option
     *
     * Type: int64, possible values     [-1.0, 32.0]
     */
    static constexpr std::string_view kMinPredictionOrder = "min_prediction_order";

    /**
     * @brief Multi-dimensional quantization
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMultiDimQuant = "multi_dim_quant";

    /**
     * @brief Search method for selecting prediction order
     *
     * Type: int64, possible values     [-1.0, 5.0]
     */
    static constexpr std::string_view kPredictionOrderMethod = "prediction_order_method";

    /**
     * @brief predm option
     *
     * For possible values see @ref predm namespace
     */
    static constexpr std::string_view kPredm = "predm";

} // namespace flac
namespace mlp {
    /**
     * @brief Max number of codebook searches
     *
     * Type: int64, possible values     [1.0, 100.0]
     */
    static constexpr std::string_view kCodebookSearch = "codebook_search";

    /**
     * @brief LPC coefficient precision
     *
     * Type: int64, possible values     [0.0, 15.0]
     */
    static constexpr std::string_view kLpcCoeffPrecision = "lpc_coeff_precision";

    /**
     * @brief Number of passes to use for Cholesky factorization during LPC analysis
     *
     * Type: int64, possible values     [1.0, 2147483647.0]
     */
    static constexpr std::string_view kLpcPasses = "lpc_passes";

    /**
     * @brief LPC algorithm
     *
     * For possible values see @ref lpc_type namespace
     */
    static constexpr std::string_view kLpcType = "lpc_type";

    /**
     * @brief Max number of frames between each new header
     *
     * Type: int64, possible values     [8.0, 128.0]
     */
    static constexpr std::string_view kMaxInterval = "max_interval";

    /**
     * @brief Search method for selecting prediction order
     *
     * Type: int64, possible values     [0.0, 4.0]
     */
    static constexpr std::string_view kPredictionOrder = "prediction_order";

    /**
     * @brief predm option
     *
     * For possible values see @ref predm namespace
     */
    static constexpr std::string_view kPredm = "predm";

    /**
     * @brief Rematrix coefficient precision
     *
     * Type: int64, possible values     [0.0, 14.0]
     */
    static constexpr std::string_view kRematrixPrecision = "rematrix_precision";

} // namespace mlp
namespace opus {
    /**
     * @brief Apply intensity stereo phase inversion
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kApplyPhaseInv = "apply_phase_inv";

    /**
     * @brief Maximum delay in milliseconds
     *
     * Type: string, possible values     [2.5, 360.0]
     */
    static constexpr std::string_view kOpusDelay = "opus_delay";

} // namespace opus
namespace sbc {
    /**
     * @brief avctx.profile option
     *
     * For possible values see @ref avctx.profile namespace
     */
    static constexpr std::string_view kAvctxProfile = "avctx.profile";

    /**
     * @brief Use mSBC mode (wideband speech mono SBC)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kMsbc = "msbc";

    /**
     * @brief Set maximum algorithmic latency
     *
     * Type: color, possible values     []
     */
    static constexpr std::string_view kSbcDelay = "sbc_delay";

} // namespace sbc
namespace truehd {
    /**
     * @brief Max number of codebook searches
     *
     * Type: int64, possible values     [1.0, 100.0]
     */
    static constexpr std::string_view kCodebookSearch = "codebook_search";

    /**
     * @brief LPC coefficient precision
     *
     * Type: int64, possible values     [0.0, 15.0]
     */
    static constexpr std::string_view kLpcCoeffPrecision = "lpc_coeff_precision";

    /**
     * @brief Number of passes to use for Cholesky factorization during LPC analysis
     *
     * Type: int64, possible values     [1.0, 2147483647.0]
     */
    static constexpr std::string_view kLpcPasses = "lpc_passes";

    /**
     * @brief LPC algorithm
     *
     * For possible values see @ref lpc_type namespace
     */
    static constexpr std::string_view kLpcType = "lpc_type";

    /**
     * @brief Max number of frames between each new header
     *
     * Type: int64, possible values     [8.0, 128.0]
     */
    static constexpr std::string_view kMaxInterval = "max_interval";

    /**
     * @brief Search method for selecting prediction order
     *
     * Type: int64, possible values     [0.0, 4.0]
     */
    static constexpr std::string_view kPredictionOrder = "prediction_order";

    /**
     * @brief predm option
     *
     * For possible values see @ref predm namespace
     */
    static constexpr std::string_view kPredm = "predm";

    /**
     * @brief Rematrix coefficient precision
     *
     * Type: int64, possible values     [0.0, 14.0]
     */
    static constexpr std::string_view kRematrixPrecision = "rematrix_precision";

} // namespace truehd
namespace wavpack {
    /**
     * @brief joint_stereo option
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kJointStereo = "joint_stereo";

    /**
     * @brief optimize_mono option
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kOptimizeMono = "optimize_mono";

} // namespace wavpack
namespace adpcm_argo {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_argo
namespace g726 {
    /**
     * @brief Bits per code
     *
     * Type: int64, possible values     [2.0, 5.0]
     */
    static constexpr std::string_view kCodeSize = "code_size";

} // namespace g726
namespace g726le {
    /**
     * @brief Bits per code
     *
     * Type: int64, possible values     [2.0, 5.0]
     */
    static constexpr std::string_view kCodeSize = "code_size";

} // namespace g726le
namespace adpcm_ima_amv {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_amv
namespace adpcm_ima_alp {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_alp
namespace adpcm_ima_apm {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_apm
namespace adpcm_ima_qt {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_qt
namespace adpcm_ima_ssi {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_ssi
namespace adpcm_ima_wav {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_wav
namespace adpcm_ima_ws {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ima_ws
namespace adpcm_ms {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_ms
namespace adpcm_swf {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_swf
namespace adpcm_yamaha {
    /**
     * @brief Set the block size
     *
     * Type: int64, possible values     [32.0, 8192.0]
     */
    static constexpr std::string_view kBlockSize = "block_size";

} // namespace adpcm_yamaha
namespace libilbc {
    /**
     * @brief ILBC mode (20 or 30 ms frames)
     *
     * Type: int64, possible values     [20.0, 30.0]
     */
    static constexpr std::string_view kMode = "mode";

} // namespace libilbc
namespace libmp3lame {
    /**
     * @brief Use ABR
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kAbr = "abr";

    /**
     * @brief Set copyright flag
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kCopyright = "copyright";

    /**
     * @brief Use joint stereo
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kJointStereo = "joint_stereo";

    /**
     * @brief Set original flag
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kOriginal = "original";

    /**
     * @brief Use bit reservoir
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kReservoir = "reservoir";

} // namespace libmp3lame
namespace libopus {
    /**
     * @brief Intended application type
     *
     * For possible values see @ref application namespace
     */
    static constexpr std::string_view kApplication = "application";
    /**
     * @brief Namespace containing possible values of ::kApplication option.
     */
    namespace application {
        ///@brief Favor faithfulness to the input
        static constexpr std::string_view kAudio = "audio";
        ///@brief Restrict to only the lowest delay modes, disable voice-optimized modes
        static constexpr std::string_view kLowdelay = "lowdelay";
        ///@brief Favor improved speech intelligibility
        static constexpr std::string_view kVoip = "voip";
    } // namespace application

    /**
     * @brief Apply intensity stereo phase inversion
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kApplyPhaseInv = "apply_phase_inv";

    /**
     * @brief Enable inband FEC. Expected packet loss must be non-zero
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kFec = "fec";

    /**
     * @brief Duration of a frame in milliseconds
     *
     * Type: string, possible values     [2.5, 120.0]
     */
    static constexpr std::string_view kFrameDuration = "frame_duration";

    /**
     * @brief Channel Mapping Family
     *
     * Type: int64, possible values     [-1.0, 255.0]
     */
    static constexpr std::string_view kMappingFamily = "mapping_family";

    /**
     * @brief Expected packet loss percentage
     *
     * Type: int64, possible values     [0.0, 100.0]
     */
    static constexpr std::string_view kPacketLoss = "packet_loss";

    /**
     * @brief Variable bit rate mode
     *
     * For possible values see @ref vbr namespace
     */
    static constexpr std::string_view kVbr = "vbr";
    /**
     * @brief Namespace containing possible values of ::kVbr option.
     */
    namespace vbr {
        ///@brief Use constrained VBR
        static constexpr std::string_view kConstrained = "constrained";
        ///@brief Use constant bit rate
        static constexpr std::string_view kOff = "off";
        ///@brief Use variable bit rate
        static constexpr std::string_view kOn = "on";
    } // namespace vbr

} // namespace libopus
namespace libspeex {
    /**
     * @brief Use average bit rate
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kAbr = "abr";

    /**
     * @brief Set quality value (0 to 10) for CBR
     *
     * Type: int64, possible values     [0.0, 10.0]
     */
    static constexpr std::string_view kCbrQuality = "cbr_quality";

    /**
     * @brief Discontinuous Transmission
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kDtx = "dtx";

    /**
     * @brief Number of frames to encode in each packet
     *
     * Type: int64, possible values     [1.0, 8.0]
     */
    static constexpr std::string_view kFramesPerPacket = "frames_per_packet";

    /**
     * @brief Voice Activity Detection
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kVad = "vad";

} // namespace libspeex
namespace libtwolame {
    /**
     * @brief Set MPEG Audio Copyright flag
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kCopyright = "copyright";

    /**
     * @brief Enable energy levels
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kEnergyLevels = "energy_levels";

    /**
     * @brief Enable CRC error protection
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kErrorProtection = "error_protection";

    /**
     * @brief Mpeg Mode
     *
     * For possible values see @ref mode namespace
     */
    static constexpr std::string_view kMode = "mode";

    /**
     * @brief Set MPEG Audio Original flag
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kOriginal = "original";

    /**
     * @brief Psychoacoustic Model
     *
     * Type: int64, possible values     [-1.0, 4.0]
     */
    static constexpr std::string_view kPsymodel = "psymodel";

    /**
     * @brief Set library optput level (0-10)
     *
     * Type: int64, possible values     [0.0, 10.0]
     */
    static constexpr std::string_view kVerbosity = "verbosity";

} // namespace libtwolame
namespace libvorbis {
    /**
     * @brief Sets the impulse block bias
     *
     * Type: float, possible values     [-15.0, 0.0]
     */
    static constexpr std::string_view kIblock = "iblock";

} // namespace libvorbis
namespace aac_mf {
}
namespace ac3_mf {
}
namespace mp3_mf {
}
///@}
} // namespace xsdk::av_opt::a_encoder
