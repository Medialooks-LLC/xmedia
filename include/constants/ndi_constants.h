#pragma once

#include <string>

namespace xsdk::ndi {
// NDI Constants
static const std::string k16Bits       = "ndi_16bits";
static const std::string kRgb          = "ndi_rgb";
static const std::string kDeinterlace  = "ndi_deinterlace";
static const std::string kLowBandwidth = "ndi_low_bandwidth";
static const std::string kCorrectPts   = "ndi_correct_pts";

static const std::string kGroups     = "ndi_groups";
static const std::string kExtraIP    = "ndi_extra_ip";
static const std::string kShowLocal  = "ndi_show_local";
static const std::string kSendAsync  = "ndi_send_async";
static const std::string kClockVideo = "ndi_clock_video";
static const std::string kClockAudio = "ndi_clock_audio";
static const std::string kVideo      = "ndi_video";
static const std::string kAudio      = "ndi_audio";
static const std::string kFailover   = "ndi_failover";

static const std::string kConnections = "ndi_connections";
static const std::string kUrlAddress  = "ndi_url_address";

static const std::string kMetadata = "ndi_metadata";
static const std::string kProduct  = "ndi_product";

} // namespace xsdk::ndi
