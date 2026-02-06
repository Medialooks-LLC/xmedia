#pragma once

#include "media_objects_interfaces.h"
#include "media_streams_interfaces.h"
#include "xmedia_structures.h"

#include <map>
#include <string>
#include <vector>

namespace xsdk {

class IMediaStreamsHub: public IMediaStreamsBunchWrite {

public:
    static constexpr double kDefaultCompressedBufferSec   = 10.0;
    static constexpr double kDefaultUncompressedBufferSec = 1.0;
    static constexpr bool   kKeepDecodedFromKey           = true;

    struct BufferSpecs {
        std::optional<double> buffer_compressed_sec;
        std::optional<double> buffer_uncompressed_sec;
        bool                  keep_handled_from_key = kKeepDecodedFromKey;
    };

public:
    USING_PTRS(IMediaStreamsHub)

    virtual ~IMediaStreamsHub() = default;

    virtual IMediaStreamProcessing::Specs::SPtrC DefaultHandlerGet(const XObjectType _object_type) const = 0;
    virtual std::map<XObjectType, IMediaStreamProcessing::Specs::SPtrC> DefaultHandlersGet() const       = 0;
    // Return previous one
    virtual IMediaStreamProcessing::Specs::SPtrC DefaultHandlerAdd(
        const XObjectType               _object_type,
        IMediaStreamProcessing::Specs&& _processing_specs) = 0;

    virtual xbase::XResult<IMediaStreamProcessing::SPtr> StreamProcessingAdd(
        const xbase::Uid                _stream_uid,
        IMediaStreamProcessing::Specs&& _processing_specs,
        const std::optional<xbase::Uid> _processed_stream_uids = {}) = 0;

    virtual std::vector<IMediaStream::SPtr> StreamsGet(const std::optional<xbase::Uid> _original_stream_uid,
                                                       const XFormat&                  _suitable_formats = {}) = 0;
};

// 2Think: Rename to IMediaReader or IMediaStreamsSource ?
class IMediaFileReader: public IMediaStreamsBunch {
public:
    static constexpr double kDefaultCompressedBufferSec   = 10.0;
    static constexpr double kDefaultUncompressedBufferSec = 1.0;

    enum class Mode { kFile, kStream, kAuto };

    struct Specs {
        double                     buffer_compressed_sec   = kDefaultCompressedBufferSec;
        double                     buffer_uncompressed_sec = kDefaultUncompressedBufferSec;
        Mode                       reader_mode             = Mode::kAuto;
        std::optional<std::string> handler_type_or_desc; // By default is av_demultiplexer
    };

public:
    USING_PTRS(IMediaFileReader)

    virtual ~IMediaFileReader() = default;

public:
    virtual const IMediaFileReader::Specs& ReaderSpecs() const   = 0;
    virtual const IMediaHandler*           SourceHandler() const = 0;
    // For file mode -> begin caching till buffer full, for live mode -> begin read and push to buffer (reject old)
    virtual std::error_code ReaderStart(const std::optional<double> _pos_sec = {})             = 0;
    virtual std::error_code ReaderStop(const std::optional<uint32_t> _wait_for_stop_msec = {}) = 0;

    virtual xbase::XResult<IMediaStream::SPtrC> ReaderStreamAdd(
        const std::vector<xbase::Uid>&                      _input_stream_uids,
        const std::optional<IMediaStreamProcessing::Specs>& _processing_specs,
        const IMediaStreamsBunch::SyncType                  _sync_type,
        const std::optional<xbase::Time64>                  _sync_offset = {}) = 0;
};

// TODO(?): IPlaylist interface support ?
class IMediaFileSeqReader: public IMediaStreamsBunch {
public:
    USING_PTRS(IMediaFileSeqReader)

    virtual ~IMediaFileSeqReader() = default;

public:
    virtual std::vector<IMediaFileReader::SPtrC> ReadersList() const = 0;
};

namespace xreader {

    xbase::XResult<IMediaFileReader::SPtr> CreateMediaReader(
        const std::string&                                  _open_url,
        const INode::SPtrC&                                 _init_props               = {},
        const IMediaFileReader::Specs&                      _reader_specs             = {},
        const std::optional<IMediaStreamProcessing::Specs>& _default_processing_specs = {},
        const IMediaStream::ItemsVec&                       _continue_from            = {});

    xbase::XResult<IMediaFileSeqReader::SPtr> CreateMediaSeqenceReader(
        const std::string&                                  _playlist_url,
        const INode::SPtrC&                                 _demuxers_props   = {},
        const IMediaFileReader::Specs&                      _readers_specs    = {},
        const std::optional<IMediaStreamProcessing::Specs>& _processing_specs = {});

} // namespace xreader

} // namespace xsdk
