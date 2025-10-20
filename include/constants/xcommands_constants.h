#pragma once

#include <string>

namespace xsdk::xcommands {

namespace params {
    static const std::string kStopAtError = "stop_at_error";
}
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
    static const std::string kMediaGet = "media_get";

    static const std::string kKeepMedia   = "keep_media";
    static const std::string kTimeoutMsec = "timeout_msec";
    static const std::string kStreamUid   = "stream_uid";
    static const std::string kHints       = "hints";
    static const std::string kStreamName  = "stream_name";
    static const std::string kSegment     = "segment";
    static const std::string kTime        = "time";

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
    static const std::string kBufferVideoFrames = "buffer_video_frames";

} // namespace media_mixer

namespace active_output {
    static const std::string kOutputStart    = "output_start";
    static const std::string kOutputStop     = "output_stop";
    static const std::string kFlushData      = "flush_data";
    static const std::string kWaitForFinish  = "wait_for_finish";
    static const std::string kOutputHintsSet = "output_hints_set";
} // namespace active_output

} // namespace xsdk::xcommands
