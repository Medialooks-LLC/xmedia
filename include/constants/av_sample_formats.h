#pragma once

#include <string>

namespace xsdk::av_lib::sample_fmt {
    static constexpr std::string_view kU8   = "u8";
    static constexpr std::string_view kS16  = "s16";
    static constexpr std::string_view kS32  = "s32";
    static constexpr std::string_view kFlt  = "flt";
    static constexpr std::string_view kDbl  = "dbl";
    static constexpr std::string_view kU8p  = "u8p";
    static constexpr std::string_view kS16p = "s16p";
    static constexpr std::string_view kS32p = "s32p";
    static constexpr std::string_view kFltp = "fltp";
    static constexpr std::string_view kDblp = "dblp";
    static constexpr std::string_view kS64  = "s64";
    static constexpr std::string_view kS64p = "s64p";
} // namespace xsdk::av_lib::sample_fmt
