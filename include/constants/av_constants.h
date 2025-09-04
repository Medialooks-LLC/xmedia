#pragma once

#include "av_codec_ids.h"

#include <string>

namespace xsdk {

static constexpr std::string_view kAvSourceUid            = "av_source_uid";
static constexpr std::string_view kAvMediaType            = "av_media_type";
static constexpr std::string_view kAvStreamUid            = "av_stream_uid";
static constexpr std::string_view kAvVideoStreamIdx       = "av_video_stream_idx";
static constexpr std::string_view kAvAudioStreamIdx       = "av_audio_stream_idx";
static constexpr std::string_view kAvSubStreamIdx         = "av_sub_stream_idx";
static constexpr std::string_view kAvOptions              = "av_options";
static constexpr std::string_view kAvFormatName           = "av_format_name";
static constexpr std::string_view kAvDeviceClass          = "av_device_class";
static constexpr std::string_view kAvDeviceName           = "av_device_name";
static constexpr std::string_view kAvCorrectStartEndTimes = "correct_start_end_times";
/**
 * @breif Constant used for handling input or output URL. Unlike the old filename field, this field has no
 * length restriction.
 *
 * @par demuxing:
 * set by avformat_open_input(), initialized to an empty
 *             string if url parameter was NULL in avformat_open_input().
 * @par muxing:
 * may be set by the caller before calling avformat_write_header()
 *           (or avformat_init_output() if that is called first) to a string
 *           which is freeable by av_free(). Set to an empty string if it
 *           was NULL in avformat_init_output().
 *
 * @note Freed by libavformat in avformat_free_context().
 */
static constexpr std::string_view kAvOpenUrl = "av_open_url";

static constexpr std::string_view kAvProcessorMode           = "av_processor_mode";
static constexpr std::string_view kAvProcessorMode_Custom    = "avp_custom";
static constexpr std::string_view kAvProcessorMode_Converter = "avp_converter";
static constexpr std::string_view kAvProcessorMode_Mixer     = "avp_mixer";
static constexpr std::string_view kAvProcessorMode_Grid      = "avp_grid";
static constexpr std::string_view kAvProcessor_Overlay       = "avp_overlay";
static constexpr std::string_view kAvProcessor_Stack         = "avp_stack";
static constexpr std::string_view kAvProcessor_Scale         = "avp_scale";
static constexpr std::string_view kAvProcessor_Alpha         = "avp_alpha";
static constexpr std::string_view kAvProcessor_Background    = "avp_background";
static constexpr std::string_view kAvAudioStreamsCount       = "av_audio_streams_count";
static constexpr std::string_view kAvVideoStreamsCount       = "av_video_streams_count";
static constexpr std::string_view kAvFilterGraphDesc         = "av_filter_graph_desc";
static constexpr std::string_view kAvFilterGraphDescIn       = "av_filter_graph_desc_in";
static constexpr std::string_view kAvFilterGraphDescOut      = "av_filter_graph_desc_out";

// 2Think: move to namespace
static constexpr std::string_view kAvScalerName         = "av_scaler_name";
static constexpr std::string_view kAvScalerDefault      = "scale";
static constexpr std::string_view kAvScalerOptions      = "av_scaler_options";
static constexpr std::string_view kAvFrameRateName      = "av_frame_rate_name";
static constexpr std::string_view kAvFrameRateDefault   = "fps";
static constexpr std::string_view kAvFrameRateOptions   = "av_frame_rate_options";
static constexpr std::string_view kAvDeinterlaceName    = "av_deinterlace_name";
static constexpr std::string_view kAvDeinterlaceDefault = "yadif";
static constexpr std::string_view kAvDeinterlaceOptions = "av_deinterlace_options";
static constexpr std::string_view kAvInterlaceName      = "av_interlace_name";
static constexpr std::string_view kAvInterlaceDefault   = "tinterlace";
static constexpr std::string_view kAvInterlaceOptions   = "av_interlace_options";

static constexpr std::string_view kAvFilterGraph_VideoOut = "video_out";
static constexpr std::string_view kAvFilterGraph_AudioOut = "audio_out";

static constexpr std::string_view kAvMediaTypes     = "av_media_types";
static constexpr std::string_view kAvPixelFormats   = "av_pixel_formats";
static constexpr std::string_view kAvColorSpaces    = "av_color_spaces";
static constexpr std::string_view kAvColorRanges    = "av_color_ranges";
static constexpr std::string_view kAvSampleFormats  = "av_sample_formats";
static constexpr std::string_view kAvFrameRates     = "av_frame_rates";
static constexpr std::string_view kAvSampleRates    = "av_sample_rates";
static constexpr std::string_view kAvCodecTags      = "av_codec_tags";
static constexpr std::string_view kAvProfiles       = "av_profiles";
static constexpr std::string_view kAvChannelLayouts = "av_channel_layouts";
static constexpr std::string_view kAvDevices        = "av_devices";
static constexpr std::string_view kAvFormats        = "av_formats";
static constexpr std::string_view kAvCodecs         = "av_codecs";

static const std::string_view kAvCodecName_DefaultV = av_lib::codec_id::kMpeg4;
static const std::string_view kAvCodecName_DefaultA = av_lib::codec_id::kAac;

// Active streams selection values/arrays (for AV modules, e.g. decoders, encoders, muxers)
// check/grab order:
// source uid, program num, media-type, stream pid, stream uid
static constexpr std::string_view kAvStreamUids_Array  = "av_stream_uids";
static constexpr std::string_view kAvProgramNums_Array = "av_program_nums";
static constexpr std::string_view kAvSourceUids_Array  = "av_source_uids";
static constexpr std::string_view kAvStreamPids_Array  = "av_stream_pids";
// For take first suitable
static constexpr std::string_view kAvGrab = "grab";
// Only for demux
static constexpr std::string_view kAvStreamIdxs_Array  = "av_stream_indexes";
static constexpr std::string_view kAvProgramIdxs_Array = "av_program_indexes";

// Demux input buffer properties
static constexpr std::string_view kInputBufferBytes_Min = "input_buffer_bytes_min";
static constexpr std::string_view kInputBufferBytes_Max = "input_buffer_bytes_max";

// Rate control
static constexpr std::string_view kAvRateControl = "av_rate_control";

static constexpr std::string_view kAvCorrectPts       = "av_correct_pts";
static constexpr std::string_view kAvCorrectMaxGapSec = "av_correct_pts_max_gap_sec";

// For pass-through
static constexpr std::string_view kAvBypassNotSuitable = "av_bypass_not_suitable";

// Stream threads
static constexpr std::string_view kAvStreamThreads = "av_stream_threads";

// For decode streams in AV Context
static constexpr std::string_view kAvSrcDecodeVid = "av_src_decode_vid";
static constexpr std::string_view kAvSrcDecodeAud = "av_src_decode_aud";
static constexpr std::string_view kAvSrcDecodeSub = "av_src_decode_sub";

// Mux specific properites
// Priority: Array of id/idx (see above), specified count, total count, time
static constexpr std::string_view kAvMuxAudioStreamsCount = "av_mux_audio_streams_count";
static constexpr std::string_view kAvMuxVideoStreamsCount = "av_mux_video_streams_count";
static constexpr std::string_view kAvMuxSubStreamsCount   = "av_mux_sub_streams_count";
static constexpr std::string_view kAvMuxStreamsCount      = "av_mux_streams_count";
static constexpr std::string_view kAvMuxWaitTimeMsec      = "av_mux_wait_time_msec";

static constexpr std::string_view kAvMuxTS_Rate_Auto     = "av_mux_ts_rate_auto";
static constexpr std::string_view kAvMuxTS_Rate_Overhead = "av_mux_ts_rate_overhead";
static constexpr std::string_view kAvMuxLive             = "av_mux_live";

static constexpr std::string_view kAvMuxCorrectPts       = "av_mux_correct_pts";
static constexpr std::string_view kAvMuxCorrectMaxGapSec = "av_mux_correct_max_gap_sec";
static constexpr std::string_view kAvMuxCorrectStartPts  = "av_mux_correct_start_pts";
static constexpr std::string_view kAvMuxCloseOnEof       = "av_mux_close_on_eof";

static constexpr std::string_view kAvCodec_UseStreamTimebase = "av_codec_use_stream_timebase";

static constexpr std::string_view kAvInSec         = "in";
static constexpr std::string_view kAvOutSec        = "out";
static constexpr std::string_view kSegmentUid      = "segment_uid";
static constexpr std::string_view kAvDurationSec   = "duration";
static constexpr std::string_view kAvLoop          = "loop";
static constexpr std::string_view kAvPosSec        = "pos";
static constexpr std::string_view kAvStreamForSeek = "stream_for_seek";
static constexpr std::string_view kAvFlush         = "flush";
static constexpr std::string_view kAvEOF           = "EOF";
static constexpr std::string_view kAvEOS           = "EOS";

// Format properties
// TODO: move format_context namespace ?
static constexpr std::string_view kAvFormatDesc = "format_desc";
static constexpr std::string_view kAvCodecDesc  = "codec_desc";

static constexpr std::string_view kAvContext_Node = "av_context";
static constexpr std::string_view kAvStream_Node  = "av_stream";
static constexpr std::string_view kAvProgram_Node = "av_program";

static constexpr std::string_view kAvStreams_Array = "av_streams";

static constexpr std::string_view kAvCodecParameters = "av_codec_parameters";
static constexpr std::string_view kAvMuxrate         = "muxrate";

// Common names
static constexpr std::string_view kVideo = "video";

static constexpr std::string_view kAudio        = "audio";
static constexpr std::string_view kBitPerSample = "bits_per_sample";

static constexpr std::string_view kDevices        = "devices";
static constexpr std::string_view kSelectedDevice = "selected_device";
static constexpr std::string_view kEnabled        = "enabled";
// HW Accell
static constexpr std::string_view kHwDevice = "hw_device";

} // namespace xsdk
