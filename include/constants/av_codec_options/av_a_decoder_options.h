#pragma once

#include <string_view>

namespace xsdk::av_opt::a_decoder {
/**
 * @brief Set audio sampling rate (in Hz)
 *
 * Type: int64, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kAr = "ar";

/**
 * @brief ch_layout option
 *
 * Type: , possible values []
 */
static constexpr std::string_view kChLayout = "ch_layout";

/**
 * @brief List of decoders that are allowed to be used
 *
 * Type: rational, possible values []
 */
static constexpr std::string_view kCodecWhitelist = "codec_whitelist";

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
    ///@brief skip motion compensation
    static constexpr std::string_view kNomc = "nomc";
    ///@brief threading operations
    static constexpr std::string_view kThreadOps = "thread_ops";
} // namespace debug

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
    ///@brief Drop frames whose parameters differ from first decoded frame
    static constexpr std::string_view kDropChanged = "drop_changed";
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
    ///@brief do not skip samples and export skip information as frame side data
    static constexpr std::string_view kSkipManual = "skip_manual";
} // namespace flags2

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
 * @brief Maximum number of samples
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxSamples = "max_samples";

/**
 * @brief Sample format audio decoders should prefer
 *
 * Type: video_rate, possible values []
 */
static constexpr std::string_view kRequestSampleFmt = "request_sample_fmt";

/**
 * @brief side_data_pkt option
 *
 * For possible values see @ref side_data_pkt namespace
 */
static constexpr std::string_view kSideDataPkt = "side_data_pkt";

/**
 * @brief Comma-separated list of side data types for which user-supplied (container) data is preferred over coded
 * bytestream
 *
 * Type: , possible values []
 */
static constexpr std::string_view kSideDataPreferPacket = "side_data_prefer_packet";

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
 * @name Options for audio encoders
This group contains a set of static string constants used to define various options of audio encoders.
 */
///@{
namespace s302m {
    /**
     * @brief Chooses what to do with NON-PCM
     *
     * For possible values see @ref non_pcm_mode namespace
     */
    static constexpr std::string_view kNonPcmMode = "non_pcm_mode";
    /**
     * @brief Namespace containing possible values of ::kNonPcmMode option.
     */
    namespace non_pcm_mode {
        ///@brief Pass NON-PCM through unchanged
        static constexpr std::string_view kCopy = "copy";
        ///@brief Decode if possible else passthrough
        static constexpr std::string_view kDecodeCopy = "decode_copy";
        ///@brief Decode if possible else drop
        static constexpr std::string_view kDecodeDrop = "decode_drop";
        ///@brief Drop NON-PCM
        static constexpr std::string_view kDrop = "drop";
    } // namespace non_pcm_mode

} // namespace s302m
namespace aac {
    /**
     * @brief Order in which the channels are to be exported
     *
     * For possible values see @ref channel_order namespace
     */
    static constexpr std::string_view kChannelOrder = "channel_order";
    /**
     * @brief Namespace containing possible values of ::kChannelOrder option.
     */
    namespace channel_order {
        ///@brief order in which the channels are coded in the bitstream
        static constexpr std::string_view kCoded = "coded";
        ///@brief normal libavcodec channel order
        static constexpr std::string_view kDefault = "default";
    } // namespace channel_order

    /**
     * @brief Select the channel to decode for dual mono
     *
     * For possible values see @ref dual_mono_mode namespace
     */
    static constexpr std::string_view kDualMonoMode = "dual_mono_mode";
    /**
     * @brief Namespace containing possible values of ::kDualMonoMode option.
     */
    namespace dual_mono_mode {
        ///@brief autoselection
        static constexpr std::string_view kAuto = "auto";
        ///@brief Select both channels
        static constexpr std::string_view kBoth = "both";
        ///@brief Select Main/Left channel
        static constexpr std::string_view kMain = "main";
        ///@brief Select Sub/Right channel
        static constexpr std::string_view kSub = "sub";
    } // namespace dual_mono_mode

} // namespace aac
namespace aac_fixed {
    /**
     * @brief Order in which the channels are to be exported
     *
     * For possible values see @ref channel_order namespace
     */
    static constexpr std::string_view kChannelOrder = "channel_order";
    /**
     * @brief Namespace containing possible values of ::kChannelOrder option.
     */
    namespace channel_order {
        ///@brief order in which the channels are coded in the bitstream
        static constexpr std::string_view kCoded = "coded";
        ///@brief normal libavcodec channel order
        static constexpr std::string_view kDefault = "default";
    } // namespace channel_order

