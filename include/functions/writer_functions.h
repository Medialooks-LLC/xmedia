#pragma once

#include "../interfaces/media_writer_interfaces.h"
#include "../xmedia_structures.h"

namespace xsdk {

// 2Think: Move XProgram serialization to separate file
namespace xprogram {
    /**
     * @brief Convert XProgram structure to INode representation.
     *
     * This function serializes an XProgram structure into an INode format, which can be
     * used for persistent storage or transmission. The resulting INode contains all
     * the program information in a hierarchical structure.
     *
     * @param _program The XProgram structure to convert
     * @param _dest Optional destination node. If provided, the data will be stored
     *             in this node rather than creating a new one. If empty, a new
     *             INode will be created.
     * @return INode::SPtr Shared pointer to the INode containing the serialized program
     *         data. If a destination was provided, returns the same node.
     *
     * @see LoadXProgram
     */
    INode::SPtr StoreXProgram(const XProgram& _program, INode::SPtr&& _dest = {});

    /**
     * @brief Load XProgram structure from INode representation.
     *
     * This function deserializes an INode containing XProgram data back into the
     * XProgram structure. The INode should have the same structure as created by
     * StoreXProgram. This allows program data to be loaded from persistent storage
     * or received from external sources.
     *
     * @param _from The source INode containing the program data to load
     * @return xbase::XResult<XProgram> Result containing either the loaded XProgram
     *         structure on success, or an error code on failure. The error may occur
     *         if the node structure doesn't match expected format or required fields
     *         are missing.
     *
     * @example Node structure:
     * @code
     * {
     *     "program_num": 1,
     *     "program_id": 4097,
     *     "flags": 0,
     *     "pmt_pid": 256,
     *     "pcr_pid": 257,
     *     "pmt_version": 1,
     *     "metadata": { ... }
     * }
     * @endcode
     *
     * @see StoreXProgram
     */
    xbase::XResult<XProgram> LoadXProgram(const INode::SPtrC& _from);
} // namespace xprogram

namespace xwriter {
    /**
     * @brief Convert EncoderSpecs structure to INode representation.
     *
     * This function serializes an EncoderSpecs structure into an INode format, preserving
     * all encoder configuration details including converter settings, metadata, and
     * program information. This allows encoder specifications to be saved for later use
     * or shared between different components.
     *
     * @param _encoder_specs The EncoderSpecs structure to convert
     * @param _dest Optional destination node. If provided, the data will be stored
     *             in this node rather than creating a new one. If empty, a new
     *             INode will be created.
     * @return INode::SPtr Shared pointer to the INode containing the serialized encoder
     *         specifications. If a destination was provided, returns the same node.
     *
     * @see LoadEncoderSpecs
     */
    INode::SPtr StoreEncoderSpecs(const IMediaStreamEncoders::EncoderSpecs& _encoder_specs, INode::SPtr&& _dest = {});

    /**
     * @brief Load EncoderSpecs structure from INode representation.
     *
     * This function deserializes an INode containing encoder specifications back into
     * the EncoderSpecs structure. The INode should have the same structure as created
     * by StoreEncoderSpecs. This allows encoder configurations to be loaded from
     * persistent storage or received from external sources.
     *
     * @param _from The source INode containing the encoder specifications to load
     * @return xbase::XResult<IMediaStreamEncoders::EncoderSpecs> Result containing
     *         either the loaded EncoderSpecs structure on success, or an error code
     *         on failure. The error may occur if the node structure doesn't match
     *         expected format or required fields are missing.
     *
     * @example Node structure:
     * @code
     * {
     *   "conversion_format": {
     *       "video_format": {
     *           "height": 1080,
     *           "pixel_format": "yuv420p",
     *           "type": "Video",
     *           "width": 1920
     *       }
     *   },
     *   "conversion_props": {
     *       "colorspace": "bt709",
     *       "quality": 85,
     *       "resize": true
     *   },
     *   "encoder_name": "h264",
     *   "encoder_props": {
     *       "bitrate": 2000000,
     *       "preset": "medium",
     *       "profile": "main",
     *       "tune": "film"
     *   },
     *   "handler_subtype": "av_encoder",
     *   "stream_metadata_update": {
     *       "author": "MediaLooks Unit Test",
     *       "copyright": "© 2023",
     *       "creation_date": "2023-01-01",
     *       "tags": ["test", "encoder", "serialization"],
     *       "title": "Test Stream"
     *   },
     *   "stream_programs_update": [...]
     *   }
     * }
     * @endcode
     *
     * @see StoreEncoderSpecs
     */
    xbase::XResult<IMediaStreamEncoders::EncoderSpecs> LoadEncoderSpecs(const INode::SPtrC& _from);

