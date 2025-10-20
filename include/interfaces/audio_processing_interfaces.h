#pragma once

#include "constants/common.h"
#include "media_objects_interfaces.h"

#include <string>
#include <vector>

namespace xsdk {

/**
 * @brief - structure for repesent audio frame
 */
struct AudioFrame {
    USING_PTRS(AudioFrame)

    /**
     * @brief - audio frame format
     */
    XFormatA format;
    /**
     * @brief - optional audio frame timestamp
     */
    std::optional<xbase::Time64> timestamp;
    /**
     * @brief - actual number of audio samples for each channel in audio frame
     */
    size_t nb_samples = 0;
    /**
     * @brief - pointer to audio planes for planar audio or one pointer to interleaved audio plane for inteleaved audio
     * formats
     */
    std::vector<uint8_t*> channels_planes;
    /**
     * @brief - optional audio buffer, the size of buffer could be bigger than autual audio planes, buffer used for hold
     * audio data, and not intended for access audio, use channels_planes instead.
     */
    xbase::XBuffer buffer_private;
};

/**
 * @brief - audio suncromization flags
 */
XENUM_CLASS(SyncFlags,
            /**
             * @brief - Flush fifo and converter
             */
            kFlushBuffer = 0x10000000,

            /**
             * @brief - Default behavior -> keep fifo times in sync with recent input frame
             */
            kSyncFifoTimes = 0, // Better name ?

            /**
             * @brief - Fifo times is continued from recent time if has audio gap
             */
            kIgnoreAudioGap = 0x1,
            /**
             * @brief - Fifo times is continued from recent time if has audio overlap
             */
            kIgnoreAudioOverlap = 0x2,
            /**
             * @brief - Fifo times is continued from recent time if has audio gap or overlap
             */
            kIgnoreAudioGapAndOverlap = kIgnoreAudioGap | kIgnoreAudioOverlap,

            // Add silence / remove data from fifo for correct times gaps/overlaps

            /**
             * @brief - Add silence for correct times gaps
             */
            kCorrectAudioGap = 0x10,
            /**
             * @brief - Skip input audio for correct times overlap
             */
            kCorrectAudioOverlap = 0x20,
            /**
             * @brief - Add silence or skip input audio for correct times gap or overlaps
             */
            kCorrectAudioGapAndOverlap = kCorrectAudioGap | kCorrectAudioOverlap,

            /**
             * @brief - Flush audio if gap detected
             */
            kFlushForGap = 0x100,
            /**
             * @brief - Flush audio if overlap detected
             */
            kFlushForOverlap = 0x200,
            /**
             * @brief - Flush audio if gap or overlap detected
             */
            kFlushForGapAndOverlap = kFlushForGap | kFlushForOverlap,

            /**
             * @brief - Return error if gap detected
             */
            kErrorForGap = 0x1000,
            /**
             * @brief - Return error if overlap detected
             */
            kErrorForOverlap = 0x2000,
            /**
             * @brief - Return error if gap or overlap detected
             */
            kErrorForGapAndOverlap = kErrorForGap | kErrorForOverlap)

/**
 * @brief - audio stream configuration interface
 */
class IAudioStreamConfig {
public:
    /**
     * @brief - extra audio processing descriptio (NOT IMPLEMENTED YET)
     */
    struct Processing {
        std::optional<double> audio_gain_db;
        INode::SPtrC          extra_filters;
    };

    /**
     * @brief - audio stream status
     */
    struct Status {
        /**
         * @brief - audio stream uid
         */
        xbase::Uid stream_uid = xbase::kInvalidUid;
        /**
         * @brief - number of delayed (during sample-rate conversion) samples
         */
        size_t delayed_samples = 0;
        /**
         * @brief - number of available output samples
         */
        size_t available_samples = 0;
        /**
         * @brief - audio straam head timestamp
         */
        xbase::Time64 head_timestamp = time64::kNoVal;
        /**
         * @brief - EndOFStream received flag
         */
        bool is_eos_received = false;
    };

public:
    USING_PTRS(IAudioStreamConfig)

    virtual ~IAudioStreamConfig() = default;

    /**
     * @brief - audio stream uid
     */
    virtual xbase::Uid StreamUid() const = 0;
    /**
     * @brief - audio stream status
     */
    virtual Status StreamStatus() const = 0;

    /**
     * @brief - destination audio stream format
     */
    virtual const XFormatA& GetStreamFormat() const = 0;
    /**
     * @brief - audio stream processing
     */
    virtual Processing GetStreamProcessing() const = 0;
    /**
     * @brief - audio channel processing
     */
    virtual std::vector<Processing> GetChannelsProcessing() const = 0;

    /**
     * @brief - set audio stream processing, return unsupported options (NOT IMPLEMENTED YET)
     */
    virtual xbase::XResult<INode::SPtrC> SetStreamProcessing(const Processing& _stream_processing) = 0;
    /**
     * @brief - set audio channel processing, return unsupported options (NOT IMPLEMENTED YET)
     */
    virtual xbase::XResult<INode::SPtrC> SetChannelsProcessing(const std::vector<Processing>& _channels_processing) = 0;
};

/**
 * @brief - audio stream interface, used for convert audio with to specified format, support seamless input format
 * changing.
 */
class IAudioStream: public IAudioStreamConfig {
public:
    USING_PTRS(IAudioStream)