    /**
     * @brief Select the channel to decode for dual mono
     *
     * For possible values see @ref dual_mono_mode namespace
     */
    static constexpr std::string_view kDualMonoMode = "dual_mono_mode";
    /**
     * @brief Namespace containing possible values of ::kDualMonoMode option.
     */
    namespace dual_mono_mode {
        ///@brief autoselection
        static constexpr std::string_view kAuto = "auto";
        ///@brief Select both channels
        static constexpr std::string_view kBoth = "both";
        ///@brief Select Main/Left channel
        static constexpr std::string_view kMain = "main";
        ///@brief Select Sub/Right channel
        static constexpr std::string_view kSub = "sub";
    } // namespace dual_mono_mode

} // namespace aac_fixed
namespace ac3 {
    /**
     * @brief Enable consistent noise generation
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kConsNoisegen = "cons_noisegen";

    /**
     * @brief Preferred Stereo Downmix Mode
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kDmixMode = "dmix_mode";

    /**
     * @brief Request a specific channel layout from the decoder
     *
     * Type: , possible values     []
     */
    static constexpr std::string_view kDownmix = "downmix";

    /**
     * @brief Percentage of dynamic range compression to apply
     *
     * Type: string, possible values     [0.0, 6.0]
     */
    static constexpr std::string_view kDrcScale = "drc_scale";

    /**
     * @brief Enable heavy dynamic range compression
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kHeavyCompr = "heavy_compr";

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
     * @brief Target level in -dBFS (0 not applied)
     *
     * Type: int64, possible values     [-31.0, 0.0]
     */
    static constexpr std::string_view kTargetLevel = "target_level";

} // namespace ac3
namespace ac3_fixed {
    /**
     * @brief Enable consistent noise generation
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kConsNoisegen = "cons_noisegen";

    /**
     * @brief Request a specific channel layout from the decoder
     *
     * Type: , possible values     []
     */
    static constexpr std::string_view kDownmix = "downmix";

    /**
     * @brief Percentage of dynamic range compression to apply
     *
     * Type: string, possible values     [0.0, 6.0]
     */
    static constexpr std::string_view kDrcScale = "drc_scale";

    /**
     * @brief Enable heavy dynamic range compression
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kHeavyCompr = "heavy_compr";

} // namespace ac3_fixed
namespace alac {
    /**
     * @brief Force non-standard decoding process
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kExtraBitsBug = "extra_bits_bug";

} // namespace alac
namespace ape {
    /**
     * @brief Maximum number of samples decoded per call
     *
     * For possible values see @ref max_samples namespace
     */
    static constexpr std::string_view kMaxSamples = "max_samples";
    /**
     * @brief Namespace containing possible values of ::kMaxSamples option.
     */
    namespace max_samples {
        ///@brief no maximum. decode all samples for each packet at once
        static constexpr std::string_view kAll = "all";
    } // namespace max_samples

} // namespace ape
namespace dca {
    /**
     * @brief Order in which the channels are to be exported
     *
     * For possible values see @ref channel_order namespace
     */
    static constexpr std::string_view kChannelOrder = "channel_order";
    /**
     * @brief Namespace containing possible values of ::kChannelOrder option.
     */
    namespace channel_order {
        ///@brief order in which the channels are coded in the bitstream
        static constexpr std::string_view kCoded = "coded";
        ///@brief normal libavcodec channel order
        static constexpr std::string_view kDefault = "default";
    } // namespace channel_order

