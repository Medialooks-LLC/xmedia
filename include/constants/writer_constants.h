#pragma once

#include <string>

namespace xsdk::xwriter {

/**
 * @defgroup WriterConstants Writer Configuration Constants
 * @brief Constants used for MediaWriter and WriterSink configuration via INode
 *
 * These constants define the keys used when serializing/deserializing writer configuration
 * through INode objects. They are used in functions like StoreEncoderSpecs, LoadEncoderSpecs,
 * StoreWriterSink, LoadWriterSink, and MediaWriterHandler initialization.
 * @{
 */

/** @name Buffer Management Constants */
/** @{ */

/**
 * @brief Minimum buffer size in seconds for writer streams.
 *
 * Controls the minimum amount of media data (in seconds) that can be buffered
 * in the writer before writing. Lower values reduce memory usage but may
 * affect performance.
 *
 * Usage: Set in writer initialization properties
 * @code
 * writer_props.Set(kMinBuffersSec, 0.5); // Minimum 0.5 seconds buffer
 * @endcode
 */
static const std::string kMinBuffersSec = "min_buffers_sec";

/**
 * @brief Maximum buffer size in seconds for writer streams.
 *
 * Controls the maximum amount of media data (in seconds) that can be buffered
 * in the writer. When exceeded, older data is discarded or written.
 *
 * Usage: Set in writer initialization properties
 * @code
 * writer_props.Set(kMaxBuffersSec, 5.0); // Maximum 5 seconds buffer
 * @endcode
 */
static const std::string kMaxBuffersSec = "max_buffers_sec";

/** @} */ // Buffer Management Constants

/** @name Default Encoder Configuration Constants */
/** @{ */

/**
 * @brief Array of default encoder specifications.
 *
 * Contains array of encoder configurations grouped by object type (Video/Audio/Subtitle/Data).
 * Used in MediaWriterHandler initialization to set up default encoders for incoming streams.
 *
 * Structure: Array of objects with kObjectType and kEncoderSpecs fields
 *
 * @code
 * "default_encoders": [
 *   {
 *     "object_type": "Video",
 *     "encoder_specs": { ... }
 *   },
 *   {
 *     "object_type": "Audio",
 *     "encoder_specs": { ... }
 *   }
 * ]
 * @endcode
 */
static const std::string kDefaultEncoders = "default_encoders";

/**
 * @brief Object type identifier for encoder specification.
 *
 * Specifies which media object type the encoder is for.
 * Valid values: "Video", "Audio", "Subtitle", "Data", or combinations as defined by XObjectType.
 *
 * Used inside default_encoders array entries.
 */
static const std::string kObjectType = "object_type";

/** @} */ // Default Encoder Configuration Constants

/** @name Encoder Specification Constants */
/** @{ */

/**
 * @brief Encoder specifications node name.
 *
 * Container for all encoder-related configuration including:
 * - kEncoderName: Encoder identifier (e.g., "h264", "aac", "libopenh264")
 * - kEncoderProps: Encoder-specific properties (bitrate, preset, profile, tune)
 * - kConversionFormat: Target media format for conversion
 * - kConversionProps: Conversion-specific properties (resize, quality, colorspace)
 * - kHandlerSubtype: Optional handler subtype (e.g., "av_encoder")
 * - kStreamPrograms: Program information updates
 * - kStreamMetadata: Stream metadata updates
 *
 * Used in StoreEncoderSpecs/LoadEncoderSpecs functions.
 */
static const std::string kEncoderSpecs = "encoder_specs";

/**
 * @brief Encoder name identifier.
 *
 * Name of the encoder to use. Common values:
 * - Video: "h264", "hevc", "vp9", "libopenh264", "h264_nvenc"
 * - Audio: "aac", "libmp3lame", "flac", "opus"
 *
 * Required field in kEncoderSpecs.
 */
static const std::string kEncoderName = "encoder_name";

/**
 * @brief Encoder-specific properties.
 *
 * Map of encoder configuration options. Properties depend on encoder type:
 *
 * Video encoders:
 * - "bitrate": Target bitrate in bits per second
 * - "preset": Encoding preset (e.g., "ultrafast", "fast", "medium", "slow")
 * - "profile": Codec profile (e.g., "baseline", "main", "high")
 * - "tune": Tuning option (e.g., "film", "animation", "zerolatency")
 *
 * Audio encoders:
 * - "bitrate": Target bitrate in bits per second
 * - "sample_rate": Sample rate in Hz
 * - "channels": Number of audio channels
 */
static const std::string kEncoderProps = "encoder_props";

/**
 * @brief Target conversion format.
 *
 * Contains the desired output media format after encoding.
 * Format structure includes video_format and/or audio_format fields.
 *
 * Video format uses conversion::kVideoFormat key with fields:
 * - width: Output width in pixels
 * - height: Output height in pixels
 * - pixel_format: Pixel format (e.g., "yuv420p", "yuv422p")
 * - framerate: Frame rate as XRational
 *
 * Audio format uses conversion::kAudioFormat key with fields:
 * - format: Sample format (e.g., "s16", "flt", "s32")
 * - channels: Number of channels
 * - sample_rate: Sample rate in Hz
 */
static const std::string kConversionFormat = "conversion_format";

/**
 * @brief Conversion-specific properties.
 *
 * Map of properties that control the conversion process.
 * Common properties:
 * - "resize": Enable/disable resizing (bool)
 * - "quality": Conversion quality (0-100 for various filters)
 * - "colorspace": Target colorspace (e.g., "bt709", "bt601", "smpte240m")
 * - "frame_rate": Target frame rate
 * - "deinterlace": Enable/disable deinterlacing (bool)
 *
 * These properties are passed to the conversion filter chain before encoding.
 */
static const std::string kConversionProps = "conversion_props";

/** @} */ // Encoder Specification Constants

/** @name Stream Update Constants */
/** @{ */

/**
 * @brief Stream programs update array.
 *
 * Contains array of XProgram structures to update program information
 * in encoded streams. Used when you want to change or add program metadata
 * (PMT, PCR, program numbers, etc.) during encoding.
 *
 * Array items use program constants:
 * - xprogram::kProgramNum: Program number
 * - xprogram::kProgramId: Program ID
 * - xprogram::kFlags: Program flags
 * - xprogram::kPmtPid: Program Map Table PID
 * - xprogram::kPcrPid: Program Clock Reference PID
 * - xprogram::kPmtVersion: PMT version number
 * - xprogram::kMetadata: Program metadata node
 *
 * Optional in encoder specs. If not specified, programs are copied from source.
 */
static const std::string kStreamPrograms = "stream_programs_update";

/**
 * @brief Stream metadata update node.
 *
 * Map of metadata fields to update in the encoded stream.
 * Replaces or adds metadata to the stream.
 *
 * Common metadata fields:
 * - "title": Stream title
 * - "author": Author/creator name
 * - "copyright": Copyright notice
 * - "comment": Description/comment
 * - "creation_date": Creation date string
 * - "tags": Array of tag strings
 * - Custom fields as needed
 *
 * Optional in encoder specs. If not specified, metadata is copied from source.
 */
static const std::string kStreamMetadata = "stream_metadata_update";

/** @} */ // Stream Update Constants

/** @name Sink Configuration Constants */
/** @{ */

/**
 * @brief Array of sink configurations.
 *
 * Container for all writer sinks in MediaWriterHandler initialization.
 * Each element is a complete sink specification with all required parameters.
 *
 * Structure: Array of sink nodes containing:
 * - kStreamsUids: Array of stream UIDs to capture (empty = all streams)
 * - kCaptureSegment: Time segment to capture (optional)
 * - kDestSpecs: Destination specifications
 * - kFlags: Sink flags (optional)
 *
 * @code
 * "sinks": [
 *   {
 *     "streams_uids": [1100, 1101],
 *     "capture_segment": { ... },
 *     "dest_specs": { ... },
 *     "flags": "kUseUtcTime"
 *   }
 * ]
 * @endcode
 */
static const std::string kSinks = "sinks";

/**
 * @brief Array of stream UIDs for sink.
 *
 * Specifies which streams this sink should capture. Empty array means
 * capture all available streams. Used in StoreWriterSink and LoadWriterSink.
 *
 * @code
 * "streams_uids": [1100, 1101, 1102]  // Capture only these streams
 * "streams_uids": []                    // Capture all streams
 * @endcode
 */
static const std::string kStreamsUids = "streams_uids";

/**
 * @brief Capture segment time range.
 *
 * Defines the time range of media to capture for this sink.
 * Useful for creating segmented outputs or extracting portions of content.
 *
 * Sub-fields:
 * - kSegmentStartSec: Start time in seconds (optional, 0 = beginning)
 * - kSegmentEndSec: End time in seconds (optional, -1 = end of stream)
 * - kSegmentUid: Unique segment identifier (optional, auto-generated if not specified)
 *
 * @code
 * "capture_segment": {
 *   "segment_start_sec": 10.0,
 *   "segment_end_sec": 90.0,
 *   "segment_uid": 1201
 * }
 * @endcode
 */
static const std::string kCaptureSegment = "capture_segment";

/**
 * @brief Segment start time in seconds.
 *
 * Start time of the capture segment relative to the beginning of the stream.
 * Optional field - defaults to 0 (beginning of stream) if not specified.
 */
static const std::string kSegmentStartSec = "segment_start_sec";

/**
 * @brief Segment end time in seconds.
 *
 * End time of the capture segment relative to the beginning of the stream.
 * Optional field - defaults to end of stream if not specified.
 */
static const std::string kSegmentEndSec = "segment_end_sec";

/**
 * @brief Unique segment identifier.
 *
 * Unique identifier for the capture segment. Used to track segments
 * when multiple sinks or multiple segments are created.
 * Optional field - automatically generated if not specified.
 */
static const std::string kSegmentUid = "segment_uid";

/**
 * @brief Destination URL for sink output.
 *
 * Specifies where the encoded media should be written.
 * Supports various protocols and file types:
 *
 * Files: "file:///path/to/output.mp4", "/path/to/output.mp4"
 * RTMP: "rtmp://server/app/stream"
 * HTTP: "http://server/stream.m3u8"
 * Custom protocols as supported by underlying handlers
 *
 * Required field in kDestSpecs.
 */
static const std::string kDestUrl = "dest_url";

/**
 * @brief Maximum sink duration in seconds.
 *
 * Maximum duration for the sink output. Once reached, the sink
 * will automatically close with CloseReason::kMaxDuration.
 *
 * Optional field - no limit if not specified.
 *
 * @code
 * "max_duration_sec": 3600.0  // 1 hour maximum
 * @endcode
 */
static const std::string kMaxDurationSec = "max_duration_sec";

/**
 * @brief Destination specifications container.
 *
 * Wrapper node containing all sink destination-related configuration.
 * Sub-fields include dest URL, duration, properties, handler subtype, and rate control.
 */
static const std::string kDestSpecs = "dest_specs";

/**
 * @brief Destination-specific properties.
 *
 * Map of properties that control how media is written to the destination.
 * Properties depend on the destination type and handler subtype.
 *
 * For file outputs (typically using av_multiplexer):
 * - "format": Container format (e.g., "mp4", "mkv", "webm")
 * - "options": Container-specific options (e.g., "movflags": "faststart")
 * - "muxrate": Target mux rate in bits per second
 *
 * Protocol-specific properties can also be included.
 *
 * Optional in kDestSpecs.
 */
static const std::string kDestProps = "dest_props";

/**
 * @brief Handler subtype for destination.
 *
 * Specifies which handler/multiplexer to use for writing.
 * If not specified, default handler is used (typically "av_multiplexer").
 *
 * Common values:
 * - "av_multiplexer": FFmpeg-based multiplexer (default)
 * - Custom handler subtypes as registered in system
 *
 * Optional in kDestSpecs.
 */
static const std::string kHandlerSubtype = "handler_subtype";

/**
 * @brief Rate control flag for destination.
 *
 * Enables or disables rate control for the sink.
 * When true, the sink attempts to maintain real-time output rate.
 * Auto-enabled for protocol-based destinations (RTMP, HTTP, etc.).
 *
 * For file outputs, typically set to false or depends on implementation.
 *
 * @code
 * "rate_control": true  // Maintain real-time output
 * @endcode
 *
 * Optional in kDestSpecs.
 */
static const std::string kRateControl = "rate_control";

/**
 * @brief Sink behavior flags.
 *
 * Controls sink behavior and operation modes.
 * Flags can be combined using bitwise OR operator.
 *
 * Valid flags (from IWriterSink::Flags enum):
 * - "kNone": No special flags
 * - "kUseUtcTime": Use UTC time instead of media time for timestamps
 * - "kPeekMode": Peek mode - examine data without consuming
 *
 * Represented as string in serialization, parsed back to flags enum.
 *
 * @code
 * "flags": "kUseUtcTime"
 * "flags": "kUseUtcTime|kPeekMode"  // Combined flags
 * @endcode
 */
static const std::string kFlags = "flags";

/** @} */ // Sink Configuration Constants

/** @name Handler Configuration Constants */
/** @{ */

/**
 * @brief Write timeout in milliseconds.
 *
 * Maximum time to wait for write operations to complete before
 * timing out. Used in MediaWriteHandler to control blocking behavior
 * when writing media units to the writer.
 *
 * Default value: 500ms (defined in MediaWriterHandler)
 *
 * @code
 * "write_timeout_msec": 1000  // 1 second timeout
 * @endcode
 */
static const std::string kWriteTimeoutMsec = "write_timeout_msec";

/** @} */ // Handler Configuration Constants

/** @} */ // end of WriterConstants

} // namespace xsdk::xwriter
