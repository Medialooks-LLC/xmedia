#pragma once

#include "../constants/constants.h"
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

namespace xsdk::xcontainer {

// TODO: Move to common helpers ?
static const std::string kTranscodeSrc = "src";
static const std::string kTranscodeDst = "dst";

// Temp, used for tests, have to be removed
xbase::XResult<IContainerScheme::SPtr> CreateTranscodeScheme(
    const std::string&            _scheme_name,
    const std::string&            _source_url,
    const std::string&            _dest_url,
    const INode::SPtrC&           _src_props               = {},
    const INode::SPtrC&           _dst_props               = {},
    const std::string&            _source_handler          = xmedia::handlers::kAvDemultiplexer,
    const std::string&            _dest_handler            = xmedia::handlers::kAvMultiplexer,
    const std::optional<bool>&    _rate_control            = {},
    const std::optional<bool>&    _reconnect_src           = {},
    const std::optional<bool>&    _reconnect_dst           = {},
    const std::optional<bool>&    _stream_buffer_for_input = {},
    const std::optional<XFormat>& _conversion_format       = {});

XENUM_CLASS(SchemeFlags,
            kBasic                = 0x00,
            kSourceContainer      = 0x01,
            kDestContainer        = 0x02,
            kForceRateControl     = 0x04,
            kNoRateControl        = 0x08,
            kForceReconnect       = 0x10,
            kNoReconnect          = 0x20,
            kStreamBufferForInput = 0x40)

xbase::XResult<IContainerScheme::SPtr> CreateTranscodeSchemeEx(const SchemeFlags                 _scheme_flags,
                                                               const std::optional<std::string>& _source_url    = {},
                                                               const std::optional<std::string>& _dest_url      = {},
                                                               const INode::SPtrC&               _source_props  = {},
                                                               const INode::SPtrC&               _dest_props    = {},
                                                               const std::optional<XFormat>& _conversion_format = {},
                                                               const std::optional<std::string>& _scheme_name   = {});

enum class StartType { kDoNotStart, kSync, kAsync };
std::pair<IActiveContainer::SPtr, std::future<std::error_code>> CreateAndStartContainer(
    const IContainerScheme::SPtrC&  _container_scheme,
    const INode::SPtrC&             _init_props,
    const StartType                 _start_type,
    const IMediaNotification::SPtr& _media_notification);

std::pair<IActiveContainer::SPtr, std::future<std::error_code>> CreateAndStartContainer(
    const IContainerScheme::SPtrC& _container_scheme,
    const INode::SPtrC&            _init_props,
    const StartType                _start_type,
    const IData::SPtr&             _interface_collection = nullptr);

template <typename TInterface>
xbase::XResult<std::shared_ptr<TInterface>> GetByPath(const IActiveContainer::SPtr& _container_p, XPath&& _path)
{
    if (!_container_p)
        return XError::NullPointer;

    IActiveHandler::SPtr target_handler = _container_p;
    if (!_path.Empty()) {

        target_handler = _container_p->ActiveGetByPath(std::move(_path));
        if (!target_handler)
            return XError::NotFound;
    }

    auto query_ptr = xobject::PtrQuery<TInterface>(target_handler.get());
    if (!query_ptr)
        return XError::InvalidCast;

    return query_ptr;
}

} // namespace xsdk::xcontainer
