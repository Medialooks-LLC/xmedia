#pragma once

#include "media_objects_interfaces.h"
#include "media_props_interfaces.h"

// xnode
#include "xbase.h"
#include "xnode.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace xsdk {

/**
 * @brief The ILink class represents a object used for pass data optionally with worker thread and buffers.
 */
class ILink: public IObject {

public:
    USING_PTRS(ILink)

    enum class OverflowBehavior { kReject, kRemoveOldest, kReplaceNewest };
    struct Props {
        std::optional<size_t>           min_deq_size;
        std::optional<size_t>           max_deq_size;
        std::optional<uint32_t>         wait_for_free_msec;
        std::optional<OverflowBehavior> overflow_behavior;
    };

    static constexpr size_t           kMinDeqSizeDefault      = 0;
    static constexpr size_t           kMaxDeqSizeDefault      = 16;
    static constexpr uint32_t         kWaitForFreeMsecDefault = std::numeric_limits<uint32_t>::max();
    static constexpr OverflowBehavior kOverflowDefault        = OverflowBehavior::kReject;

    /**
     * @brief OnData callback result, 'repeat_at_time' returned to the undelying scheduler
     */
    struct OnDataRes {
        // If repeat_at_time is not set -> the repeat occurs immediate if have data, or right after new data arrived.
        // If requested to repeat after specified time, the repeat occurs at specified time, even if no data in deqs
        // (with _obj == nullptr)
        std::optional<xbase::Time64> repeat_at_time;
        // If set to true, the next repeat should be with same data
        bool repeat_last_data = false;
    };

    /**
     * @brief Info structure with link information, for pass into callback
     */
    struct Info {
        xbase::IScheduler::TaskInfo task_info    = {};
        uint64_t                    link_uid     = 0;
        INode::SPtrC                link_details = nullptr;
        size_t                      buffered     = 0;
        uint64_t                    dropped_in   = 0;
        bool                        duplicated   = false;
    };

    /**
     * @brief Function signature for receive output data via callback.
     *
     * @tparam _task_info_p The task information structure
     * @tparam _obj The media from handler.
     * @tparam _dest_id Optional destination identifier.
     * @return Active deq operation via OnDataRes, std::nullopt for stop receiving data for this stream (till Flush)
     */
    using OnDataPF = std::function<std::optional<ILink::OnDataRes>(const ILink::Info*             _link_info_p,
                                                                   const IMediaObject::SPtrC&     _obj,
                                                                   const std::optional<uint64_t>& _dest_id)>;

public:
    virtual ~ILink() = default;

    // Current link properties
    // the optional<> inside returned ILink::Props always has value
    virtual const ILink::Props& LinkProps() const = 0;

    // Link details
    virtual const INode::SPtrC& LinkDetails() const = 0;

    // Information from recent cb (think about const ref ?)
    // virtual ILink::Info LinkStat() const = 0;

    // Return link state
    enum class State { kDisabled, kStopped, kRunning, kStopping, kExpired };
    virtual std::pair<ILink::State, size_t> LinkState() const = 0;

    // Return idle time (no input/output)
    virtual xbase::Time64 IdleTime() const = 0;

    // Start data-flow by link, used scheduler/worker/cb specified via factory,
    // if no scheduler, than call OnDataPF from same thread as Put() called (todo?)
    virtual bool Start() = 0;

    // Put data into link, with optional props overriden specified in constructor
    virtual xbase::XResult<size_t> Put(const IMediaObject::SPtrC&         _obj,
                                       const std::optional<uint64_t>&     _dest_id          = {},
                                       const std::optional<ILink::Props>& _overriding_props = {}) = 0;

    // Flush link data, after all deque data flushed, the cb with specified dest_id & nullptr called
    virtual size_t Flush(const std::optional<uint64_t>& _dest_id = {}) = 0;

    // Stop raise callback, optionally flush all data and/or wait till all data to be handled and all callbacks
    // finished
    virtual void Stop(bool _flush_data, bool _wait_for_finish) = 0;

    // Set link to exired state
    virtual void SetExpired(bool _flush_data, bool _wait_for_finish) = 0;

    // Make copy of link with updated props and same callback
    virtual xbase::XResult<ILink::SPtr> Clone(const ILink::Props&         _update_props     = {},
                                              const INode::SPtrC&         _update_details   = {},
                                              const xbase::IWorker::SPtr& _dedicated_worker = {}) = 0;
};

class IMediaLink: public ILink, public IMediaUnitAgent {
public:
    USING_PTRS(IMediaLink)
};

class ILinks {

public:
    static constexpr uint64_t kAnyDestsId        = -1; // Temp, have to be removed (?)
    static constexpr uint64_t kAutoDetectStreams = xbase::kInvalidUid +
                                                   1; // Make something like constexpr xbase::ServiceUid(1) ?

    USING_PTRS(ILinks)

    virtual ~ILinks() = default;

    // Add new link to specified stream uid or unspecified/pendning (detecting via IsSuitable(...))
    // Return added link uid or error if adding failed
    virtual xbase::XResult<uint64_t> LinkAdd(const uint64_t               _dest_uid,
                                             const ILink::SPtr&           _new_link,
                                             const std::optional<size_t>& _max_links_for_dest = {}) = 0;

    // Return number of link for specified dest (return LinksMaxPerDest() via pair ?)
    virtual size_t LinksCounts(const std::optional<uint64_t>& _dest_uid = {}) const = 0;

    // Get all/specified links
    virtual std::vector<ILink::SPtr> LinksGet(const std::optional<uint64_t>& _dest_uid = {}) = 0;

    virtual std::vector<ILink::SPtrC> LinksGet(const std::optional<uint64_t>& _dest_uid = {}) const = 0;

    // Get streams uid for link
    virtual std::pair<ILink::SPtr, std::vector<uint64_t>> LinkFind(
        const uint64_t                 _link_uid,
        const std::optional<uint64_t>& _dest_uid = {}) const = 0;

    virtual std::vector<ILink::SPtr> LinksRemove(const std::optional<uint64_t>& _dest_uid,
                                                 bool                           _all_except_dest_uid) = 0;

    virtual std::pair<ILink::SPtr, std::vector<uint64_t>> LinkRemove(const uint64_t                 _link_uid,
                                                                     const std::optional<uint64_t>& _dest_uid = {}) = 0;
};

// Temp place - move strcutures to link_functions.h, CreateLinkMedia to internal ?
namespace xlink {

    ILink::Props LoadProps(const INode::SPtrC& _props_node);

    INode::SPtr StoreProps(const ILink::Props& _link_props, const INode::SPtr&& _append_to = {});

    bool IsSuitable(const INode::SPtrC&      _filter_node,
                    const MediaUnitsVec&     _current_props,
                    const size_t             _updated_idx,
                    const IMediaUnit::SPtrC& _new_props);

    xbase::Uid OriginalLinkUid(const ILink* _link);

    bool IsCloned(const ILink* _first_p, const ILink* _second_p);

} // namespace xlink

} // namespace xsdk
