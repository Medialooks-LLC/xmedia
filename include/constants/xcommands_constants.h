#pragma once

#include <string>

namespace xsdk::xcommands {

namespace params {
    static const std::string kStopAtError = "stop_at_error";
}

namespace dispatcher {
    static const std::string kDispatchCancel = "dispatch_cancel";
    // TODO: dispatcher Statistics
} // namespace dispatcher

namespace container_scheme {
    static const std::string kItemInsert          = "item_insert";
    static const std::string kTargetContainerMode = "target_container_mode";
    static const std::string kInsertAt            = "insert_at";
    static const std::string kItemName            = "item_name";
    static const std::string kItemIdx             = "item_idx";

    static const std::string kItemGet  = "item_get";
    static const std::string kItemDesc = "item_desc";

    static const std::string kItemsGet = "items_get";

    static const std::string kItemRemove = "item_remove";
    static const std::string kItemsClear = "items_clear";

} // namespace container_scheme

namespace links_scheme {
    static const std::string kLinkAdd = "link_add";
    // static const std::string kFromName      = "from_name";
    static const std::string kUpdateExisted = "update_existed";

    static const std::string kLinkRemove = "link_remove";
    static const std::string kLinksCount = "links_count";
} // namespace links_scheme

namespace media_handler {
    static const std::string kInit     = "init";
    static const std::string kClose    = "close";
    static const std::string kStatus   = "status";
    static const std::string kMediaGet = "media_get";
    static const std::string kStatGet  = "stat_get";

    static const std::string kPeekMedia      = "peek_media";
    static const std::string kKeyFrame       = "key_frame";
    static const std::string kTimeoutMsec    = "timeout_msec";
    static const std::string kTypesMask      = "types_mask";
    static const std::string kAfterTimestamp = "after_time";
    static const std::string kStreamUid      = "stream_uid";
    static const std::string kHints          = "hints";
    static const std::string kStreamName     = "stream_name";
    static const std::string kSegment        = "segment";
    static const std::string kTime           = "time";

    static const std::string kWithStreamProps = "with_stream_props";
    static const std::string kSide            = "side";

    static const std::string kFrameRate = "frame_rate";
    static const std::string kNum       = "num";
    static const std::string kDen       = "den";

    static const std::string kConnectTimeoutMsec = "connect_timeout_msec";

    static const std::string kUserMetadata  = "user_metadata";
    static const std::string kLoopOffsetSec = "loop_offset_sec";
} // namespace media_handler

namespace playlist {
    static const std::string kPlaylistLoad       = "playlist_load";
    static const std::string kPlaylistItemAdd    = "playlist_item_add";
    static const std::string kPlaylistItemGet    = "playlist_item_get";
    static const std::string kPlaylistItemRemove = "playlist_item_remove";
    static const std::string kBackgroundSet      = "background_set";
    static const std::string kBackgroundGet      = "background_get";

    static const std::string kPlaylistItemsGet = "playlist_items_get";

    static const std::string kPlaylist      = "playlist";
    static const std::string kPlaylistProps = "playlist_props";
    static const std::string kPlaylistItems = "playlist_items";
    static const std::string kPlaylistItem  = "playlist_item";
    static const std::string kBackground    = "background";

    static const std::string kUid      = "uid";
    static const std::string kSplitUid = "split_uid";

    static const std::string kMedia     = "media";
    static const std::string kOpenUrl   = "open_url";
    static const std::string kOpenHints = "open_hints";

    static const std::string kItemProps   = "play_props"; // TODO: fix name or value
    static const std::string kItemPos     = "item_pos";
    static const std::string kPosInSec    = "pos_in_sec";
    static const std::string kSwitchProps = "switch_props";

    static const std::string kPin         = "pin";
    static const std::string kBreak       = "break";
    static const std::string kFixedPosSec = "fixed_pos_sec";

    static const std::string kInSec       = "in_sec";
    static const std::string kOutSec      = "out_sec";
    static const std::string kDurationSec = "duration_sec";

} // namespace playlist

namespace playlist_player {
    static const std::string kPlaybackStart    = "playback_start";
    static const std::string kPlaybackStop     = "playback_stop";
    static const std::string kPlaybackPause    = "playback_pause";
    static const std::string kPlaybackContinue = "playback_continue";
    static const std::string kJumpToTime       = "jump_to_time";
    static const std::string kJumpToItem       = "jump_to_item";

