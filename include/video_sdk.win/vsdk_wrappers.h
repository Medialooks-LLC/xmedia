#pragma once

#include <atlbase.h>
#include "sdk_headers/MFormats.h"
#include "sdk_headers/MPlatform.h"

#include "../xmedia_interfaces.h"

namespace xsdk::v_sdk {

namespace video {
    // {fcc, planes}
    std::pair<eMFCC, size_t> FromPixelFormat(std::string_view _pixel_format);
    // {name, planes, swap_uv}
    std::tuple<std::string_view, size_t, bool> ToPixelFormat(eMFCC _fcc);

    // {video format, planes, swap_uv}
    std::tuple<XFormatV, size_t, bool> ToFormat(const M_VID_PROPS& _vid_props);
    // {video props, planes, swap_uv}
    std::tuple<M_VID_PROPS, size_t, bool> FromFormat(const XFormatV* _format_v_p);
} // namespace video

namespace audio {
    std::string_view ToSampleFormat(int _nBits);
    // {bits, planar}
    std::pair<int, bool> FromSampleFormat(const std::string_view _sample_format);

    XFormatA ToFormat(const M_AUD_PROPS& _aud_props);
    // {props, planar}
    std::pair<M_AUD_PROPS, bool> FromFormat(const XFormatA* _format_a_p);
} // namespace audio

namespace time {
    XTime  Convert(const M_TIME& _mtime);
    M_TIME Convert(const XTime& _mtime);
} // namespace time

namespace mframe {
    std::vector<std::string_view> PixelFormatsList();

    CComPtr<IMFFrame> MakeCPU(IMFFrame* _mf_frame_p);

    xbase::XResult<IMediaFrame::SPtr> ExtractVideo(IMFFrame* _mf_frame_p, const IMediaUnit::SPtrC& _base_props);

    xbase::XResult<IMediaFrame::SPtr> ExtractAudio(IMFFrame* _mf_frame_p, const IMediaUnit::SPtrC& _base_props);

    xbase::XResult<CComPtr<IMFFrame>> MakeFrame(const IMediaFrame::SPtrC& _media_frame,
                                                bool                      _use_reference = false,
                                                IMFFactory*               _mf_factory_p  = nullptr);
} // namespace mframe
} // namespace xsdk::v_sdk