    /**
     * @brief - put audio frame into buffer with specified sync options, use nullptr for signal End Of Stream
     */
    virtual xbase::XResult<size_t> WriteFrame(const AudioFrame* _input_frame_p,
                                              const SyncFlags   _flags = SyncFlags::kSyncFifoTimes) = 0;
    /**
     * @brief - read desired audio samples number from buffer, optionally with skip specified number of samples, remove
     * skipped and read audio samples from buffer for _nb_samples = 0 -> read and remove all available data, Note: for
     * take delayed samples, use WriteFrame(nullptr) for EOS signal.
     */
    virtual xbase::XResult<AudioFrame::UPtr> ReadFrame(const size_t _nb_samples   = 0,
                                                       const size_t _samples_skip = 0) = 0;
    /**
     * @brief - read desired audio samples number from buffer from specified offset, do not remove audio from buffer,
     * for _nb_samples = 0 -> return all available samples
     */
    virtual xbase::XResult<AudioFrame::UPtr> PeekFrame(const size_t _nb_samples     = 0,
                                                       const size_t _samples_offset = 0) const = 0;

    /**
     * @brief - remove not more than specified number of sample from buffer, return actual number of removed samples
     */
    virtual xbase::XResult<size_t> Drain(const size_t _nb_samples) const = 0;

    /**
     * @brief - reset audio stream, optioanlly set next wringing time (for sync byffer)
     */
    virtual void Reset(const std::optional<xbase::Time64> _next_write_time = {}) = 0;
};

/**
 * @brief - Interface for process multiple audio streams with output mixing data of input streams.
 */
class IAudioProcessor {
public:
    // 2Think:
    // - add channels selection
    // - add options for override keep_audio - e.g. std::optional<bool> override_keep_audio ?

    /**
     * @brief - structure used for specification of audio streams muxing weight and offsets
     */
    struct MuxStreamSpecs {
        xbase::Uid stream_uid    = xbase::kInvalidUid;
        double     mux_weight    = 1.0;
        size_t     stream_offset = 0;
    };

    /**
     * @brief - enum used for GetMinMaxStreamsStatus() streams selection
     */
    enum class MinMaxType { kDuration, kHeadTime, kTailTime };
    using ChannelLayout = std::variant<std::monostate, int32_t, std::string>;

public:
    USING_PTRS(IAudioProcessor)

    virtual ~IAudioProcessor() = default;

    // 2Think: XformatA
    /**
     * @brief - return processor sample-rate and sample fromats (specified during audio processor creation)
     */
    virtual std::pair<uint32_t, std::string> GetProcessingFormat() const = 0;

    /**
     * @brief - add input stream, optioanlly with destination channel layout configuration
     */
    virtual xbase::XResult<IAudioStreamConfig::SPtr> AddStream(const std::optional<xbase::Uid> _stream_uid  = {},
                                                               const ChannelLayout& _stream_channels_layout = {}) = 0;
    /**
     * @brief - return input streams status
     */
    virtual std::vector<IAudioStreamConfig::Status> GetStreamsStatus() const = 0;
    /**
     * @brief - return input stream status by stream uid
     */
    virtual xbase::XResult<IAudioStreamConfig::Status> GetStreamStatus(const xbase::Uid _stream_uid) const = 0;

    // 2Think: Add std::vector<MuxStreamSpecs> for select streams ?

    /**
     * @brief - return min/max streams (depends from MinMaxType - min/max by duration head time or tail time), if
     * _ignore_eos_duration is true, for streams with eos duration ignored
     */
    virtual std::pair<IAudioStreamConfig::Status, IAudioStreamConfig::Status> GetMinMaxStreamsStatus(
        const MinMaxType _type,
        const bool       _ignore_eos_duration) const = 0;
    /**
     * @brief - return input streams configuration interfaces
     */
    virtual std::vector<IAudioStreamConfig::SPtrC> GetStreams() const = 0;
    /**
     * @brief - return input streams configuration interfaces
     */
    virtual std::vector<IAudioStreamConfig::SPtr> GetStreams() = 0;
    /**
     * @brief - remove input stream by it's uid
     */
    virtual xbase::XResult<IAudioStream::SPtr> RemoveStream(const xbase::Uid _stream_uid) = 0;

    // For in/out