    // argument names
    static const std::string kStartTime      = "start_time";
    static const std::string kPlayParams     = "play_params";
    static const std::string kContinueAtTime = "continue_at_time";
    // For play params
    static const std::string kLoopEnabled     = "loop_enabled";
    static const std::string kLoopDurationSec = "loop_duration_sec";

    // returned value names
    static const std::string kStatus                 = "status";
    static const std::string kClockTimestamp         = "clock_timestamp";
    static const std::string kPlaylistStartTimestamp = "playlist_start_timestamp";
    static const std::string kTimesInPlaylistSec     = "time_in_playlist_sec";
    static const std::string kCurrentItemUid         = "current_item_uid";
    static const std::string kPosInItemSec           = "pos_in_item_sec";
    static const std::string kNextItemUid            = "next_item_uid";
    static const std::string kUntilNextSec           = "until_next_sec";
    static const std::string kPlaylistLoopCounter    = "playlist_loop_counter";

} // namespace playlist_player

namespace format_conversion {
    static const std::string kConversionGet = "conversion_get";
    static const std::string kConversionSet = "conversion_set";

    // TODO: Make unification for command and handler props
    // (e.g. next argument names)
    // static const std::string kConversionFormat = "conversion_format";
    // static const std::string kConversionProps  = "conversion_props";

} // namespace format_conversion

namespace media_player {
    static const std::string kMaxAudioTracks   = "max_audio_tracks";
    static const std::string kMaxVideoTracks   = "max_video_tracks";
    static const std::string kAudioTracksArray = "audio_tracks_array";
    static const std::string kVideoTracksArray = "video_tracks_array";
    static const std::string kAsyncPreload     = "async_preload";

} // namespace media_player

namespace media_mixer {
    // Get mixer configuration and settings (INode)
    static const std::string kMixerConfig = "mixer_config";
    // Destination format for conversion (INode)
    static const std::string kDestFormat = "dest_format";
    // Output format of the mixer (INode)
    static const std::string kOutputFormat = "output_format";

    // Overlay command parameters
    // Unique identifier for overlay group (UID as hex string)
    static const std::string kOverlayId = "overlay_id";
    // Human-readable name for overlay group
    static const std::string kOverlayName = "overlay_name";
    // JSON object with overlay properties (z_order, opacity, geometry, etc.)
    static const std::string kOverlayProps = "overlay_props";

    // Media source command parameters
    // Unique identifier for media source (UID as string)
    static const std::string kSourceUid = "source_uid";

    // Block command parameters
    // ID of the overlay block
    static const std::string kBlockId = "block_id";
    // Start time parameter for mixer start command (timestamp in clock time)
    static const std::string kStartAtClockTime = "start_at_clock_time";

    // Group identifier for the overlay (used for grouping overlays)
    static const std::string kOverlayGroupId = "overlay_group_id";

    // Background management commands
    // Set the background media for the mixer
    //   Arguments: media (required), init_props (optional)
    //   Returns: background source info
    static const std::string kMixerBackgroundSet = "mixer_background_set";
    // Get information about the current background media
    //   Arguments: none
    //   Returns: background source info
    static const std::string kMixerBackgroundGet = "mixer_background_get";
    // Reset the background media to default state
    //   Arguments: none
    //   Returns: success status
    static const std::string kMixerBackgroundReset = "mixer_background_reset";

    // Mixer control commands
    // Start the media mixer with optional time parameter
    //   Arguments: start_at_clock_time (optional)
    //   Returns: success status
    static const std::string kMixerStart = "mixer_start";
    // Stop the media mixer
    //   Arguments: none
    //   Returns: success status
    static const std::string kMixerStop = "mixer_stop";

    // Media source management commands
    // Add a new media source to the mixer
    //   Arguments: media (required), flags (optional), initial_media (optional), uid (optional)
    //   Returns: source_uid, flags, actual_format
    static const std::string kMediaSourceAdd = "media_source_add";

    // Remove a media source by UID
    //   Arguments: source_uid (required)
    //   Returns: success status
    static const std::string kMediaSourceRemove = "media_source_remove";

    // Get information about a specific media source
    //   Arguments: source_uid (required)
    //   Returns: source information
    static const std::string kMediaSourceGet = "media_source_get";