    /**
     * @brief Convert IWriterSink configuration to INode representation.
     *
     * This function serializes an IWriterSink configuration into an INode format,
     * preserving all the necessary parameters for recreating the sink later.
     * This includes stream UIDs, capture segment details, destination specifications,
     * and sink flags.
     *
     * @param _sink The IWriterSink to serialize configuration from
     * @param _dest Optional destination node. If provided, the data will be stored
     *             in this node rather than creating a new one. If empty, a new
     *             INode will be created.
     * @return INode::SPtr Shared pointer to the INode containing the serialized sink
     *         configuration. If a destination was provided, returns the same node.
     *
     * @see LoadWriterSink
     */
    INode::SPtr StoreWriterSink(const IWriterSink::SPtrC& _sink, INode::SPtr&& _dest = {});

    /**
     * @brief Structure containing all writer sink parameters loaded from INode.
     *
     * This structure holds all the parameters needed to create a writer sink,
     * including stream UIDs, destination specifications, flags, and capture segment.
     */
    struct WriterSinkParamsData {
        std::set<xbase::Uid>   streams_uids;
        IWriterSink::DestSpecs dest_specs;
        IWriterSink::Flags     flags;
        XSegment               capture_segment;
    };

    /**
     * @brief Load writer sink parameters from INode representation.
     *
     * This function deserializes an INode containing sink configuration and extracts
     * all parameters needed to recreate a writer sink. This includes stream UIDs,
     * destination specifications, flags, and capture segment details.
     *
     * @param _from The source INode containing the sink configuration to load
     * @return xbase::XResult<WriterSinkParamsData> Result containing either the loaded
     *         sink parameters on success, or an error code on failure.
     *
     * @example Node structure:
     * @code
     * {
     *   "streams_uids": [1100, 1101],
     *   "capture_segment": {
     *       "segment_start_sec": 0.0,
     *       "segment_end_sec": 90.0,
     *       "segment_uid": 1201
     *   },
     *   "dest_specs": {
     *       "dest_url": "file:///path/to/output.mp4",
     *       "max_duration_sec": 3600.0,
     *       "dest_props": {...},
     *       "handler_subtype": "av_multiplexer",
     *       "rate_control": true
     *   },
     *   "flags": "kUseUtcTime"
     * }
     * @endcode
     *
     * @see StoreWriterSink
     */
    xbase::XResult<WriterSinkParamsData> LoadWriterSinkParams(const INode::SPtrC& _from);

    /**
     * @brief Create IWriterSink from serialized INode using a writer instance.
     *
     * This function deserializes an INode containing sink configuration and creates
     * a new IWriterSink instance with those parameters. The INode should have the
     * same structure as created by StoreWriterSink.
     *
     * @param _writer The writer instance to create the sink in
     * @param _from The source INode containing the sink configuration to load
     * @return xbase::XResult<IWriterSink::SPtr> Result containing either the new
     *         IWriterSink instance on success, or an error code on failure.
     *
     * @example Node structure:
     * @code
     * {
     *   "streams_uids": [1100, 1101],
     *   "capture_segment": {
     *       "segment_start_sec": 0.0,
     *       "segment_end_sec": 90.0,
     *       "segment_uid": 1201
     *   },
     *   "dest_specs": {
     *       "dest_url": "file:///path/to/output.mp4",
     *       "max_duration_sec": 3600.0,
     *       "dest_props": {...},
     *       "handler_subtype": "av_multiplexer",
     *       "rate_control": true
     *   },
     *   "flags": "kUseUtcTime"
     * }
     * @endcode
     *
     * @see StoreWriterSink
     */
    xbase::XResult<IWriterSink::SPtr> LoadWriterSink(const IWriterSinks::SPtr& _writer, const INode::SPtrC& _from);

    /**
     * @brief Extract stream UIDs from sink configuration node.
     *
     * This function extracts only the stream UIDs from a sink configuration node,
     * without parsing any other sink parameters. If the streams_uids field is missing
     * or invalid, returns an empty set (which means "all streams" similar to default sink).
     *
     * @param _from The source INode containing the sink configuration
     * @return std::set<xbase::Uid> Set of stream UIDs. Empty set means all streams.
     */
    std::set<xbase::Uid> ExtractSinkStreamsUids(const INode::SPtrC& _from);

    /**
     * @brief Convert CloseReason enum to human-readable string.
     *
     * This function converts an IWriterSink::CloseReason enum value to a
     * human-readable string representation that describes the reason for a sink closure.
     * The returned strings are more descriptive than the enum names and provide
     * additional context for debugging and logging purposes.
     *
     * @param _reason The CloseReason enum value to convert
     * @return std::string Human-readable string representation of the close reason
     */
    std::string ToString(IWriterSink::CloseReason _reason);
} // namespace xwriter

} // namespace xsdk
