#pragma once

// xmedia
#include "media_handler_interfaces.h"

// xnode
#include "xbase.h"
#include "xnode.h"

#include <functional>

namespace xsdk {

// Expect to be exteneded to other events types
XENUM_CLASS(MediaEvent,
            kStateChanged = 1,
            kEOFReached,
            kMediaGetError,
            kConnectionBroken,
            kRecreationStart,
            kRecreationFailed,
            kRecreationSucceeded,
            kMediaUnitChanged)

class IMediaNotification {
public:
    USING_PTRS(IMediaNotification)

    virtual ~IMediaNotification() = default;

    // 2Think: Make const ? Rename to OnMediaEvent(...) ?
    virtual void EventNotify(const IMediaHandler::SPtrC& _event_source,
                             const MediaEvent            _event_type,
                             const INode::SPtrC&         _event_details) = 0;
};

namespace xevents {
    // If return false, forward event to next handler interface
    using OnEventPF = std::function<
        bool(const IMediaHandler::SPtrC& event_source, const MediaEvent event_type, const INode::SPtrC& event_details)>;

    IMediaNotification::SPtr CreateEventsHandler(OnEventPF&&                     _on_event,
                                                 const IMediaNotification::SPtr& _next_interface = {});
} // namespace xevents

} // namespace xsdk
