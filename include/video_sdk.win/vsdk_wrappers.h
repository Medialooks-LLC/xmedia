#pragma once

#include <atlbase.h>
#include "sdk_headers/MFormats.h"
#include "sdk_headers/MPlatform.h"

#include "../xmedia_interfaces.h"

namespace xsdk::v_sdk {

static constexpr std::string_view kSeiUser = "sei_user";

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
    XTime  Convert(const M_TIME& _mtime, const XSegment& _segment = {});
    M_TIME Convert(const XTime& _mtime);
} // namespace time

namespace mframe {
    std::vector<std::string_view> PixelFormatsList();

    CComPtr<IMFFrame> MakeCPU(IMFFrame* const _mf_frame_p);

    std::pair<std::vector<XFrameSideData>, INode::SPtr> ExtractSideData(IMFFrame* const _mf_frame_p);

    // return {string, binary (include integer)} counters
    std::pair<size_t, size_t> CopySideData(const IMediaFrame* _source_p,
                                           IMFFrame* const    _dest_p,
                                           const bool         _set_integer_as_data = false);

    xbase::XResult<IMediaFrame::SPtr> ExtractVideo(IMFFrame* const          _mf_frame_p,
                                                   const IMediaUnit::SPtrC& _base_props,
                                                   const bool               _copy_side_data);

    xbase::XResult<IMediaFrame::SPtr> ExtractAudio(IMFFrame* const          _mf_frame_p,
                                                   const IMediaUnit::SPtrC& _base_props,
                                                   const bool               _copy_side_data);

    xbase::XResult<CComPtr<IMFFrame>> MakeFrame(const IMediaFrame::SPtrC& _media_frame,
                                                const bool                _use_reference  = false,
                                                IMFFactory* const         _mf_factory_p   = nullptr,
                                                const bool                _copy_side_data = false);
} // namespace mframe
} // namespace xsdk::v_sdk
