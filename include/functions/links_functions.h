#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <variant>
#include <vector>

namespace xsdk::xlink {

// TODO: Think about factory for objects creation like below ?
//
// Create new link, if _on_data_pf is empty, the disabled link created
// todo: Support direct links (w/o scheduler)
xbase::XResult<ILink::SPtr> CreateLink(const ILink::OnDataPF&         _on_data_pf,
                                       const xbase::IScheduler::SPtr& _link_scheduler,
                                       const INode::SPtrC&            _link_details     = {},
                                       const ILink::Props&            _default_props    = {},
                                       const xbase::IWorker::SPtr&    _dedicated_worker = {});

// Create new link to specified handler, if dest handler return XError::Repeat, next call repeated after
// kRepeatMediaPutMsec msec If dest handler is released, link become expired
static constexpr size_t     kRepeatMediaPutMsec = 10;
xbase::XResult<ILink::SPtr> CreateLinkToHandler(const IMediaHandler::SPtr&     _dest_handler,
                                                const xbase::IScheduler::SPtr& _link_scheduler,
                                                const INode::SPtrC&            _link_details     = {},
                                                const ILink::Props&            _default_props    = {},
                                                const xbase::IWorker::SPtr&    _dedicated_worker = {});

std::pair<MediaUnitsVec, MediaUnitsVec> SetMediaUnit(IMediaUnitAgent* _props_agent_p,
                                                     MediaUnitsVec&&  _media_props,
                                                     bool             _reset_props);

std::pair<MediaUnitsVec, MediaUnitsVec> SetMediaUnit(IObject*        _media_link_p,
                                                     MediaUnitsVec&& _media_props,
                                                     bool            _reset_props);

MediaUnitsVec GetMediaUnit(IObject*                         _media_link_p,
                           const IMediaUnitAgent::PropsType _props_type,
                           MediaUnitsVec&&                  _append_to = {});

size_t FindMediaUnit(const MediaUnitsVec&           _props_info_vec,
                     const std::optional<uint64_t>& _stream_uid,
                     const size_t                   _from_idx = 0);

IMediaUnit::SPtrC ExtractMediaUnit(MediaUnitsVec&                 _props_info_vec,
                                   const std::optional<uint64_t>& _stream_uid,
                                   const size_t                   _from_idx = 0);

xbase::XResult<IMediaLink::SPtr> CreateMedialinkEx(const ILink::OnDataPF&           _on_data_pf,
                                                   const xbase::IScheduler::SPtr&   _link_scheduler,
                                                   const xmedia::IsSuitableMediaPF& _is_suitable_pf   = {},
                                                   const INode::SPtrC&              _link_details     = {},
                                                   const ILink::Props&              _default_props    = {},
                                                   const xbase::IWorker::SPtr&      _dedicated_worker = {});

xbase::XResult<ILink::SPtr> CreateMultiLink(const INode::SPtrC&                             _link_details,
                                            const ILink::Props&                             _default_props = {},
                                            std::vector<std::pair<uint64_t, ILink::SPtr>>&& _links         = {});

xbase::XResult<IMediaLink::SPtr> CreateMultiMedialinkEx(const INode::SPtrC&              _link_details,
                                                        const bool                       _exclusive_links,
                                                        const xmedia::IsSuitableMediaPF& _is_suitable_pf = {},
                                                        const IMediaUnitAgent::SPtr&     _upstream_agent = {},
                                                        const ILink::Props&              _default_props  = {});

} // namespace xsdk::xlink
