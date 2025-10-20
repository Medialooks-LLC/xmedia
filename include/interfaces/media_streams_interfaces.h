#pragma once

#include "xbase.h"
#include "xnode.h"

#include "media_objects_interfaces.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

namespace xsdk {

class IMediaStream: public IObject {
public:
    enum class Access { kPeek = 0, kRead = 1, kWrite = 2, kWriteAndRead = kWrite | kRead };

    struct Props {
        xbase::Uid                   stream_uid  = xbase::kInvalidUid;
        XObjectType                  stream_type = XObjectType::None;
        std::optional<size_t>        max_count;
        std::optional<xbase::Time64> max_duration;
        Access                       stream_access = Access::kPeek;
    };

    struct Item {
        USING_PTRS(Item)

        IMediaObject::SPtrC media_object;
        xbase::Time64       put_utc_time          = time64::kNoVal; // 2Think: Clock time ?
        xbase::Time64       timestamp             = time64::kNoVal;
        uint64_t            index_common          = 0; // Starting from 1
        uint64_t            index_stream          = 0; // Starting from 1
        uint64_t            prev_key_index_stream = 0;
    };

    using ItemsVec = std::vector<IMediaStream::Item>;

    struct Status {
        IMediaStream::Item::SPtrC head_item; // If units_count is zero -> recent or initialized unit
        IMediaStream::Item::SPtrC tail_item; // If units_count is zero -> recent or initialized unit
        size_t                    items_count    = 0;
        xbase::Time64             items_duration = 0;
    };

    enum class ReadFlags {
        kFromAnyPoint,
        kFromKeyPoint,
        kTillNextKey,
        kTakeDecodeSegment,
        kTakeNextKey,
        kTakeNewOnly, // Take only new items received after peek/read call, _wait_msec should be used in that case
        kGenEOSFrames
    };

    enum class PutFlag {
        kAuto, // For live streams pop oldest, for file streams reject
        kRejectIfFull = 1,
        kPopOldest,
        kFlush,
        kFlushForNewSegment,
        kInitNewStream,
        kFlushAndInit,
        kMakeMonotonicTime = 0x100
    };

    // 2Think: Use lambda instead
    class IObserver {
    public:
        USING_PTRS(IObserver)

        enum class ReturnType { kNormal, kUnsubscribe };

        virtual ReturnType OnItemRequested(const IMediaStream::Item*          _recent_item_p,
                                           const std::optional<xbase::Time64> _from_timestamp = {})           = 0;
        virtual ReturnType OnItemAdded(const IMediaStream::Item* _item_p, const size_t _stream_items_count)   = 0;
        virtual ReturnType OnItemRemoved(const IMediaStream::Item* _item_p, const size_t _stream_items_count) = 0;
    };

public:
    USING_PTRS(IMediaStream)

    virtual ~IMediaStream() = default;

    virtual const IMediaStream::Props&          StreamProps() const  = 0;
    virtual IMediaStream::Status                StreamStatus() const = 0;
    virtual std::optional<IMediaStream::Status> ParentStatus() const = 0;

