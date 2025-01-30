#pragma once

#include <string_view>

namespace xsdk::av_opt::s_encoder {
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
} // namespace flags

/**
 * @brief flags2 option
 *
 * Type: int, possible values []
 */
static constexpr std::string_view kFlags2 = "flags2";

/**
 * @brief Maximum number of pixels
 *
 * Type: double, possible values [0.0, 2147483647.0]
 */
static constexpr std::string_view kMaxPixels = "max_pixels";

/**
 * @name Options for subtitle encoders
This group contains a set of static string constants used to define various options of subtitle encoders.
 */
///@{
namespace dvdsub {
    /**
     * @brief Make number of rows even (workaround for some players)
     *
     * Type: chlayout, possible values     []
     */
    static constexpr std::string_view kEvenRowsFix = "even_rows_fix";

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

} // namespace mov_text
///@}
} // namespace xsdk::av_opt::s_encoder
