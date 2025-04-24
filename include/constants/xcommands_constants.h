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
} // namespace media_handler

namespace playlist {
    static const std::string kPlaylist      = "playlist";
    static const std::string kPlaylistProps = "playlist_props";
    static const std::string kPlaylistItems = "playlist_items";
    static const std::string kBackground    = "background";

    static const std::string kUid      = "uid";
    static const std::string kSplitUid = "split_uid";

    static const std::string kMedia     = "media";
    static const std::string kOpenUrl   = "open_url";
    static const std::string kOpenHints = "open_hints";

    static const std::string kItemProps   = "play_props";
    static const std::string kSwitchProps = "switch_props";

    static const std::string kPin         = "pin";
    static const std::string kBreak       = "break";
    static const std::string kFixedPosSec = "fixed_pos_sec";

    static const std::string kInSec       = "in_sec";
    static const std::string kOutSec      = "out_sec";
    static const std::string kDurationSec = "duration_sec";
} // namespace playlist

namespace active_output {
    static const std::string kOutputStart    = "output_start";
    static const std::string kOutputStop     = "output_stop";
    static const std::string kFlushData      = "flush_data";
    static const std::string kWaitForFinish  = "wait_for_finish";
    static const std::string kOutputHintsSet = "output_hints_set";
} // namespace active_output

} // namespace xsdk::xcommands
