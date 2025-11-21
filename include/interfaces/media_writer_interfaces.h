#pragma once

#include "media_objects_interfaces.h"
#include "media_streams_interfaces.h"
#include "xmedia_structures.h"

#include <map>
#include <string>
#include <vector>

namespace xsdk {

class IMediaStreamEncoders {

public:
    struct EncoderSpecs {
        std::string                encoder_name;
        INode::SPtrC               encoder_props;
        XFormat                    conversion_format;
        INode::SPtrC               conversion_props;
        std::optional<std::string> handler_subtype;

        // By default the program & metadata copied from original stream
        // Specify next props for update it's
        std::vector<XProgram> stream_programs_update;
        INode::SPtrC          stream_metadata_update; // Node name -> the name of stream ?

        using SPtrC = std::shared_ptr<const EncoderSpecs>;
    };

    struct EncodedStream {
        xbase::Uid           source_stream_uid;
        xbase::Uid           encoded_stream_uid;
        EncoderSpecs::SPtrC  encoder_specs;
        IMediaHandler::SPtrC encoder_handler;
        IMediaStream::SPtrC  encoded_media_stream;

        using SPtrC = std::shared_ptr<const EncodedStream>;
    };

public:
    USING_PTRS(IMediaStreamEncoders)

    // Constructor: input stream props, default encoders (map ?)
    // Note: For default encoders - encoded uids is the same as for input streams
    virtual ~IMediaStreamEncoders() = default;

    virtual MediaUnitsVec                     InputStreamsProps() const                       = 0;
    virtual std::vector<EncodedStream::SPtrC> InputStreamRemove(const xbase::Uid _stream_uid) = 0;

    // Return previous one
    // virtual EncoderSpecs::SPtrC DefaultEncoderSet(const XObjectType _object_type, EncoderSpecs&& _encoder_specs) = 0;
    virtual EncoderSpecs::SPtrC DefaultEncoderGet(const XObjectType _object_type) const = 0;

    virtual xbase::XResult<EncodedStream::SPtrC> EncodedStreamAdd(
        const xbase::Uid                _stream_uid,
        EncoderSpecs&&                  _encoder_specs,
        const std::optional<xbase::Uid> _encoded_stream_uid = {}) = 0;

    virtual EncodedStream::SPtrC EncodedStreamGet(const xbase::Uid _encoded_stream_uid) const              = 0;
    virtual std::multimap<xbase::Uid, EncodedStream::SPtrC> EncodedStreamsGet() const                      = 0;
    virtual xbase::XResult<EncodedStream::SPtrC> EncodedStreamRemove(const xbase::Uid _encoded_stream_uid) = 0;
    virtual const IMediaStreamsBunch*            EncodedStreamsBunch() const                               = 0;
    virtual IMediaStreamsBunch*                  EncodedStreamsBunch()                                     = 0;
    virtual std::vector<EncodedStream::SPtrC>    EncodedStreamsReset(const bool _reset_input_props)        = 0;

    // Return media unit & size for each encoded stream
    // 2Think: Drop size_t - for simplify return type ?
    virtual xbase::XResult<std::vector<std::pair<IMediaStream::Item::SPtrC, size_t>>> PutStreamUnit(
        const IMediaUnit::SPtrC&           _media_unit_p,
        const bool                         _add_new_input,
        const IMediaStreamWrite::PutMode   _put_mode    = IMediaStreamWrite::PutMode::kRejectIfFull,
        const std::optional<uint32_t>      _wait_msec   = {},
        const std::optional<xbase::Time64> _stream_time = {}) = 0;
};

class IWriterSink {

public:
    enum class CloseReason { kNone, kError, kMaxDuration, kEndOfSegment, kEndOfStream, kSinkClosed };

    enum class Flags { kNone = 0, kUseUtcTime = 1, kPeekMode = 2 /*, kInstantSwitch = 4*/ };

    enum class State {
        kClosed,
        kStarting,
        kCapture,
        kPausing,
        kPaused,
        kClosing,
        kSwitchingByTime,
        kSwitchingByUser,
        kError
    };

    struct DestSpecs {
        std::string                dest_url;
        std::optional<double>      max_duration_sec;
        INode::SPtrC               dest_props;
        std::optional<std::string> handler_subtype; // Default is av_mutiplexer
        std::optional<bool>        rate_control;

        using SPtrC = std::shared_ptr<DestSpecs>;
    };

    struct Status {
        State                        sink_state = State::kClosed;
        XSegment                     capture_segment;
        std::optional<xbase::Time64> switch_time;
        Flags                        sink_flags = Flags::kNone;
        DestSpecs::SPtrC             dest_specs_p;
        IMediaHandler::SPtrC         dest_handler;
    };

