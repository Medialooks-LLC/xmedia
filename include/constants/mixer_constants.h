#pragma once

#include <string>

// Mixer Constants
namespace xsdk::xmixer {

static const std::string kBackground = "background";
static const std::string kOverlays   = "overlays";

// constants related to sources
static const std::string kSources         = "sources";
static const std::string kSourceUid       = "source_uid";
static const std::string kSourceType      = "source_type";
static const std::string kCurrentMedia    = "current_media";
static const std::string kCurrentPosition = "current_position";

static const std::string kSourceFlags = "source_flags";

namespace source_flags {
    static const std::string kAutoRemove      = "auto_remove";
    static const std::string kBackground      = "background";
    static const std::string kLoop            = "loop";
    static const std::string kShowLastFrame   = "show_last_frame";
    static const std::string kMixMinusEnabled = "mix_minus_enabled";
} // namespace source_flags

// Source types
namespace source_types {
    constexpr std::string_view kRegular    = "regular";
    constexpr std::string_view kBackground = "background";
} // namespace source_types

namespace state {
    static const std::string kClosed  = "closed";
    static const std::string kReady   = "ready";
    static const std::string kRunning = "running";
} // namespace state

} // namespace xsdk::xmixer
