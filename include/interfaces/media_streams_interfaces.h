#pragma once

#include "xbase.h"
#include "xnode.h"

#include "media_handler_interfaces.h" // Temp for IMediaReader
#include "media_objects_interfaces.h"

#include <functional>
#include <optional>
#include <vector>

namespace xsdk {

class IMediaStream: public IObject {
public:
    enum class Access { kPeek, kRead, kWrite }; // AccessRight ? AccessType ?

    // Rename to Specs ?
    struct Props {
        xbase::Uid                   stream_uid  = xbase::kInvalidUid;
        XObjectType                  stream_type = XObjectType::None;
        std::optional<size_t>        max_count;
        std::optional<xbase::Time64> max_duration;
        Access                       stream_access = Access::kWrite;
        // TODO(?): xbase::Time64                read_sync_offset = 0;
    };

    struct Item {
        USING_PTRS(Item)

        IMediaObject::SPtrC       media_object; // IMediaUnit ?
        xbase::Time64             stream_time  = time64::kNoVal;
        xbase::Time64             put_utc_time = time64::kNoVal; // 2Think: Clock time ?
        uint64_t                  index        = 0;              // Starting from 1
        std::optional<size_t>     key_distance;                  // std::nullopt for NOT Video streams
        std::optional<xbase::Uid> out_stream_uid;
    };

    using ItemsVec = std::vector<IMediaStream::Item::SPtrC>;

    // Stream state (better name ?)
    enum class State {
        kBlank,            // Just created
        kClosed,           // Stream is closed
        kDynamic,          // Dynamic (usual memory stream)
        kFixedFront,       // Fixed front item, back item is dynamic (usual is growing file)
        kFixedBack,        // Fixed back item (dynamic stream with EOS)
        kFixedFrontAndBack // Fixed front and back item (usual is media file),
    };

    struct Status {
        IMediaStream::Item::SPtrC front_item; // If empty -> null
        IMediaStream::Item::SPtrC next_item;  // If empty -> null
        IMediaStream::Item::SPtrC back_item;  // If empty -> recent or initialization unit
        State                     state = State::kBlank;
        // bool                      is_closed = false;
    };

    // Rename to Positions ?
    struct Indexes {
        uint64_t front_index      = 0;
        uint64_t next_read_index  = 0;
        uint64_t next_write_index = 0;
    };

    enum class ReadFlags {
        // For compressed streams
        kFromAnyPoint      = 0,
        kFromKeyPoint      = 1,
        kTillNextKey       = 2,
        kAVStreamsSlice    = 4,                            // Read at least one item from all A/V streams
        kTakeDecodeSegment = kFromKeyPoint | kTillNextKey, // From key frame to next key

        kKeyFramesOnly = 8, // TODO

        // Common (move to separate enum / params ???)
        kRemoveReadItems = 0x100, // Rename to kMoveFront ?
        kUseUtcTime      = 0x1000,

        // For cached streams
        kRequestData = 0x10000,
        kNoRequest   = 0x20000
    };

    // For next item in stream use std::monostate, uint64_t for requst by index or Time64 for timestamp
    using RequestPos = std::variant<std::monostate, uint64_t, xbase::Time64>;

    // 2Think: add requested number of items count ? (for bunch read)
    using OnItemRequested = std::function<std::error_code(const IMediaStream*           _stream_p,
                                                          const IMediaStream::ReadFlags _flags,
                                                          const RequestPos              _timestamp_index_or_next,
                                                          const std::optional<uint32_t> _wait_msec)>;

    // DRAFT
    //
    // Note: For use lambdas - add helpers and IObserver impl with lambda
    class IObserver {
    public:
        USING_PTRS(IObserver)

        virtual void OnItemAdded(const IMediaStream*       _stream_p,
                                 const IMediaStream::Item* _item_p,
                                 const size_t              _stream_items_count)
        {
        }
    };

public:
    USING_PTRS(IMediaStream)

    virtual ~IMediaStream() = default;

    virtual const IMediaStream::Props& StreamProps() const                                                     = 0;
    virtual IMediaStream::Status       StreamStatus(const std::optional<uint64_t> _min_front_index = {}) const = 0;
    virtual IMediaStream::Indexes      StreamIndexes() const                                                   = 0;
    // virtual size_t                     StreamReaders() const                                                   = 0;

