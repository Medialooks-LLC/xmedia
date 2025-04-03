#pragma once

#include <string>
#include <string_view>

namespace xsdk {

namespace xmedia {

    static constexpr std::string_view kWrappers  = "wrappers";
    static constexpr std::string_view kContainer = "container";
} // namespace xmedia

namespace xmedia::handlers {
    // av_lib based handlers registration name
    static const std::string kAvInputDevice   = "av_input_device";
    static const std::string kAvOutputDevice  = "av_output_device";
    static const std::string kAvDemultiplexer = "av_demultiplexer";
    static const std::string kAvMultiplexer   = "av_multiplexer";
    static const std::string kAvDecoder       = "av_decoder";
    static const std::string kAvEncoder       = "av_encoder";
    static const std::string kAvProcessor     = "av_processor";
    static const std::string kAvConverter     = "av_converter";
    // specicial handlers
    static const std::string kNdiSource    = "ndi_source";
    static const std::string kNdiRenderer  = "ndi_renderer";
    static const std::string kVsdkSource   = "vsdk_source";
    static const std::string kVsdkRenderer = "vsdk_renderer";
    // Containers
    static const std::string kFreeContainer     = "free_container";
    static const std::string kSerialContainer   = "serial_container";
    static const std::string kParallelContainer = "parallel_container";
    static const std::string kSelectorContainer = "selector_container";
    // Complex handlers
    static const std::string kMediaPlayer   = "media_player";
    static const std::string kMediaPlaylist = "media_playlist";
} // namespace xmedia::handlers

namespace xmedia::wrappers {
    static const std::string kActiveHandler = "active_handler";
    static const std::string kMultistream   = "multistream"; // 2Think
    static const std::string kAvConverter   = "av_converter";
    static const std::string kRateControl   = "rate_control";
    static const std::string kRecreation    = "recreation";
    static const std::string kFixedSegment  = "fixed_segment";
} // namespace xmedia::wrappers

namespace xmedia::links {
    static constexpr std::string_view kLinks         = "links";
    static constexpr std::string_view kExclusiveMode = "exclusive_mode";

    // Link props
    static constexpr std::string_view kLinkProps        = "link_props";
    static constexpr std::string_view kMinDeqSize       = "min_deq_size";
    static constexpr std::string_view kMaxDeqSize       = "max_deq_size";
    static constexpr std::string_view kWaitForFreeMsec  = "wait_for_free_msec";
    static constexpr std::string_view kOverflowBehavior = "overflow_behavior";

    // Link details
    static const std::string kLinkDetails = "link_details";

    // Filtering
    static constexpr std::string_view kFilter       = "filter";
    static constexpr std::string_view kMaxStreams   = "max_streams";
    static constexpr std::string_view kMaxVideo     = "max_video";
    static constexpr std::string_view kMaxAudio     = "max_audio";
    static constexpr std::string_view kMaxSubtitles = "max_subtitles";
    static constexpr std::string_view kMaxPrograms  = "max_programs";

    // TODO: Check same props in other contstant
    static constexpr std::string_view kObjectsType    = "objects_type"; // ?
    static constexpr std::string_view kProgramNumbers = "program_numbers";
    static constexpr std::string_view kStreamUids     = "stream_uids";
    static constexpr std::string_view kStreamPids     = "stream_pids";

} // namespace xmedia::links

namespace statistics {
    static constexpr std::string_view kInputLinks  = "input_links";
    static constexpr std::string_view kOutputLinks = "output_links";
    static constexpr std::string_view kEvents      = "events";

} // namespace statistics

namespace xmedia::config {

    // For config store/load
    static const std::string kType      = "type";
    static const std::string kSubtype   = "subtype";
    static const std::string kName      = "name";
    static const std::string kInitProps = "init_props";
    static const std::string kOpenUrl   = "open_url";

    static const std::string kWrappers       = "wrappers";
    static const std::string kWrapperType    = "wrapper_type";
    static const std::string kLinks          = "links";
    static const std::string kLinkSource     = "link_source"; // "source_name" ?
    static const std::string kSinkLinks      = "sink_links";  // "source_name" ?
    static const std::string kLinkDetails    = "link_details";
    static const std::string kContainerItems = "container_items";
} // namespace xmedia::config

namespace xmedia::conversion {
    static const std::string kNoFormatChanges         = "no_format_changes";
    static const std::string kDiscardForFormatChanges = "discard_for_format_changes";
    static const std::string kBypassOtherTypes        = "bypass_other_types";
    static const std::string kAudioSamplesPerFrame    = "audio_samples_per_frame"; // Better name ?

    static const std::string kAudioFormat = "audio_format";
    static const std::string kVideoFormat = "video_format";
} // namespace xmedia::conversion

namespace xmedia::recreation {
    static const std::string kInternalMinSec = "interval_min_sec";
    static const std::string kInternalMaxSec = "interval_max_sec";
    static const std::string kInternalsSteps = "intervals_steps";
} // namespace xmedia::recreation

} // namespace xsdk
