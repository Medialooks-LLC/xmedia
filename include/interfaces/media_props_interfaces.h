#pragma once

#include "media_objects_interfaces.h"

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

class IMediaUnitAgent {
public:
    USING_PTRS(IMediaUnitAgent)

    virtual ~IMediaUnitAgent() = default;

    enum class SameUidAction { kDoNotCheck, kReplace, kReject };
    enum class ModificationType { kReplaceCurrent, kAddUpdateCurrent, kRemoveFromCurrent };

    virtual bool IsExclusive() const = 0;

    // Return supported props
    virtual MediaUnitsVec CheckMediaUnits(MediaUnitsVec&& _media_props) const = 0;

    // Return: {added, removed}
    // WARN !!! _media_props after call contain non-taken/non-founded props (2Think)
    virtual std::pair<MediaUnitsVec, MediaUnitsVec> SetMediaUnits(MediaUnitsVec&         _media_props,
                                                                  const ModificationType _mod_type) = 0;

    enum class PropsType { kTotal, kAvailable, kNotSubscribed, kSubscribed };
    virtual MediaUnitsVec GetMediaUnits(const PropsType     _props_type,
                                        MediaUnitsVec&&     _append_to       = {},
                                        const SameUidAction _same_uid_action = SameUidAction::kReject) const = 0;

    // Return: {subscribed, unsubscribed}
    // WARN !!! _subscribe_to after call contain non-taken/non-founded props (2Think)
    virtual std::pair<MediaUnitsVec, MediaUnitsVec> SubscribeToMediaUnits(
        MediaUnitsVec&                _subscribe_to,
        const ModificationType        _mod_type,
        const std::optional<uint64_t> _subscriber_uid = {}) = 0;

    virtual MediaUnitsVec GetSubscribedUnits(MediaUnitsVec&&               _append_to       = {},
                                             const SameUidAction           _same_uid_action = SameUidAction::kReject,
                                             const std::optional<uint64_t> _subscriber_uid  = {}) const = 0;

    virtual std::pair<bool, IMediaUnit::SPtrC> IsSubscribed(
        const uint64_t                _stream_uid,
        const std::optional<uint64_t> _subscriber_uid = {}) const = 0;
};

class IMediaUnitClient {
public:
    USING_PTRS(IMediaUnitClient)

    virtual ~IMediaUnitClient() = default;

    virtual IMediaUnitAgent::SPtr SetHost(const IMediaUnitAgent::SPtr& _host_agent) = 0;
};

namespace xmedia {

    /**
     * @brief IsSuitableMediaPF function result
     **/
    enum class IsSuitableRes {
        kRejected = 1,
        kAccepted = 2,
        // Props below looks to be complcated and have to be removed
        kFull          = 4, // Props Container is full (no more new media props accepted)
        kFull_Rejected = kFull | kRejected,
        kFull_Accepted = kFull | kAccepted
    };

    /**
     * @brief Function signature for select media for link
     * @tparam _current_props The current props array.
     * @tparam _update_idx if the index greater than _current_props.size() the _new_props is appended to the
     * _current_props vector, if not, the corresponding element in _current_props is updated by _new_props data.
     * @tparam _new_props The new props to append or update existing value (depends from _update_idx)
     * @return IsSuitableRes code
     */
    using IsSuitableMediaPF = std::function<IsSuitableRes(const MediaUnitsVec&     _current_props,
                                                          const size_t             _updated_idx,
                                                          const IMediaUnit::SPtrC& _new_props)>;

    IMediaUnitAgent::UPtr CreateMediaUnitAgent(const xmedia::IsSuitableMediaPF& _is_suitable_pf,
                                               const bool                       _is_exclusive,
                                               const std::string_view           _name);

} // namespace xmedia

XENUM_OPS32(xmedia::IsSuitableRes)

} // namespace xsdk