    /**
     * @brief - write audio frame to specified stream, stream sould be created via AddStream() before this call
     */
    virtual xbase::XResult<IAudioStreamConfig::Status> WriteFrame(
        const xbase::Uid  _stream_uid,
        const AudioFrame* _input_frame_p,
        const SyncFlags   _flags = SyncFlags::kSyncFifoTimes) = 0;
    /**
     * @brief - muxed audio frame according to _mux_specs, remove taken audio from buffer, if _mux_specs is empty -> mux
     * all audio streams with default 1.0 weight
     */
    virtual xbase::XResult<AudioFrame::UPtr> ReadMuxedFrame(const size_t                       _nb_samples = 0,
                                                            const std::vector<MuxStreamSpecs>& _mux_specs  = {}) = 0;
    /**
     * @brief - peek muxed audio frame accirding to _mux_specs, if _mux_specs is empty -> mux all audio streams with
     * default 1.0 weight
     */
    virtual xbase::XResult<AudioFrame::UPtr> PeekMuxedFrame(
        const size_t                       _nb_samples = 0,
        const std::vector<MuxStreamSpecs>& _mux_specs  = {}) const = 0;

    /**
     * @brief - Remove specified number of audio samples from all streams, use MuxStreamSpecs::offset for remove
     * non-equal number of samples from each stream
     */
    virtual size_t RemoveAudio(const size_t _nb_samples, const std::vector<MuxStreamSpecs>& _remove_specs = {}) = 0;

    /**
     * @brief - Remove all streams and clear all internal properties
     */
    virtual void Reset() = 0;
};

namespace xaudio {

    static const XCodec kCodecPcm20 = {XObjectType::ChunkAudio,
                                       std::string(xsdk::av_lib::codec_id::kPcm_s20le),
                                       0,
                                       0,
                                       {},
                                       {},
                                       {},
                                       {},
                                       xsdk::XCodec::Audio {24, 24, 20, 0, 0, 0, 0}};

    static const XCodec kCodecPcm24 = {XObjectType::ChunkAudio,
                                       std::string(xsdk::av_lib::codec_id::kPcm_s24le),
                                       0,
                                       0,
                                       {},
                                       {},
                                       {},
                                       {},
                                       xsdk::XCodec::Audio {24, 24, 24, 0, 0, 0, 0}};

    static const XCodec kCodecPcm20Planar = {XObjectType::ChunkAudio,
                                             std::string(xsdk::av_lib::codec_id::kPcm_s20le_planar),
                                             0,
                                             0,
                                             {},
                                             {},
                                             {},
                                             {},
                                             xsdk::XCodec::Audio {24, 24, 20, 0, 0, 0, 0}};

    static const XCodec kCodecPcm24Planar = {XObjectType::ChunkAudio,
                                             std::string(xsdk::av_lib::codec_id::kPcm_s24le_planar),
                                             0,
                                             0,
                                             {},
                                             {},
                                             {},
                                             {},
                                             xsdk::XCodec::Audio {24, 24, 24, 0, 0, 0, 0}};

    struct PcmCompressedInfo
    {
        bool compressed = false;
        int  bits_per_sample = 0;
        bool planar          = false;
    };
    PcmCompressedInfo GetPcmCompressedInfo(const XFormatA* _format_a);

    // Frames
    /**
     * @brief - check is AudioFrame is valid - check audio format & audio planes pointers,
     */
    bool IsFrameValid(const AudioFrame* _frame_p);

    /**
     * @brief - convert audio frame time to samples times
     */
    std::optional<int64_t> TimeInSamples(const AudioFrame* _frame_p);

    /**
     * @brief - allocate audio frame with specified samples count
     */
    AudioFrame::UPtr AllocFrame(const XFormatA&                    _format,
                                const size_t                       _nb_samples,
                                const std::optional<xbase::Time64> _timestamp = {});

    /**
     * @brief - clone part of audio frame (buffer remained the same)
     */
    AudioFrame::UPtr CloneFrame(const AudioFrame* _frame_p,
                                const size_t      _samples_offset = 0,
                                const size_t      _samples_len    = xbase::npos);

    /**
     * @brief - copy  part of audio from one frame to another
     */
    xbase::XResult<size_t> CopyTo(AudioFrame*       _dst_frame_p,
                                  const AudioFrame* _src_frame_p,
                                  const size_t      _dst_offset  = 0,
                                  const size_t      _src_offset  = 0,
                                  const size_t      _samples_len = xbase::npos);

    /**
     * @brief - make audio frame from media frame - added reference to audio buffer, data not copied
     */
    xbase::XResult<AudioFrame::UPtr> FromMediaFrame(const IMediaFrame* _media_frame_p);

    /**
     * @brief - make media frame from audio frame - added reference to audio buffer, data not copied
     */
    xbase::XResult<IMediaFrame::SPtr> ToMediaFrame(const AudioFrame* _audio_frame_p,
                                                   const IMediaUnit* _base_props_p = nullptr,
                                                   const XSegment&   _segment      = {});

    /**
     * @brief - create audio stream with specified audio format, optionally reserve internal fifo to specified size
     */
    IAudioStream::UPtr CreateAudioStream(const XFormatA&                 _stream_format,
                                         const size_t                    _reserve_samples = 0,
                                         const std::optional<xbase::Uid> _stream_uid      = {});

    /**
     * @brief - create audio processor with specified audio format
     */
    IAudioProcessor::UPtr CreateAudioProcessor(const uint32_t         _sample_rate,
                                               const std::string_view _sample_format = av_lib::sample_fmt::kFltp);
} // namespace xaudio

} // namespace xsdk