    virtual xbase::XResult<IMediaStream::Item::SPtrC> PeekItem(const xbase::Time64           _from_timestamp,
                                                               const ReadFlags               _flags,
                                                               const std::optional<uint32_t> _wait_msec = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekItems(const xbase::Time64           _from_timestamp,
                                                             const size_t                  _count,
                                                             const ReadFlags               _flags,
                                                             const std::optional<uint32_t> _wait_msec = {},
                                                             IMediaStream::ItemsVec&&      _add_to    = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekNextItems(const uint64_t                _after_index,
                                                                 const size_t                  _count,
                                                                 const ReadFlags               _flags,
                                                                 const std::optional<uint32_t> _wait_msec = {},
                                                                 IMediaStream::ItemsVec&&      _add_to = {}) const = 0;

    // For remove -> release pointer or return IMediaStream::IObserver::ReturnType::kUnsubscribe
    virtual size_t AddObserver(IMediaStream::IObserver::WPtr&& _observer_p) const = 0;

    // Non-Const methods

    // Read access

    // Does need ?
    // - Could be replaced via Peek + Remove
    // - On other side - could be used for seeking
    virtual xbase::XResult<IMediaStream::ItemsVec> ReadItems(const std::optional<xbase::Time64> _from_timestamp,
                                                             const size_t                       _count,
                                                             const ReadFlags                    _flags,
                                                             const std::optional<uint32_t>      _wait_msec = {},
                                                             IMediaStream::ItemsVec&&           _add_to    = {}) = 0;

    virtual size_t RemoveItems(const std::optional<xbase::Time64> _keep_after_timestamp = {}) = 0;

    // For notify parent and free buffers, after this call all methods would be failed
    virtual void StreamClose() = 0;
};

class IMediaStreamWrite: public IMediaStream {
public:
    USING_PTRS(IMediaStreamWrite)

public:
    // Write Access
    virtual xbase::XResult<std::pair<IMediaStream::Item::SPtrC, size_t>> PutMediaObject(
        const IMediaObject::SPtrC&         _object,
        const PutFlag                      _put_flags      = PutFlag::kAuto,
        const std::optional<uint32_t>      _wait_msec      = {},
        const std::optional<xbase::Time64> _item_timestamp = {}) = 0;

    virtual xbase::XResult<IMediaStream::SPtr> CreateReadOrPeekStream(const IMediaStream::Access _access_type) = 0;
};

class IMediaStreams: public IObject {
public:
    class IObserver: public IMediaStream::IObserver {
    public:
        USING_PTRS(IObserver)

        // Return true for subscribe to stream events, false for do not subscribe and std::nullopt for unsubscribe from
        // all events (e.g. callback expired)
        virtual std::optional<bool> OnStreamAdded(const IMediaStream* _stream_p, const size_t _streams_count)   = 0;
        virtual ReturnType          OnStreamRemoved(const IMediaStream* _stream_p, const size_t _streams_count) = 0;
    };

public:
    USING_PTRS(IMediaStreams)

    virtual ~IMediaStreams() = default;

    virtual std::vector<std::pair<IMediaStream::Props, IMediaStream::Status>> StreamsPropsAndStatus(
        const std::optional<XObjectType> _streams_types = {}) const = 0;

    virtual std::vector<IMediaStream::SPtrC> StreamsGet(const std::optional<XObjectType> _streams_types = {}) const = 0;

    // For remove -> release pointer or return IMediaStream::IObserver::ReturnType::kUnsubscriben (?)
    virtual size_t StreamsObserverAdd(IMediaStreams::IObserver::WPtr&& _observer_p,
                                      const std::set<xbase::Uid>&      _subscribe_to_streams = {}) const = 0;

    // Not const methods

    // Read access below

    virtual std::vector<IMediaStream::SPtr> StreamsGet(const std::optional<XObjectType> _streams_types = {}) = 0;

    // Write access below

    // virtual std::vector<IMediaStreamWrite::SPtr> StreamsWriteGet(const std::optional<XObjectType> _streams_types =
    // {}) = 0;

    //// Create stream with specified head/tail and stream_uid
    // virtual xbase::XResult<IMediaStreamWrite::SPtr> StreamCreate(
    //     const IMediaUnit::SPtrC&           _init_unit,
    //     const std::optional<size_t>        _max_count    = {},
    //     const std::optional<xbase::Time64> _max_duration = {}) = 0;

    //// Create 'blank' streams what will be specified at first new stream unit
    // virtual xbase::XResult<IMediaStreamWrite::SPtr> StreamCreateBlank(
    //     const std::optional<XObjectType>   _stream_type  = {},
    //     const std::optional<size_t>        _max_count    = {},
    //     const std::optional<xbase::Time64> _max_duration = {}) = 0;

    // virtual std::error_code StreamAdd(IMediaStream::SPtr&& _added_stream) = 0;

    // virtual std::vector<IMediaStream::SPtr> StreamsRemove(const std::vector<xbase::Uid> _removed_streams_uids = {}) =
    // 0;

    // virtual std::vector<IMediaStream::SPtr> StreamsClear() = 0;
};

class IMediaStreamsWrite: public IMediaStreams {

public:
    USING_PTRS(IMediaStreamsWrite)

    // Write access below

    virtual std::vector<IMediaStreamWrite::SPtr> StreamsWriteGet(
        const std::optional<XObjectType> _streams_types = {}) = 0;

    // Create stream with specified head/tail and stream_uid
    virtual xbase::XResult<IMediaStreamWrite::SPtr> StreamCreate(
        const IMediaObject::SPtrC&         _init_unit,
        const std::optional<size_t>        _max_count    = {},
        const std::optional<xbase::Time64> _max_duration = {}) = 0;

    // Create 'blank' streams what should be specified at first new stream unit
    virtual xbase::XResult<IMediaStreamWrite::SPtr> StreamCreateBlank(
        const std::optional<XObjectType>   _stream_type  = {},
        const std::optional<size_t>        _max_count    = {},
        const std::optional<xbase::Time64> _max_duration = {}) = 0;

    virtual std::error_code StreamAdd(IMediaStream::SPtr&& _added_stream) = 0;

    virtual std::vector<IMediaStream::SPtr> StreamsRemove(const std::vector<xbase::Uid> _removed_streams_uids = {}) = 0;

    virtual std::vector<IMediaStream::SPtr> StreamsClear() = 0;
};

// 2Think: Do not make inheritance, but something like virtual IMediaStreams* Streams() method ?
class IMediaStreamsBunch: public IMediaStreams {

public:
    USING_PTRS(IMediaStreamsBunch)

    virtual ~IMediaStreamsBunch() = default;

    virtual const IMediaStream::Props& BunchProps() const = 0;

    enum class ItemsCountType {
        kTotalItemsCount,
        kCountForOneStream, // One stream has at least _items_count items
        kCountForAllStream, // All streams should contains at least _items_count items
    };

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekItems(
        const xbase::Time64                        _peek_from_timestamp,
        const size_t                               _items_count,
        const IMediaStreamsBunch::ItemsCountType   _count_type,
        const IMediaStream::ReadFlags              _flags,
        const std::optional<uint32_t>              _wait_msec                 = {},
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_time_offsets = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekNextItems(
        const IMediaStream::Item*                  _after_item_p,
        const size_t                               _items_count,
        const IMediaStreamsBunch::ItemsCountType   _count_type,
        const IMediaStream::ReadFlags              _flags,
        const std::optional<uint32_t>              _wait_msec                 = {},
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_time_offsets = {}) const = 0;

    // Not const methods

    // Read access below
    virtual xbase::XResult<IMediaStream::ItemsVec> ReadItems(
        const std::optional<xbase::Time64>         _read_from_timestamp,
        const size_t                               _items_count,
        const IMediaStreamsBunch::ItemsCountType   _count_type,
        const IMediaStream::ReadFlags              _flags,
        const std::optional<uint32_t>              _wait_msec                 = {},
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_time_offsets = {}) = 0;

    virtual std::map<xbase::Uid, size_t> RemoveItems(
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_keep_times = {}) = 0;

    // For notify parent and free buffers, after this call all methods would be failed
    virtual void BunchClose() = 0;
};

class IMediaStreamsBunchWrite: public IMediaStreamsWrite {

public:
    USING_PTRS(IMediaStreamsBunchWrite)

public:
    virtual const IMediaStreamWrite::Props& WriteBunchProps() const = 0;

    // Write access below
    virtual xbase::XResult<std::pair<IMediaStream::Item::SPtrC, size_t>> PutMediaObject(
        const IMediaObject::SPtrC&         _object,
        const bool                         _create_new_stream,
        const IMediaStream::PutFlag        _put_flags      = IMediaStream::PutFlag::kRejectIfFull,
        const std::optional<uint32_t>      _wait_msec      = {},
        const std::optional<xbase::Time64> _item_timestamp = {}) = 0;

    // Called for select streams from bunch and for new bunch streams
    using IsStreamSuitablePf =
        std::function<std::optional<bool>(const IMediaStreamsBunch* _new_bunch_p, const IMediaStream* _stream_p)>;

    virtual xbase::XResult<IMediaStreamsBunch::SPtr> CreateReadOrPeekBunch(
        const IMediaStream::Access  _access_type,
        const std::set<xbase::Uid>& _selected_streams = {},
        IsStreamSuitablePf&&        _on_new_stream    = {}) = 0;
};

} // namespace xsdk