    /**
     * @brief Decode core only without extensions
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kCoreOnly = "core_only";

    /**
     * @brief Request a specific channel layout from the decoder
     *
     * Type: , possible values     []
     */
    static constexpr std::string_view kDownmix = "downmix";

} // namespace dca
namespace dolby_e {
    /**
     * @brief Order in which the channels are to be exported
     *
     * For possible values see @ref channel_order namespace
     */
    static constexpr std::string_view kChannelOrder = "channel_order";
    /**
     * @brief Namespace containing possible values of ::kChannelOrder option.
     */
    namespace channel_order {
        ///@brief order in which the channels are coded in the bitstream
        static constexpr std::string_view kCoded = "coded";
        ///@brief normal libavcodec channel order
        static constexpr std::string_view kDefault = "default";
    } // namespace channel_order

} // namespace dolby_e
namespace eac3 {
    /**
     * @brief Enable consistent noise generation
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kConsNoisegen = "cons_noisegen";

    /**
     * @brief Preferred Stereo Downmix Mode
     *
     * Type: int64, possible values     [-1.0, 2.0]
     */
    static constexpr std::string_view kDmixMode = "dmix_mode";

    /**
     * @brief Request a specific channel layout from the decoder
     *
     * Type: , possible values     []
     */
    static constexpr std::string_view kDownmix = "downmix";

    /**
     * @brief Percentage of dynamic range compression to apply
     *
     * Type: string, possible values     [0.0, 6.0]
     */
    static constexpr std::string_view kDrcScale = "drc_scale";

    /**
     * @brief Enable heavy dynamic range compression
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kHeavyCompr = "heavy_compr";

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
     * @brief Target level in -dBFS (0 not applied)
     *
     * Type: int64, possible values     [-31.0, 0.0]
     */
    static constexpr std::string_view kTargetLevel = "target_level";

} // namespace eac3
namespace evrc {
    /**
     * @brief Enable postfilter
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPostfilter = "postfilter";

} // namespace evrc
namespace flac {
    /**
     * @brief Emulate old buggy lavc behavior
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kUseBuggyLpc = "use_buggy_lpc";

} // namespace flac
namespace g723_1 {
    /**
     * @brief Enable postfilter
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kPostfilter = "postfilter";

} // namespace g723_1
namespace mlp {
    /**
     * @brief Request a specific channel layout from the decoder
     *
     * Type: , possible values     []
     */
    static constexpr std::string_view kDownmix = "downmix";

} // namespace mlp
namespace opus {
    /**
     * @brief Apply intensity stereo phase inversion
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kApplyPhaseInv = "apply_phase_inv";

} // namespace opus
namespace truehd {
    /**
     * @brief Request a specific channel layout from the decoder
     *
     * Type: , possible values     []
     */
    static constexpr std::string_view kDownmix = "downmix";

} // namespace truehd
namespace tta {
    /**
     * @brief Set decoding password
     *
     * Type: rational, possible values     []
     */
    static constexpr std::string_view kPassword = "password";

} // namespace tta
namespace g722 {
    /**
     * @brief Bits per G722 codeword
     *
     * Type: int64, possible values     [6.0, 8.0]
     */
    static constexpr std::string_view kBitsPerCodeword = "bits_per_codeword";

} // namespace g722
namespace libilbc {
    /**
     * @brief Enhance the decoded audio (adds delay)
     *
     * Type: int64, possible values     [0.0, 1.0]
     */
    static constexpr std::string_view kEnhance = "enhance";

} // namespace libilbc
namespace libopus {
    /**
     * @brief Apply intensity stereo phase inversion
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kApplyPhaseInv = "apply_phase_inv";

} // namespace libopus
///@}
} // namespace xsdk::av_opt::a_decoder
