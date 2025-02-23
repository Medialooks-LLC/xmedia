#pragma once

#include <string>

namespace xsdk::av_lib::pix_fmt {
    static constexpr std::string_view kYuv420p          = "yuv420p";
    static constexpr std::string_view kYuyv422          = "yuyv422";
    static constexpr std::string_view kRgb24            = "rgb24";
    static constexpr std::string_view kBgr24            = "bgr24";
    static constexpr std::string_view kYuv422p          = "yuv422p";
    static constexpr std::string_view kYuv444p          = "yuv444p";
    static constexpr std::string_view kYuv410p          = "yuv410p";
    static constexpr std::string_view kYuv411p          = "yuv411p";
    static constexpr std::string_view kGray             = "gray";
    static constexpr std::string_view kMonow            = "monow";
    static constexpr std::string_view kMonob            = "monob";
    static constexpr std::string_view kPal8             = "pal8";
    static constexpr std::string_view kYuvj420p         = "yuvj420p";
    static constexpr std::string_view kYuvj422p         = "yuvj422p";
    static constexpr std::string_view kYuvj444p         = "yuvj444p";
    static constexpr std::string_view kUyvy422          = "uyvy422";
    static constexpr std::string_view kUyyvyy411        = "uyyvyy411";
    static constexpr std::string_view kBgr8             = "bgr8";
    static constexpr std::string_view kBgr4             = "bgr4";
    static constexpr std::string_view kBgr4_byte        = "bgr4_byte";
    static constexpr std::string_view kRgb8             = "rgb8";
    static constexpr std::string_view kRgb4             = "rgb4";
    static constexpr std::string_view kRgb4_byte        = "rgb4_byte";
    static constexpr std::string_view kNv12             = "nv12";
    static constexpr std::string_view kNv21             = "nv21";
    static constexpr std::string_view kArgb             = "argb";
    static constexpr std::string_view kRgba             = "rgba";
    static constexpr std::string_view kAbgr             = "abgr";
    static constexpr std::string_view kBgra             = "bgra";
    static constexpr std::string_view kGray16be         = "gray16be";
    static constexpr std::string_view kGray16le         = "gray16le";
    static constexpr std::string_view kYuv440p          = "yuv440p";
    static constexpr std::string_view kYuvj440p         = "yuvj440p";
    static constexpr std::string_view kYuva420p         = "yuva420p";
    static constexpr std::string_view kRgb48be          = "rgb48be";
    static constexpr std::string_view kRgb48le          = "rgb48le";
    static constexpr std::string_view kRgb565be         = "rgb565be";
    static constexpr std::string_view kRgb565le         = "rgb565le";
    static constexpr std::string_view kRgb555be         = "rgb555be";
    static constexpr std::string_view kRgb555le         = "rgb555le";
    static constexpr std::string_view kBgr565be         = "bgr565be";
    static constexpr std::string_view kBgr565le         = "bgr565le";
    static constexpr std::string_view kBgr555be         = "bgr555be";
    static constexpr std::string_view kBgr555le         = "bgr555le";
    static constexpr std::string_view kVaapi            = "vaapi";
    static constexpr std::string_view kYuv420p16le      = "yuv420p16le";
    static constexpr std::string_view kYuv420p16be      = "yuv420p16be";
    static constexpr std::string_view kYuv422p16le      = "yuv422p16le";
    static constexpr std::string_view kYuv422p16be      = "yuv422p16be";
    static constexpr std::string_view kYuv444p16le      = "yuv444p16le";
    static constexpr std::string_view kYuv444p16be      = "yuv444p16be";
    static constexpr std::string_view kDxva2_vld        = "dxva2_vld";
    static constexpr std::string_view kRgb444le         = "rgb444le";
    static constexpr std::string_view kRgb444be         = "rgb444be";
    static constexpr std::string_view kBgr444le         = "bgr444le";
    static constexpr std::string_view kBgr444be         = "bgr444be";
    static constexpr std::string_view kYa8              = "ya8";
    static constexpr std::string_view kBgr48be          = "bgr48be";
    static constexpr std::string_view kBgr48le          = "bgr48le";
    static constexpr std::string_view kYuv420p9be       = "yuv420p9be";
    static constexpr std::string_view kYuv420p9le       = "yuv420p9le";
    static constexpr std::string_view kYuv420p10be      = "yuv420p10be";
    static constexpr std::string_view kYuv420p10le      = "yuv420p10le";
    static constexpr std::string_view kYuv422p10be      = "yuv422p10be";
    static constexpr std::string_view kYuv422p10le      = "yuv422p10le";
    static constexpr std::string_view kYuv444p9be       = "yuv444p9be";
    static constexpr std::string_view kYuv444p9le       = "yuv444p9le";
    static constexpr std::string_view kYuv444p10be      = "yuv444p10be";
    static constexpr std::string_view kYuv444p10le      = "yuv444p10le";
    static constexpr std::string_view kYuv422p9be       = "yuv422p9be";
    static constexpr std::string_view kYuv422p9le       = "yuv422p9le";
    static constexpr std::string_view kGbrp             = "gbrp";
    static constexpr std::string_view kGbrp9be          = "gbrp9be";
    static constexpr std::string_view kGbrp9le          = "gbrp9le";
    static constexpr std::string_view kGbrp10be         = "gbrp10be";
    static constexpr std::string_view kGbrp10le         = "gbrp10le";
    static constexpr std::string_view kGbrp16be         = "gbrp16be";
    static constexpr std::string_view kGbrp16le         = "gbrp16le";
    static constexpr std::string_view kYuva422p         = "yuva422p";
    static constexpr std::string_view kYuva444p         = "yuva444p";
    static constexpr std::string_view kYuva420p9be      = "yuva420p9be";
    static constexpr std::string_view kYuva420p9le      = "yuva420p9le";
    static constexpr std::string_view kYuva422p9be      = "yuva422p9be";
    static constexpr std::string_view kYuva422p9le      = "yuva422p9le";
    static constexpr std::string_view kYuva444p9be      = "yuva444p9be";
    static constexpr std::string_view kYuva444p9le      = "yuva444p9le";
    static constexpr std::string_view kYuva420p10be     = "yuva420p10be";
    static constexpr std::string_view kYuva420p10le     = "yuva420p10le";
    static constexpr std::string_view kYuva422p10be     = "yuva422p10be";
    static constexpr std::string_view kYuva422p10le     = "yuva422p10le";
    static constexpr std::string_view kYuva444p10be     = "yuva444p10be";
    static constexpr std::string_view kYuva444p10le     = "yuva444p10le";
    static constexpr std::string_view kYuva420p16be     = "yuva420p16be";
    static constexpr std::string_view kYuva420p16le     = "yuva420p16le";
    static constexpr std::string_view kYuva422p16be     = "yuva422p16be";
    static constexpr std::string_view kYuva422p16le     = "yuva422p16le";
    static constexpr std::string_view kYuva444p16be     = "yuva444p16be";
    static constexpr std::string_view kYuva444p16le     = "yuva444p16le";
    static constexpr std::string_view kVdpau            = "vdpau";
    static constexpr std::string_view kXyz12le          = "xyz12le";
    static constexpr std::string_view kXyz12be          = "xyz12be";
    static constexpr std::string_view kNv16             = "nv16";
    static constexpr std::string_view kNv20le           = "nv20le";
    static constexpr std::string_view kNv20be           = "nv20be";
    static constexpr std::string_view kRgba64be         = "rgba64be";
    static constexpr std::string_view kRgba64le         = "rgba64le";
    static constexpr std::string_view kBgra64be         = "bgra64be";
    static constexpr std::string_view kBgra64le         = "bgra64le";
    static constexpr std::string_view kYvyu422          = "yvyu422";
    static constexpr std::string_view kYa16be           = "ya16be";
    static constexpr std::string_view kYa16le           = "ya16le";
    static constexpr std::string_view kGbrap            = "gbrap";
    static constexpr std::string_view kGbrap16be        = "gbrap16be";
    static constexpr std::string_view kGbrap16le        = "gbrap16le";
    static constexpr std::string_view kQsv              = "qsv";
    static constexpr std::string_view kMmal             = "mmal";
    static constexpr std::string_view kD3d11va_vld      = "d3d11va_vld";
    static constexpr std::string_view kCuda             = "cuda";
    static constexpr std::string_view k0rgb             = "0rgb";
    static constexpr std::string_view kRgb0             = "rgb0";
    static constexpr std::string_view k0bgr             = "0bgr";
    static constexpr std::string_view kBgr0             = "bgr0";
    static constexpr std::string_view kYuv420p12be      = "yuv420p12be";
    static constexpr std::string_view kYuv420p12le      = "yuv420p12le";
    static constexpr std::string_view kYuv420p14be      = "yuv420p14be";
    static constexpr std::string_view kYuv420p14le      = "yuv420p14le";
    static constexpr std::string_view kYuv422p12be      = "yuv422p12be";
    static constexpr std::string_view kYuv422p12le      = "yuv422p12le";
    static constexpr std::string_view kYuv422p14be      = "yuv422p14be";
    static constexpr std::string_view kYuv422p14le      = "yuv422p14le";
    static constexpr std::string_view kYuv444p12be      = "yuv444p12be";
    static constexpr std::string_view kYuv444p12le      = "yuv444p12le";
    static constexpr std::string_view kYuv444p14be      = "yuv444p14be";
    static constexpr std::string_view kYuv444p14le      = "yuv444p14le";
    static constexpr std::string_view kGbrp12be         = "gbrp12be";
    static constexpr std::string_view kGbrp12le         = "gbrp12le";
    static constexpr std::string_view kGbrp14be         = "gbrp14be";
    static constexpr std::string_view kGbrp14le         = "gbrp14le";
    static constexpr std::string_view kYuvj411p         = "yuvj411p";
    static constexpr std::string_view kBayer_bggr8      = "bayer_bggr8";
    static constexpr std::string_view kBayer_rggb8      = "bayer_rggb8";
    static constexpr std::string_view kBayer_gbrg8      = "bayer_gbrg8";
    static constexpr std::string_view kBayer_grbg8      = "bayer_grbg8";
    static constexpr std::string_view kBayer_bggr16le   = "bayer_bggr16le";
    static constexpr std::string_view kBayer_bggr16be   = "bayer_bggr16be";
    static constexpr std::string_view kBayer_rggb16le   = "bayer_rggb16le";
    static constexpr std::string_view kBayer_rggb16be   = "bayer_rggb16be";
    static constexpr std::string_view kBayer_gbrg16le   = "bayer_gbrg16le";
    static constexpr std::string_view kBayer_gbrg16be   = "bayer_gbrg16be";
    static constexpr std::string_view kBayer_grbg16le   = "bayer_grbg16le";
    static constexpr std::string_view kBayer_grbg16be   = "bayer_grbg16be";
    static constexpr std::string_view kXvmc             = "xvmc";
    static constexpr std::string_view kYuv440p10le      = "yuv440p10le";
    static constexpr std::string_view kYuv440p10be      = "yuv440p10be";
    static constexpr std::string_view kYuv440p12le      = "yuv440p12le";
    static constexpr std::string_view kYuv440p12be      = "yuv440p12be";
    static constexpr std::string_view kAyuv64le         = "ayuv64le";
    static constexpr std::string_view kAyuv64be         = "ayuv64be";
    static constexpr std::string_view kVideotoolbox_vld = "videotoolbox_vld";
    static constexpr std::string_view kP010le           = "p010le";
    static constexpr std::string_view kP010be           = "p010be";
    static constexpr std::string_view kGbrap12be        = "gbrap12be";
    static constexpr std::string_view kGbrap12le        = "gbrap12le";
    static constexpr std::string_view kGbrap10be        = "gbrap10be";
    static constexpr std::string_view kGbrap10le        = "gbrap10le";
    static constexpr std::string_view kMediacodec       = "mediacodec";
    static constexpr std::string_view kGray12be         = "gray12be";
    static constexpr std::string_view kGray12le         = "gray12le";
    static constexpr std::string_view kGray10be         = "gray10be";
    static constexpr std::string_view kGray10le         = "gray10le";
    static constexpr std::string_view kP016le           = "p016le";
    static constexpr std::string_view kP016be           = "p016be";
    static constexpr std::string_view kD3d11            = "d3d11";
    static constexpr std::string_view kGray9be          = "gray9be";
    static constexpr std::string_view kGray9le          = "gray9le";
    static constexpr std::string_view kGbrpf32be        = "gbrpf32be";
    static constexpr std::string_view kGbrpf32le        = "gbrpf32le";
    static constexpr std::string_view kGbrapf32be       = "gbrapf32be";
    static constexpr std::string_view kGbrapf32le       = "gbrapf32le";
    static constexpr std::string_view kDrm_prime        = "drm_prime";
    static constexpr std::string_view kOpencl           = "opencl";
    static constexpr std::string_view kGray14be         = "gray14be";
    static constexpr std::string_view kGray14le         = "gray14le";
    static constexpr std::string_view kGrayf32be        = "grayf32be";
    static constexpr std::string_view kGrayf32le        = "grayf32le";
    static constexpr std::string_view kYuva422p12be     = "yuva422p12be";
    static constexpr std::string_view kYuva422p12le     = "yuva422p12le";
    static constexpr std::string_view kYuva444p12be     = "yuva444p12be";
    static constexpr std::string_view kYuva444p12le     = "yuva444p12le";
    static constexpr std::string_view kNv24             = "nv24";
    static constexpr std::string_view kNv42             = "nv42";
    static constexpr std::string_view kVulkan           = "vulkan";
    static constexpr std::string_view kY210be           = "y210be";
    static constexpr std::string_view kY210le           = "y210le";
    static constexpr std::string_view kX2rgb10le        = "x2rgb10le";
    static constexpr std::string_view kX2rgb10be        = "x2rgb10be";
    static constexpr std::string_view kX2bgr10le        = "x2bgr10le";
    static constexpr std::string_view kX2bgr10be        = "x2bgr10be";
    static constexpr std::string_view kP210be           = "p210be";
    static constexpr std::string_view kP210le           = "p210le";
    static constexpr std::string_view kP410be           = "p410be";
    static constexpr std::string_view kP410le           = "p410le";
    static constexpr std::string_view kP216be           = "p216be";
    static constexpr std::string_view kP216le           = "p216le";
    static constexpr std::string_view kP416be           = "p416be";
    static constexpr std::string_view kP416le           = "p416le";
    static constexpr std::string_view kVuya             = "vuya";
    static constexpr std::string_view kRgbaf16be        = "rgbaf16be";
    static constexpr std::string_view kRgbaf16le        = "rgbaf16le";
    static constexpr std::string_view kVuyx             = "vuyx";
    static constexpr std::string_view kP012le           = "p012le";
    static constexpr std::string_view kP012be           = "p012be";
    static constexpr std::string_view kY212be           = "y212be";
    static constexpr std::string_view kY212le           = "y212le";
    static constexpr std::string_view kXv30be           = "xv30be";
    static constexpr std::string_view kXv30le           = "xv30le";
    static constexpr std::string_view kXv36be           = "xv36be";
    static constexpr std::string_view kXv36le           = "xv36le";
    static constexpr std::string_view kRgbf32be         = "rgbf32be";
    static constexpr std::string_view kRgbf32le         = "rgbf32le";
    static constexpr std::string_view kRgbaf32be        = "rgbaf32be";
    static constexpr std::string_view kRgbaf32le        = "rgbaf32le";
} // namespace xsdk::av_lib::pix_fmt