    USING_PTRS(IWriterSink)

public:
    virtual ~IWriterSink() = default;

    virtual xbase::Uid                                 SinkUid() const             = 0;
    virtual Status                                     SinkStatus() const          = 0;
    virtual const IMediaStreamsBunch*                  SinkReadBunch() const       = 0;
    virtual const std::map<xbase::Uid, xbase::Time64>& StreamsWithPrerolls() const = 0;

    // Return next (?) capture items (or EOS items if finished)
    virtual xbase::XResult<IMediaStream::ItemsVec> SinkPause(
        const std::optional<uint32_t> _msec_wait_for_pausing = {}) = 0;
    // Return first capture items (could be compared withreturned from pause, for check skipped items)
    virtual xbase::XResult<IMediaStream::ItemsVec> SinkContinue(
        const std::optional<xbase::Time64> _continue_from = {}) = 0;
    // Return next (?) capture items (or EOS items if finished)
    virtual xbase::XResult<IMediaStream::ItemsVec> SinkClose(
        const std::optional<uint32_t> _msec_wait_for_close = {}) = 0;

    // virtual std::error_code           SinkSwitch(const bool                       _instant_switch,
    //                                              const std::optional<std::string> _dest_url         = {},
    //                                              const std::optional<double>      _max_duration_sec = {})       = 0;
};

XENUM_OPS32(IWriterSink::Flags)

class IWriterSinks {

public:
    USING_PTRS(IWriterSinks)

    virtual ~IWriterSinks() = default;

    // Optionally return new destination
    using OnSinkClosePf =
        std::function<std::optional<IWriterSink::DestSpecs>(const IWriterSink*             _sink_p,
                                                            const IWriterSink::CloseReason _close_reason,
                                                            IWriterSink::DestSpecs&&       _next_dest_specs)>;

    virtual xbase::XResult<IWriterSink::SPtr> SinkAdd(const std::set<xbase::Uid>&   _streams_uids,
                                                      const XSegment&               _capture_segment,
                                                      const IWriterSink::DestSpecs& _dest_specs,
                                                      const IWriterSink::Flags      _flags = IWriterSink::Flags::kNone,
                                                      const OnSinkClosePf&          _on_sink_closed_pf = {}) = 0;

    // Return replaced sink, and new one
    virtual xbase::XResult<std::pair<IWriterSink::SPtr, IWriterSink::SPtr>> SinkSwitch(
        const xbase::Uid              _sink_uid,
        const IWriterSink::DestSpecs& _dest_specs_override = {}) = 0;

    virtual std::vector<IWriterSink::SPtrC> SinksGet() const                          = 0;
    virtual std::vector<IWriterSink::SPtr>  SinksGet()                                = 0;
    virtual IWriterSink::SPtrC              SinkGet(const xbase::Uid _sink_uid) const = 0;
    virtual IWriterSink::SPtr               SinkGet(const xbase::Uid _sink_uid)       = 0;
    virtual std::vector<IWriterSink::SPtr>  SinksReset()                              = 0;
};

class IMediaWriter: public IMediaStreamEncoders, public IWriterSinks {

public:
    USING_PTRS(IMediaWriter)

    virtual ~IMediaWriter() = default;

    // virtual xbase::XResult<MediaUnitsVec> WriterInit(MediaUnitsVec&&     _input_props,
    //                                                  const INode::SPtrC& _writer_options) = 0;
    virtual void WriterClose() = 0;
};

namespace xwriter {
    std::pair<IMediaStreamEncoders::UPtr, MediaUnitsVec> CreateStreamEncoder(
        MediaUnitsVec&&                                                           _input_props,
        const std::optional<double>                                               _max_buffers_sec  = {},
        std::vector<std::pair<XObjectType, IMediaStreamEncoders::EncoderSpecs>>&& _default_encoders = {});

    IWriterSinks::SPtr CreateWriterSinksRead(IMediaStreamsBunch* const   _streams_bunch_p,
                                             const std::optional<double> _min_buffers_sec);

    IWriterSinks::SPtr CreateWriterSinksPeek(const IMediaStreamsBunch* _streams_bunch_p);

    IMediaWriter::UPtr CreateMediaWriter(IMediaStreamEncoders::UPtr&& _stream_encoder,
                                         const std::optional<double>  _min_buffers_sec = {});

    std::pair<IMediaWriter::UPtr, MediaUnitsVec> CreateMediaWriter(
        MediaUnitsVec&&                                                           _input_props,
        const std::optional<double>                                               _min_buffers_sec  = {},
        const std::optional<double>                                               _max_buffers_sec  = {},
        std::vector<std::pair<XObjectType, IMediaStreamEncoders::EncoderSpecs>>&& _default_encoders = {});
} // namespace xwriter

} // namespace xsdk
