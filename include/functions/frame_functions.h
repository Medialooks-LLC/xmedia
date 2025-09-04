#pragma once

#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <variant>
#include <vector>

namespace xsdk::xframe {

// 2Think: Add support for save load packets ? Somehing like:
//      xmedia::SaveToFile(std::vector<IMediaObject::SPtr>, ... )
//      std::vector<IMediaObject::SPtr> xmedia::LoadFromFile(... )

std::error_code SaveToFile(const std::vector<IMediaFrame::SPtrC>& _frames,
                           const std::string&                     _dest_path,
                           const INode::SPtrC&                    _hints         = {},
                           IMediaHandler::SPtr*                   _mux_handler_p = nullptr);

xbase::XResult<std::vector<IMediaFrame::SPtrC>> LoadFromFile(const std::string&   _src_path,
                                                             const XFormat&       _desired_format        = {},
                                                             size_t               _max_count             = 1,
                                                             const INode::SPtrC&  _demux_props_and_hints = {},
                                                             IMediaHandler::SPtr* _demux_handler_p       = nullptr);

// Audio interleaving
template <class TSample>
std::vector<uint8_t> InterleaveAudio(const std::vector<XPlaneA>& _planes_vec);

enum class AudioMofificationType { kAddFront, kRemoveFront, kAddBack, kRemoveBack };
xbase::XResult<IMediaFrame::SPtr> ModifyAudio(const IMediaFrame*          _original_frame_p,
                                              const size_t                _samples_count,
                                              const AudioMofificationType _mod_type,
                                              const std::optional<XTime>& _update_time = {});

} // namespace xsdk::xframe
