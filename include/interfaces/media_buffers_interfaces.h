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

class IUnitsStreamsBuffers {
public:
    // The other varaint is to use SPtrC for UnitWithPos
    struct UnitWithPos {
        IMediaUnit::SPtrC media;
        uint64_t          index_common              = xbase::npos;
        uint64_t          index_for_stream          = xbase::npos;
        uint64_t          prev_key_index_for_stream = xbase::npos;
    };

    struct UnitsStream {
        uint64_t    stream_uid = xbase::kInvalidUid;
        UnitWithPos head       = {};
        UnitWithPos tail       = {};
        size_t      count      = 0;
    };

    using RequestUnitPf = std::function<bool(const std::optional<uint64_t>& _stream_uid, const INode::SPtrC& _hints)>;

public:
    USING_PTRS(IUnitsStreamsBuffers)

    virtual ~IUnitsStreamsBuffers() = default;

    virtual UnitsStream GetMixedStream() const = 0;
    // 2Think: Use std::vector<std::pair<uint64_t, const UnitsStream*>> and remove UnitsStream::stream_uid
    virtual std::vector<UnitsStream>   GetStreams() const                               = 0;
    virtual std::optional<UnitsStream> GetStreamByUid(const uint64_t _stream_uid) const = 0;
    // Change to ReadUnit(..) ?
    virtual xbase::XResult<UnitWithPos> PeekUnit(const std::optional<uint64_t>& _common_idx = {}) const = 0;
    virtual xbase::XResult<UnitWithPos> PeekUnitFromStream(
        const uint64_t                 _stream_uid,
        const std::optional<uint64_t>& _idx_for_stream = {}) const                                         = 0;
    virtual xbase::XResult<UnitWithPos> PeekNextUnit(const uint64_t            _after_common_idx,
                                                     const std::set<uint64_t>& _streams_subset = {}) const = 0;

    // 2Think: move to helpers ? (realy it's StreamUnitsForTime with min)
    enum class FindFlags { kNearestKeyFrame, kNotKeyFrame };
    virtual xbase::XResult<UnitWithPos> UnitForTime(const xbase::Time64       _timestamp,
                                                    const FindFlags           _find_flags = FindFlags::kNearestKeyFrame,
                                                    const std::set<uint64_t>& _streams_subset = {}) const = 0;

    virtual std::vector<UnitWithPos> StreamUnitsForTime(const xbase::Time64 _timestamp,
                                                        const FindFlags     _find_flags = FindFlags::kNearestKeyFrame,
                                                        const std::set<uint64_t>& _streams_subset = {}) const = 0;

    enum class TakeFlags {
        kKeepInQueue      = 0x01,
        kExtractFromQueue = 0x02,

        kCorrectEOS = 0x10,

        kKeepCorrectEOS    = kKeepInQueue | kCorrectEOS,
        kExtractCorrectEOS = kExtractFromQueue | kCorrectEOS
    };
    virtual xbase::XResult<UnitWithPos> TakeUnit(const TakeFlags                _take_flags,
                                                 const std::optional<uint64_t>& _stream_uid    = {},
                                                 const std::optional<uint32_t>& _wait_msec     = {},
                                                 const INode::SPtrC&            _request_hints = {}) = 0;

    enum class PutFlags { kRejectIfFull, kPopOldest, kFlush, kInitStreamOnly = 0x10, kInitStreamAndPut };

    // Return new created unit and size of destination stream
    // 2Think: callbacks for formar etc chnages ?
    virtual xbase::XResult<std::pair<UnitWithPos, size_t>> PutUnit(
        const IMediaUnit::SPtrC&       _media,
        const PutFlags                 _put_flags,
        const std::optional<uint32_t>& _wait_msec           = {},
        const std::optional<size_t>    _max_total_buffers   = {},
        const std::optional<size_t>    _max_streams_buffers = {}) = 0;

    virtual std::optional<UnitsStream> RemoveStream(const uint64_t _stream_uid, const bool _remove_non_empty) = 0;

    // Keep uniits required for get media from specified timestamp
    virtual size_t ClearUnits(const std::optional<xbase::Time64>& _keep_for_timestamp = {}) = 0;
    virtual void   Reset()                                                                  = 0;
};

XENUM_OPS32(IUnitsStreamsBuffers::TakeFlags)
XENUM_OPS32(IUnitsStreamsBuffers::PutFlags)

namespace xunits_buffers {

    static constexpr size_t kDefaultStreamBuffers = 100;
    static constexpr size_t kDefaultTotalBuffers  = 1000;

    IUnitsStreamsBuffers::UPtr CreateStreamsBuffers(IUnitsStreamsBuffers::RequestUnitPf&& _request_unit = {});
} // namespace xunits_buffers

} // namespace xsdk