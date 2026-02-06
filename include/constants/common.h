#pragma once

#include <string>

namespace xsdk {

// Named fields
static constexpr std::string_view kCount         = "count";
static constexpr std::string_view kCounter       = "counter";
static constexpr std::string_view kDetails       = "details";
static constexpr std::string_view kDescription   = "description";
static constexpr std::string_view kError         = "error";
static constexpr std::string_view kErrorCode     = "error_code";
static constexpr std::string_view kErrorName     = "error_name";
static constexpr std::string_view kErrorCategory = "error_category";
static constexpr std::string_view kEvent         = "event";
static constexpr std::string_view kResult        = "result";
static constexpr std::string_view kErrorSource   = "error_source";
static constexpr std::string_view kSuccess       = "success";
static constexpr std::string_view kCode          = "code";
static constexpr std::string_view kCategory      = "category";
static constexpr std::string_view kStatus        = "status";
static constexpr std::string_view kQuit          = "quit";
static constexpr std::string_view kInProgress    = "in_progress";
static constexpr std::string_view kStarted       = "started";
static constexpr std::string_view kSucceeded     = "succeeded";
static constexpr std::string_view kFailed        = "failed";
static constexpr std::string_view kApplied       = "applied";
static constexpr std::string_view kXResult       = "xres";
static constexpr std::string_view kAdded         = "added";
static constexpr std::string_view kRemoved       = "removed";
static constexpr std::string_view kReplaced      = "replaced";
static constexpr std::string_view kUpdated       = "updated";
static constexpr std::string_view kType          = "type";
static constexpr std::string_view kName          = "name";
static constexpr std::string_view kDest          = "dest";
static constexpr std::string_view kParameters    = "parameterts";
static constexpr std::string_view kMetadata      = "metadata";
static constexpr std::string_view kPath          = "path";
static constexpr std::string_view kTimestamp     = "timestamp";
static constexpr std::string_view kClockTime     = "clock_time";
static constexpr std::string_view kValues        = "values";
static constexpr std::string_view kValue         = "value";
static constexpr std::string_view kDepth         = "depth";
static constexpr std::string_view kStructure     = "structure";
static constexpr std::string_view kPos           = "pos";
static constexpr std::string_view kFinished      = "finished";
static constexpr std::string_view kConnected     = "connected";
static constexpr std::string_view kRetransmit    = "retransmit";
static constexpr std::string_view kConnecting    = "connecting";
static constexpr std::string_view kDefault       = "default";
static constexpr std::string_view kFlags         = "flags";
static constexpr std::string_view kRanges        = "ranges";
static constexpr std::string_view kMin           = "min";
static constexpr std::string_view kMax           = "max";
static constexpr std::string_view kAuto          = "auto";
static constexpr std::string_view kCapabilities  = "capabilities";
static constexpr std::string_view kHelp          = "help";
static constexpr std::string_view kForce         = "force";
static constexpr std::string_view kStaticOptions = "static_options";
static constexpr std::string_view kFull          = "full";
// static constexpr std::string_view kFilter        = "filter";
static constexpr std::string_view kMessageName  = "message_name";
static constexpr std::string_view kSingleThread = "single_thread";
static constexpr std::string_view kProtocol     = "protocol";
static constexpr std::string_view kConnectType  = "connect_type";
static constexpr std::string_view kLog          = "log";
static constexpr std::string_view kAccess       = "access";
// static constexpr std::string_view kActive       = "active";
static constexpr std::string_view kGateway     = "gateway";
static constexpr std::string_view kUnavailable = "unavailable";
static constexpr std::string_view kPing        = "ping";
static constexpr std::string_view kKeepAlive   = "keep_alive";
static constexpr std::string_view kAddress     = "address";
static constexpr std::string_view kPublicIP    = "public_ip";
static constexpr std::string_view kUserData    = "user_data";
static constexpr std::string_view kFlush       = "flush";
static constexpr std::string_view kLinkUid     = "link_uid";

static constexpr std::string_view kMedia = "media";

static constexpr std::string_view kIndex = "index";
static constexpr std::string_view kOrder = "order";

static constexpr std::string_view kReason   = "reason";
static constexpr std::string_view kPrevious = "previous";
static constexpr std::string_view kCurrent  = "current";

static constexpr std::string_view kReconnect     = "reconnect";
static constexpr std::string_view kReconnectMsec = "reconnect_msec";

static constexpr std::string_view kState        = "state";
static constexpr std::string_view kFromState    = "from_state";
static constexpr std::string_view kStateChanges = "state_changes";

static constexpr std::string_view kFrom = "from";
static constexpr std::string_view kTo   = "to";

static constexpr std::string_view kMediaState = "media_state";

static constexpr std::string_view kPacketsRead  = "packets_read";
static constexpr std::string_view kBytesRead    = "bytes_read";
static constexpr std::string_view kPacketsWrite = "packets_write";
static constexpr std::string_view kBytesWrite   = "bytes_write";
static constexpr std::string_view kThreads      = "threads";

// Stream types
static constexpr std::string_view kVideo    = "video";
static constexpr std::string_view kSubtitle = "subtitle";
static constexpr std::string_view kAudio    = "audio";
static constexpr std::string_view kAVMuxed  = "av_muxed";
static constexpr std::string_view kAVSMuxed = "avs_muxed";

} // namespace xsdk