    virtual xbase::XResult<IMediaStream::Item::SPtrC> PeekItemForTime(
        const xbase::Time64           _time,
        const IMediaStream::ReadFlags _flags,
        const std::optional<uint64_t> _min_front_index = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekItemsForTime(
        const xbase::Time64                _time,
        const size_t                       _max_count,
        const IMediaStream::ReadFlags      _flags,
        const std::optional<xbase::Time64> _till_timestamp  = {},
        const std::optional<uint32_t>      _wait_msec       = {},
        IMediaStream::ItemsVec&&           _add_to          = {},
        const std::optional<uint64_t>      _min_front_index = {}) const = 0;

    virtual xbase::XResult<IMediaStream::Item::SPtrC> PeekItem(
        const uint64_t                _item_index,
        const IMediaStream::ReadFlags _flags,
        const std::optional<uint64_t> _min_front_index = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekItems(
        const uint64_t                     _start_index,
        const size_t                       _max_count,
        const IMediaStream::ReadFlags      _flags,
        const std::optional<xbase::Time64> _till_timestamp  = {},
        const std::optional<uint32_t>      _wait_msec       = {},
        IMediaStream::ItemsVec&&           _add_to          = {},
        const std::optional<uint64_t>      _min_front_index = {}) const = 0;

    // Close stream
    virtual void                StreamClose()       = 0;
    virtual IMediaStream::State StreamState() const = 0;

    // 2Think: Move to separate interface, add async observers ?
    virtual bool StreamObserverAdd(IMediaStream::IObserver::WPtr&& _observer_wp, const bool _keep_reference) const = 0;
    virtual bool StreamObserverRemove(const IMediaStream::IObserver::SPtrC& _observer_p) const                     = 0;
};

XENUM_OPS32(IMediaStream::ReadFlags)

class IMediaStreamRead: public IMediaStream {

public:
    USING_PTRS(IMediaStreamRead)

    virtual xbase::XResult<IMediaStream::ItemsVec> ReadItems(const std::optional<xbase::Time64> _from_timestamp,
                                                             const size_t                       _max_count,
                                                             const IMediaStream::ReadFlags      _flags,
                                                             const std::optional<xbase::Time64> _till_timestamp = {},
                                                             const std::optional<uint32_t>      _wait_msec      = {},
                                                             IMediaStream::ItemsVec&&           _add_to         = {},
                                                             const std::optional<uint64_t> _min_front_index = {}) = 0;

    //  Set read position, return new read
    virtual IMediaStream::Indexes SetReadPosition(const uint64_t _next_read_index, const bool _remove_before_read) = 0;

    // Remove items before index, NOT INCLUDING index (?)
    // 2Think: Move to IMediaStream ?
    virtual IMediaStream::Indexes RemoveItems(const uint64_t _before_index, const bool _keep_key_frame) = 0;
};

class IMediaStreamWrite: public IMediaStream {
public:
    USING_PTRS(IMediaStreamWrite)

    enum class PutFlags {
        kRejectIfFull = 0, // Default: Reject if full

        // 1. Buffer logic (Reject if not set)
        kDropOldest = 0x01, // Pop oldest

        // 2. Overrun logic
        kOverrunBufferSize    = 0x20, // Overrun buffer size for this packet
        kOverrunSizeForOneKey = 0x40, // Overrun buffer size for keep at least one key frame

        // 3. Flush/Init
        kFlushAlways    = 0x100, // Flush stream data
        kFlushOnSegment = 0x200, // Flush for new segment
        kInitializeOnly = 0x400, // Initialize blank stream, DO NOT put unit into buffer (blank state required)

        // 4. Time modification
        kTimeCorrection = 0x1000, // Correct input time for has monotonic timestamps and do not allow time gaps

        // Ready presets
        kFlushAndInit      = kFlushAlways | kInitializeOnly, // For flush and init new stream (unit not put into buffer)
        kDefaultWithReject = kFlushOnSegment | kOverrunSizeForOneKey,              // Best options for reject mode
        kDefaultWithDrop   = kDropOldest | kFlushOnSegment | kOverrunSizeForOneKey // Best options for drop oldest mode
    };

public:
    virtual bool HasSpace(const bool _overrun_for_one_key, const std::optional<uint32_t> _wait_msec) const = 0;

    virtual xbase::XResult<std::pair<IMediaStream::Item::SPtrC, size_t>> PutMediaObject(
        const IMediaObject::SPtrC&         _object,
        const IMediaStreamWrite::PutFlags  _put_flags   = PutFlags::kRejectIfFull,
        const std::optional<uint32_t>      _wait_msec   = {},
        const std::optional<xbase::Time64> _stream_time = {}) = 0;

    // Remove items before index, NOT INCLUDING index (?)
    // 2Think: Move to IMediaStream ?
    virtual IMediaStream::Indexes RemoveItems(const uint64_t _before_index, const bool _keep_key_frame) = 0;
};

XENUM_OPS32(IMediaStreamWrite::PutFlags)

// 2Think: Better name ? This is media stream with handler on input
class IMediaStreamProcessing: public IMediaStreamWrite {

public:
    // enum class Processing { kSyncToIn, kSyncRate, kAsyncMaxSpeed, kAsyncRate };

    struct Specs {

        HandlerCategory            category = HandlerCategory::kUnknown;
        INode::SPtrC               handler_props;
        XFormat                    conversion_format;
        INode::SPtrC               conversion_props;
        std::optional<std::string> handler_type;

        // Processing processing_mode = Processing::kSyncToIn;
        //  XSegment   initial_segment;

        XValueRT public_label; // User-specific data

        // By default the program & metadata copied from original stream
        // Specify next props for update it's
        std::vector<XProgram> stream_programs_update;
        INode::SPtrC          stream_metadata_update; // Node name -> the name of stream ?

        using SPtrC = std::shared_ptr<const IMediaStreamProcessing::Specs>;
    };

public:
    USING_PTRS(IMediaStreamProcessing)

    virtual const std::vector<xbase::Uid>&       ProcesssingInputUids() const = 0;
    virtual IMediaStreamProcessing::Specs::SPtrC ProcesssingSpecs() const     = 0;
    virtual IMediaHandler::SPtrC                 ProcessingHandler() const    = 0;
};

// 2Think: Better name ?  Stream contained only part of whole media
// Used e.g. for reperesent media files as stream bunch
class IMediaStreamCache: public IMediaStreamWrite {
public:
    USING_PTRS(IMediaStreamCache)

public:
    virtual IMediaStreamWrite::SPtrC CacheStream() const                                                     = 0;
    virtual IMediaStream::Status     CachedStatus(const std::optional<uint64_t> _min_front_index = {}) const = 0;
    virtual IMediaStream::Indexes    CachedIndexes() const                                                   = 0;
};

// 2Think: Move bunch functions to separate file (?)
class IMediaStreamsBunch: public IObject {

public:
    class IObserver: public IMediaStream::IObserver {
    public:
        USING_PTRS(IObserver)

        // Return true for subscribe to stream events, false for do not subscribe
        virtual bool OnStreamAdded(const IMediaStreamsBunch* _media_streams_p, const IMediaStream* _added_stream_p)
        {
            return false;
        }

        virtual void OnStreamRemoved(const IMediaStreamsBunch* _media_streams_p, const IMediaStream* _removed_stream_p)
        {
        }
    };

    using Indexes = std::map<xbase::Uid, IMediaStream::Indexes>;

public:
    USING_PTRS(IMediaStreamsBunch)

    virtual ~IMediaStreamsBunch() = default;

    virtual size_t StreamsCount() const = 0;

    virtual std::vector<std::pair<IMediaStream::Props, IMediaStream::Status>> StreamsPropsAndStatus(
        const std::optional<XObjectType> _streams_types = {}) const = 0;

    virtual IMediaStreamsBunch::Indexes StreamsIndexes() const = 0;

    virtual std::vector<IMediaStream::SPtrC> StreamsGet(const std::optional<XObjectType> _streams_types = {}) const = 0;

    virtual IMediaStream::SPtrC StreamGet(const xbase::Uid _stream_uid) const = 0;

    virtual IMediaStream::SPtr StreamGet(const xbase::Uid _stream_uid) = 0;

    virtual std::vector<IMediaStream::SPtr> StreamsGet(const std::optional<XObjectType> _streams_types = {}) = 0;

    // TODO: Sync type (not implemented yet)
    enum class SyncType { kAlreadySync, kMinHeadTime, kMaxHeadTime, kMinTailTime, kMaxTailTime, kSpecifiedOffset };
    virtual xbase::XResult<xbase::Time64> StreamAdd(IMediaStream::SPtr&&               _added_stream,
                                                    const IMediaStreamsBunch::SyncType _sync_type,
                                                    const std::optional<xbase::Time64> _sync_offset = {}) = 0;

    // Note: Empty _streams_uids_for_remove -> remove all (2Think)
    virtual std::vector<IMediaStream::SPtr> StreamsRemove(
        const std::set<xbase::Uid>& _streams_uids_for_remove = {}) = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekStreamItems(
        const std::optional<xbase::Time64>         _peek_from_timestamp,
        const IMediaStream::ReadFlags              _flags,
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {}) const = 0;

    virtual void BunchClose() = 0;

    virtual bool IsClosed() const = 0;

    // Observers
    virtual bool BunchObserverAdd(IMediaStreamsBunch::IObserver::WPtr&& _observer_p,
                                  const bool                            _keep_reference,
                                  const std::set<xbase::Uid>&           _subscribe_to_streams = {}) const = 0;

    virtual bool BunchObserverRemove(const IMediaStreamsBunch::IObserver::SPtr& _observer_p) const = 0;

    // virtual size_t StreamsClear() = 0;
};

class IMediaStreamsBunchWrite: public IMediaStreamsBunch {

public:
    USING_PTRS(IMediaStreamsBunchWrite)

public:
    virtual const IMediaStream::Props& DefaultStreamProps() const = 0;

    // Create stream with specified head/tail and stream_uid
    virtual xbase::XResult<IMediaStreamWrite::SPtr> StreamCreate(
        const IMediaObject::SPtrC&         _init_unit,
        const std::optional<size_t>        _max_count    = {},
        const std::optional<xbase::Time64> _max_duration = {}) = 0;

    // Create 'blank' streams what should be specified at first new stream unit
    // virtual xbase::XResult<IMediaStreamWrite::SPtr> StreamCreateBlank(
    //    const std::optional<XObjectType>   _stream_type  = {},
    //    const std::optional<size_t>        _max_count    = {},
    //    const std::optional<xbase::Time64> _max_duration = {}) = 0;

    // 2Think: Use flags ?
    // Note: For missed (new) streams return true
    virtual bool HasSpace(const xbase::Uid              _stream_uid,
                          const bool                    _ignore_processed_streams,
                          const bool                    _overrun_for_one_key,
                          const std::optional<uint32_t> _wait_msec) const = 0;

    virtual xbase::XResult<std::pair<IMediaStream::Item::SPtrC, size_t>> PutMediaObject(
        const IMediaObject::SPtrC&         _object,
        const bool                         _create_new_stream,
        const IMediaStreamWrite::PutFlags  _put_flags   = IMediaStreamWrite::PutFlags::kRejectIfFull,
        const std::optional<uint32_t>      _wait_msec   = {},
        const std::optional<xbase::Time64> _stream_time = {}) = 0;

    virtual IMediaStreamsBunch::Indexes RemoveItems(const std::map<xbase::Uid, uint64_t>& _before_indexes,
                                                    const bool                            _keep_key_frame) = 0;

    // Use helpers ?
    // virtual xbase::XResult<std::vector<IMediaObject::SPtrC>> PutMediaObjects(
    //    const std::vector<IMediaObject::SPtrC>& _objects,
    //    const bool                              _create_new_streams,
    //    const IMediaStreamWrite::PutFlags             _put_flags    = IMediaStreamWrite::PutFlags::kRejectIfFull,
    //    const std::optional<uint32_t>           _wait_msec   = {},
    //    const std::optional<xbase::Time64>      _stream_time = {}) = 0;
};

class IMediaStreamsBunchRead: public IMediaStreamsBunch {
public:
    USING_PTRS(IMediaStreamsBunchRead)

    virtual ~IMediaStreamsBunchRead() = default;

    virtual xbase::XResult<IMediaStream::ItemsVec> NextReadItems(
        const bool                  _eos_for_not_ready,
        const std::set<xbase::Uid>& _stream_uids = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekItems(
        const xbase::Time64                        _peek_from_timestamp,
        const size_t                               _max_items_count,
        const IMediaStream::ReadFlags              _flags,
        const std::optional<uint32_t>              _wait_msec             = {},
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {}) const = 0;

    virtual xbase::XResult<IMediaStream::ItemsVec> PeekNextItems(
        const IMediaStream::Item*                  _after_item_p,
        const size_t                               _max_items_count,
        const IMediaStream::ReadFlags              _flags,
        const std::optional<uint32_t>              _wait_msec             = {},
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {}) const = 0;

    // 2Think:
    // virtual IMediaStreamsBunch::Positions GetPositionsForTime(
    //     const xbase::Time64                        _read_timestamp,
    //     const IMediaStream::ReadFlags          _flags,
    //     const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {}) const = 0;

    // Not const methods

    // Read access below
    virtual xbase::XResult<IMediaStream::ItemsVec> ReadItems(
        const std::optional<xbase::Time64>         _from_timestamp,
        const size_t                               _max_items_count,
        const IMediaStream::ReadFlags              _flags,
        const std::optional<xbase::Time64>         _till_timestamp        = {},
        const std::optional<uint32_t>              _wait_msec             = {},
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {}) = 0;

    virtual IMediaStreamsBunch::Indexes SetReadPositions(const std::map<xbase::Uid, uint64_t>& _next_read_indexes,
                                                         const bool                            _remove_before_read) = 0;

    virtual IMediaStreamsBunch::Indexes RemoveItems(const std::map<xbase::Uid, uint64_t>& _before_indexes,
                                                    const bool                            _keep_key_frame) = 0;
};

class IMediaStreamsBunchReader {
public:
    struct ReadRes {
        // If set to true, the next repeat should be with same data (do not move read pointers)
        // bool repeat_last_data = false;
        // If repeat_at_time is not set -> the repeat occurs immediate if have data, or right after new data arrived.
        // If requested to repeat after specified time, the repeat occurs at specified time, even if no data in deqs
        // (with _item_p == nullptr)
        std::optional<xbase::Time64> repeat_at_time;
        // For seeking
        std::optional<xbase::Time64> next_read_pos;
    };

    // Return std::nullopt for stop read
    using OnItemsReadPf = std::function<std::optional<ReadRes>(const IMediaStreamsBunchReader*    _bunch_reader_p,
                                                               const xbase::IScheduler::TaskInfo* _task_info,
                                                               const std::error_code              _error,
                                                               const IMediaStreamWrite::ItemsVec& _read_items)>;

public:
    USING_PTRS(IMediaStreamsBunchReader)

    virtual ~IMediaStreamsBunchReader() = default;

    virtual IMediaStream::ReadFlags                    ReadFlags() const               = 0;
    virtual const std::map<xbase::Uid, xbase::Time64>& ReadStreamsWithPrerolls() const = 0;
    virtual XSegment                                   ReadSegment() const             = 0;
    virtual const IMediaStreamsBunchRead*              ReadBunch() const               = 0;
    // After creation have to call ReadForceNext() once for start reading
    virtual std::error_code ReadForceNext(const std::optional<xbase::Time64> _next_read_pos = {}) = 0;
    virtual XSegment        ReadSegmentSetEnd(const std::optional<xbase::Time64> _segment_end)    = 0;
    // Close and return next read items (if has ones)
    virtual xbase::XResult<IMediaStream::ItemsVec> ReadClose(const bool _send_eos) = 0;
};

namespace xmedia_stream {

    enum class ItemTrace {
        kPos,        // 23.550(570:3)
        kStreamInfo, // PacketVideo(uid:1017 g:217) 23.550(570:3)
        kFull        // 23.550(570:3) ... media object trace ...
    };

    std::string ToString(const IMediaStream::State _state);
    // PacketVideo(uid:1017 g:217)
    std::string ToString(const IMediaObject* _object_p);

    std::string ToString(const IMediaStream::Item* _item_p, const ItemTrace _trace_type = ItemTrace::kStreamInfo);

    std::string ToString(const IMediaStream::ItemsVec::const_iterator _begin,
                         const IMediaStream::ItemsVec::const_iterator _end,
                         const ItemTrace                              _trace_type = ItemTrace::kStreamInfo);

    std::string ToString(const IMediaStream::ItemsVec& _items_vec,
                         const ItemTrace               _trace_type = ItemTrace::kStreamInfo);

    // [EMPTY W:23.550(570:3) EOS]
    // [10.550(340) F:12.000(230:0) .. R:12.520(420:2) .. W:23.550(570:3) EOS]
    std::string ToString(const IMediaStream::Status& _sts, const bool _trace_items = false);

    // [0/1]  PacketVideo(uid:1017) PEEK Max:10.000(500) [10.550(340) F:12.000(230:0) .. R:12.520(420:2) ..
    // W:23.550(570:3) EOS]
    std::string ToString(const IMediaStreamsBunch* _bunch_p, const std::set<xbase::Uid>& _streams_uids = {});

    IMediaStream::Item::SPtr CloneItem(const IMediaStream::Item*          _base_item,
                                       IMediaObject::SPtrC&&              _update_object      = {},
                                       const std::optional<uint64_t>      _update_index       = {},
                                       const std::optional<xbase::Time64> _update_stream_time = {},
                                       const std::optional<xbase::Time64> _update_utc_time    = {});

    IMediaStream::Item::SPtrC UpdateToEOS(const IMediaStream::Item::SPtrC& _base_item);
    IMediaStream::Item::SPtrC UpdateToNotReady(const IMediaStream::Item::SPtrC& _base_item);

    xbase::Time64 ItemTime(const IMediaStream::Item* _item_p,
                           const bool                _utc_time,
                           const xbase::Time64       _time_for_null = time64::kNoVal);

    std::optional<XTime> ItemTime(const IMediaStream::Item*      _item_p,
                                  const bool                     _utc_time,
                                  const XSegment&                _segment,
                                  const std::optional<XRational> _dest_timebase = {});

    IMediaStream::Item::SPtrC ItemFind(const IMediaStream::ItemsVec& _items_vec,
                                       const xbase::Uid              _stream_uid,
                                       const bool                    _empty_media_as_default);

    // Return time of MIN/MAX video stream or MIN/MAX audio stream time
    enum class SyncType { kMinTime, kMaxTime };
    xbase::Time64 ItemsSyncTime(const IMediaStream::ItemsVec& _items_vec,
                                const bool                    _utc_time,
                                const SyncType                _sync_type,
                                const xbase::Time64           _time_for_empty = time64::kNoVal);

    xbase::Uid StreamUid(const IMediaStream::Item* _item_p);

    xbase::XResult<IMediaStreamWrite::SPtr> CreateMediaStream(
        const IMediaStream::Props&           _stream_props, // stream uid should be specified
        const IMediaStream::OnItemRequested& _item_requested_pf = {});

    // TODO: Better name
    xbase::XResult<IMediaStreamWrite::SPtr> CreateProcessedStream(
        const IMediaStreamProcessing::Specs& _specs,
        const std::vector<xbase::Uid>&       _input_streams_uids = {}, // If empty -> no check for uids
        const IMediaStream::Props&           _stream_props = {}, // If stream uid not specified -> new one generated
        const IMediaStream::OnItemRequested& _item_requested_pf = {});

    xbase::XResult<IMediaStreamWrite::SPtr> CreateMediaStreamCacheEx(
        const MediaUnitsVec&                                _init_units,
        const IMediaStream::OnItemRequested&                _item_requested_pf,
        const IMediaStream::Props&                          _cache_props,
        const std::optional<double>                         _unit_duration_rt = {},
        const std::optional<IMediaStreamProcessing::Specs>& _processing_specs = {},
        const IMediaStream::Item*                           _continue_from_p  = nullptr);

    xbase::XResult<IMediaStream::SPtr> CreateReadStream(const IMediaStreamWrite::SPtr&  _write_stream,
                                                        const IMediaStreamWrite::Access _access_type,
                                                        const std::optional<uint64_t>   _next_read_index = {});

    xbase::XResult<IMediaStream::SPtr> CreatePeekStream(const IMediaStream::SPtrC&    _read_or_write_stream,
                                                        const std::optional<uint64_t> _next_read_index = {});

    IMediaStreamsBunchWrite::SPtr CreateStreamsBunch(const std::optional<xbase::Time64> _max_duration,
                                                     const std::optional<size_t>        _max_count);

    IMediaStreamsBunchRead::SPtr CreateReadBunch(std::vector<IMediaStream::SPtr>&& _read_streams,
                                                 const IMediaStreamsBunch*         _observe_parent_bunch = nullptr);

    xbase::XResult<IMediaStreamsBunchRead::SPtr> CreateReadBunch(
        IMediaStreamsBunch* const             _write_bunch_p,
        const IMediaStreamWrite::Access       _access_type,
        const std::map<xbase::Uid, uint64_t>& _streams_front_indexes = {});

    xbase::XResult<IMediaStreamsBunchRead::SPtr> CreateReadBunch(
        IMediaStreamsBunch* const                  _write_bunch_p,
        const IMediaStreamWrite::Access            _access_type,
        const xbase::Time64                        _read_from_time,
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {});

    xbase::XResult<IMediaStreamsBunchRead::SPtr> CreatePeekBunch(
        const IMediaStreamsBunch*             _read_bunch_p,
        const std::map<xbase::Uid, uint64_t>& _streams_front_indexes = {});

    xbase::XResult<IMediaStreamsBunchRead::SPtr> CreatePeekBunch(
        const IMediaStreamsBunch*                  _read_bunch_p,
        const xbase::Time64                        _read_from_time,
        const std::map<xbase::Uid, xbase::Time64>& _streams_with_prerolls = {});

    // Return items for specified position
    // Note: For empty streams null items returned for front & read (subj for change ?)
    enum class PosType { kFront, kRead, kBack };
    xbase::XResult<IMediaStream::ItemsVec> BunchStreamsItems(const IMediaStreamsBunch* _read_bunch_p,
                                                             const PosType             _pos_type);

    xbase::XResult<std::pair<xbase::Time64, xbase::Time64>> BunchAvailableTimes(
        const IMediaStreamsBunch*   _read_bunch_p,
        const bool                  _use_utc_time,
        const std::set<xbase::Uid>& _streams_uids = {});

    xbase::XResult<IMediaStreamsBunchReader::SPtr> CreateBunchReader(
        IMediaStreamsBunchRead::SPtr&&                 _read_bunch,
        const IMediaStreamsBunchReader::OnItemsReadPf& _on_items_read,
        const XSegment&                                _read_segment,
        const std::optional<double>                    _remove_after_sec,
        const IMediaStream::ReadFlags                  _read_flags = IMediaStream::ReadFlags::kAVStreamsSlice,
        const std::map<xbase::Uid, xbase::Time64>&     _streams_with_prerolls = {},
        const xbase::IWorker::SPtr&                    _private_worker        = {});

    template <class TInterface>
    static auto QueryBunchStreams(IMediaStreamsBunch* const        _streams_bunch_p,
                                  const std::optional<XObjectType> _streams_types = {}) -> auto
    {
        std::vector<std::shared_ptr<TInterface>> queried_streams;
        for (const auto& stream_sp : _streams_bunch_p->StreamsGet(_streams_types)) {
            auto stream_qp = xobject::PtrQuery<TInterface>(stream_sp.get());
            assert(stream_qp);
            queried_streams.push_back(stream_qp);
        }

        return queried_streams;
    }

    template <class TInterface>
    static auto QueryBunchStreams(const IMediaStreamsBunch* const  _streams_bunch_p,
                                  const std::optional<XObjectType> _streams_types = {}) -> auto
    {
        std::vector<std::shared_ptr<const TInterface>> queried_streams;
        for (const auto& stream_sp : _streams_bunch_p->StreamsGet(_streams_types)) {
            auto stream_qp = xobject::PtrQuery<TInterface>(stream_sp.get());
            assert(stream_qp);
            queried_streams.push_back(stream_qp);
        }

        return queried_streams;
    }

    // using IsStreamSuitable =
    //     std::function<bool(const IMediaStreamsBunch* _existed_streams_p, const IMediaStream* _new_stream_p)>;

    // TODO:
    // - Observers support for dynamic streams selection
    // - 2Think: Support for const IMediaStreamsBunchWrite ?
    // IMediaStreamsBunchRead::SPtr CreateStreamsBunchPeek(const IMediaStreamsBunchWrite::SPtrC& _write_bunch,
    //                                                    IsStreamSuitable&&               _on_new_stream = {});

    // IMediaStreamsBunchRead::SPtr CreateReadBunch(const IMediaStreamsBunchWrite::SPtr& _write_bunch,
    //                                                     IsStreamSuitable&&              _on_new_stream = {});

} // namespace xmedia_stream

} // namespace xsdk