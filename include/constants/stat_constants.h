#pragma once

#include <string>

namespace xsdk::stat {

static constexpr std::string_view kStatEnabled    = "stat_enabled";
static constexpr std::string_view kStatUpdateMsec = "stat_update_msec";
static constexpr std::string_view kStatPerfMsec   = "stat_perf_msec";

// media streams counters
static constexpr std::string_view kDataFlowInput  = "dataflow_input";
static constexpr std::string_view kDataFlowOutput = "dataflow_output";

static constexpr std::string_view kState         = "state";
static constexpr std::string_view kFailed        = "failed";
static constexpr std::string_view kSocketStat    = "socket_stat";
static constexpr std::string_view kInput         = "input";
static constexpr std::string_view kInputNested   = "input_nested";
static constexpr std::string_view kInputDropped  = "input_dropped";
static constexpr std::string_view kOutput        = "output";
static constexpr std::string_view kOutputPush    = "output_push";
static constexpr std::string_view kOutputNested  = "output_nested";
static constexpr std::string_view kOutputDropped = "output_dropped";
static constexpr std::string_view kCommand       = "command";
static constexpr std::string_view kWrite         = "write";
static constexpr std::string_view kSync          = "sync";
static constexpr std::string_view kReadMsec      = "read_msec";

static constexpr std::string_view kRecent         = "recent";
static constexpr std::string_view kAvg            = "avg";
static constexpr std::string_view kMin            = "min";
static constexpr std::string_view kMax            = "max";
static constexpr std::string_view kStdDev         = "stddev";
static constexpr std::string_view kDevMinCounters = "dev_min_counters";
static constexpr std::string_view kDevMaxCounters = "dev_max_counters";

static constexpr std::string_view kIntervalMsec      = "interval_msec";
static constexpr std::string_view kKbps              = "kbps";
static constexpr std::string_view kPacketSizeBytes   = "packet_size_bytes";
static constexpr std::string_view kDtsSec            = "dts_sec";
static constexpr std::string_view kPtsSec            = "pts_sec";
static constexpr std::string_view kPtsOffsetMsec     = "pts_offset_msec";
static constexpr std::string_view kPtsIntervalMsec   = "pts_interval_msec";
static constexpr std::string_view kDtsIntervalMsec   = "dts_interval_msec";
static constexpr std::string_view kIdrIntervalFrames = "idr_interval_frames";
static constexpr std::string_view kSegment           = "segment";

static constexpr std::string_view kTimeouts           = "timeouts";
static constexpr std::string_view kReads              = "reads";
static constexpr std::string_view kBufferBytes        = "buffer_bytes";
static constexpr std::string_view kBufferPackets      = "buffer_packets";
static constexpr std::string_view kBufferMSec         = "buffer_msec";
static constexpr std::string_view kBuffersFullCounter = "buffers_full_counter";
static constexpr std::string_view kDeqBuffers         = "deq_buffers";
static constexpr std::string_view kUnderflows         = "underflows";
static constexpr std::string_view kOverflows          = "overflows";
static constexpr std::string_view kOverflowWait       = "overflow_wait";
static constexpr std::string_view kOverflowBytes      = "overflow_bytes";
static constexpr std::string_view kOverflowPackets    = "overflow_packets";
static constexpr std::string_view kFlushes            = "flushes";
static constexpr std::string_view kFlushedBytes       = "flushed_bytes";
static constexpr std::string_view kFlushedPackets     = "flushed_packets";
static constexpr std::string_view kBufferMin          = "buffer_min";
static constexpr std::string_view kBufferMax          = "buffer_max";
static constexpr std::string_view kDelay              = "delay_msec";
static constexpr std::string_view kMediaGet           = "media_get";
static constexpr std::string_view kMediaSubscribe     = "media_subscribe";
static constexpr std::string_view kEncodeMsec         = "encode_msec";
static constexpr std::string_view kEncodeProps        = "encode_props";
static constexpr std::string_view kSubscribersUids    = "subscribers_uids";

static constexpr std::string_view kRCWait  = "rc_wait";
static constexpr std::string_view kRCLate  = "rc_late";
static constexpr std::string_view kRCGap   = "rc_gap";
static constexpr std::string_view kRCDev   = "rc_dev"; // deviation/inaccuracy
static constexpr std::string_view kRCReset = "rc_reset";

static constexpr std::string_view kStream       = "stream";
static constexpr std::string_view kStreamBypass = "stream_bypass";
static constexpr std::string_view kFormat       = "format";
static constexpr std::string_view kFormatAudio  = "format_audio";
static constexpr std::string_view kFormatVideo  = "format_video";

static constexpr std::string_view kProcessInPerf  = "process_in_perf";
static constexpr std::string_view kProcessOutPerf = "process_out_perf";

} // namespace xsdk::stat
