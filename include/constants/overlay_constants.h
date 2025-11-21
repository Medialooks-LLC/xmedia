#pragma once

#include <string>

// Overlay Constants
namespace xsdk::xoverlay {

static const std::string kOverlayProps  = "overlay_props";
static const std::string kSrcRect       = "src_rect";
static const std::string kDstRect       = "dst_rect";
static const std::string kLocation      = "location";
static const std::string kX             = "x";
static const std::string kY             = "y";
static const std::string kWidth         = "width";
static const std::string kHeight        = "height";
static const std::string kAnchor        = "anchor";
static const std::string kUnits         = "units";
static const std::string kAlphaBlending = "alpha_blending";
static const std::string kAlphaValue    = "alpha_value";
static const std::string kFlags         = "flags";

static const std::string kOverlayBlock = "overlay_block";
static const std::string kAudioLevel   = "audio_level";
static const std::string kBaseLevel    = "base_level";
static const std::string kGainMode     = "gain_mode";

static const std::string kBlockName      = "block_name";
static const std::string kProps          = "props";
static const std::string kType           = "type";
static const std::string kState          = "state";
static const std::string kDisplayFrame   = "display_frame";
static const std::string kMediaSourceUid = "media_source_uid";

static const std::string kOverlayGroup = "overlay_group";
static const std::string kBlocks       = "blocks";
static const std::string kBlock        = "block"; // 2Think is it necessary?

namespace audio_level_mode {
    static const std::string kFixed = "fixed";
    static const std::string kMuted = "muted";
    static const std::string kAuto  = "auto";
} // namespace audio_level_mode

namespace block_type {
    static const std::string kRegular = "regular";
    static const std::string kGroup   = "group";
} // namespace block_type

namespace block_state {
    static const std::string kEnabled  = "enabled";
    static const std::string kPaused   = "paused";
    static const std::string kDisabled = "disabled";
} // namespace block_state

} // namespace xsdk::xoverlay