    // Get list of all media sources
    //   Arguments: none
    //   Returns: array of media sources
    static const std::string kMediaSourcesList = "media_sources_list";

    // Set positions for multiple media sources
    //   Arguments: media_positions (required), sync_switch_time (optional)
    //   Returns: success status
    static const std::string kMediaPositionsSet = "media_positions_set";

    // Mixer information commands
    // Get current mixer format information
    //   Arguments: none
    //   Returns: mixer format details (video, audio, etc.)
    static const std::string kMixerFormat = "mixer_format";

    // Get mixer configuration and settings
    //   Arguments: none
    //   Returns: mixer configuration details
    // Note: kMixerConfig is already defined above in general constants section

    // Block management commands in overlay groups
    // Add a new block to an overlay group
    //   Arguments: overlay_group_id (required), overlay_props (required), block_name (optional), flags (optional)
    //   Returns: block_uid, block_name
    static const std::string kBlockAdd = "block_add";

    // Remove a block from an overlay group
    //   Arguments: overlay_group_id (required), block_id (required)
    //   Returns: success status
    static const std::string kBlockRemove = "block_remove";

    // Update properties of an existing block
    //   Arguments: overlay_group_id (required), block_id (required), overlay_props (required)
    //   Returns: success status
    static const std::string kBlockUpdate = "block_update";

    // Get state for an existing block
    //   Arguments: overlay_group_id (required), block_id (required)
    //   Returns: state
    static const std::string kBlockGetState = "block_get_state";

    // Set state for an existing block
    //   Arguments: overlay_group_id (required), block_id (required), state (required)
    //   Returns: success status
    static const std::string kBlockSetState = "block_set_state";

    // Get media for an existing block
    //   Arguments: overlay_group_id (required), block_id (required)
    //   Returns: media_source_uid
    static const std::string kBlockGetMediaUid = "block_get_media_uid";

    // Set media for an existing block
    //   Arguments: overlay_group_id (required), block_id (required), media_source_uid (required)
    //   Returns: success status
    static const std::string kBlockSetMediaUid = "block_set_media_uid";

    // Get audio level for an existing block
    //   Arguments: overlay_group_id (required), block_id (required)
    //   Returns: audio_level
    static const std::string kBlockGetMediaAudioLevel = "block_get_media_audio_level";

    // Set audio level for an existing block
    //   Arguments: overlay_group_id (required), block_id (required), audio_level (required)
    //   Returns: success status
    static const std::string kBlockSetMediaAudioLevel = "block_set_media_audio_level";

    // Overlay management commands
    // Add a new overlay group to the mixer
    //   Arguments: overlay_name (optional), overlay_props (optional), init_props (optional)
    //   Returns: overlay_id, overlay_name, overlay_group_id
    static const std::string kOverlayGroupAdd = "overlay_group_add";

    // Get information about a specific overlay group
    //   Arguments: overlay_id (required)
    //   Returns: overlay information
    static const std::string kOverlayGroupGet = "overlay_group_get";

    // Remove an overlay group by its UID
    //   Arguments: overlay_id (required - group UID as string)
    //   Returns: success status
    static const std::string kOverlayGroupRemove = "overlay_group_remove";

    // Update properties of an existing overlay group
    //   Arguments: overlay_id (required), overlay_props (required)
    //   Returns: success status
    static const std::string kMixerOverlayUpdate = "mixer_overlay_update";

    // Get list of all overlay groups
    //   Arguments: none or overlay_group_id (optional filter)
    //   Returns: array of overlay groups with uid, name, state, etc.
    static const std::string kOverlayGroupsGet = "overlay_groups_get";

    // Remove all overlay groups
    //   Arguments: none or overlay_group_id (optional filter)
    //   Returns: success status and count of removed groups
    static const std::string kOverlayGroupsReset = "overlay_groups_reset";
} // namespace media_mixer

namespace active_output {
    static const std::string kOutputStart    = "output_start";
    static const std::string kOutputStop     = "output_stop";
    static const std::string kFlushData      = "flush_data";
    static const std::string kWaitForFinish  = "wait_for_finish";
    static const std::string kOutputHintsSet = "output_hints_set";
} // namespace active_output

} // namespace xsdk::xcommands
