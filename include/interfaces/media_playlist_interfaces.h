#pragma once

#include "xbase.h"
#include "xnode.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

namespace xsdk {

// Note: 'duration' or 'out_sec' should be valid before add to playlist
struct Media {
    std::string           open_url_or_json_desc; // Could be extended to subplaylist ?
    std::optional<double> in_sec;
    std::optional<double> out_sec;
    INode::SPtrC          open_hints; // in/out should be specified via in_sec/out_sec
    // 2Think: Remove duration (only out_sec use) ?
    double     duration_sec = 0.0;
    xbase::Uid uid          = xbase::kInvalidUid;
};

class IPlaylist {
public:
    virtual ~IPlaylist() = default;

    USING_PTRS(IPlaylist)

    enum class ItemFlags {
        kRegular    = 0x00, // Regular playback, could be reorder with sync items
        kBreak      = 0x02, // Break playback of item at specified time, after finished, continue playback to the
        kBackground = 0x100,

        // Below is not implemented yet, think about
        kPinToPrevious = 0x10, // With time rearrangment keeped after prev one (2Think)
        kDisabled      = 0x20  // Skipped during playback (2Think)
    };

    struct PlaylistMedia {
        Media                 media;
        std::optional<double> fixed_position_sec;
        ItemFlags             flags = ItemFlags::kRegular;
        INode::SPtrC          play_props; // e.g. transitions, in/out events, etc.

        std::optional<xbase::Uid> split_uid; // Used for items breaks (2Think: make hidden ?)
    };

    struct PlaylistPos {
        size_t                    index_from_start = 0;
        double                    start_sec        = 0.0; // 2Think: Use std::optional<> for disabled items
        double                    end_sec = 0.0; // 2Think: Use std::optional<> for disabled or open (w/o end) items
        std::optional<xbase::Uid> previous_item;
        double                    in_gap_sec = 0.0; // negative for overlap
        std::optional<xbase::Uid> next_item;
        double                    out_gap_sec = 0.0; // negative for overlap
    };

    struct PlaylistItem {
        PlaylistPos   pos;
        PlaylistMedia item;
    };

    // 2Think: remove as looked to be not required
    using OnPlaylistChangesPf = std::function<void(const size_t _from_idx)>;

    // Note: If _position_sec specified, added to the end of list
    virtual xbase::XResult<PlaylistItem> ItemAdd(PlaylistMedia&&              _item,
                                                 const std::optional<double>& _position_sec = {}) = 0;
    // Update item position, if switch from regulart to sync and pos not specified, current start time used as sync
    // point. The next algorithm used: item removed from playlist (and next items may move) and inserted into new pos
    virtual xbase::XResult<PlaylistPos>   ItemChangePosAndFlags(const xbase::Uid&              _item_uid,
                                                                const std::optional<ItemFlags> _item_flags,
                                                                const std::optional<double>&   _pos_from_start_sec = {},
                                                                const std::optional<bool>&     _set_fixed_time = {}) = 0;
    virtual xbase::XResult<PlaylistItem>  ItemChangeMedia(const xbase::Uid&                  _item_uid,
                                                          const std::optional<Media>&        _media,
                                                          const std::optional<INode::SPtrC>& _play_props = {})   = 0;
    virtual xbase::XResult<PlaylistMedia> ItemRemove(const xbase::Uid& _item_uid)                                = 0;

    virtual xbase::XResult<PlaylistItem> ItemByUid(const xbase::Uid _item_uid) const                    = 0;
    virtual xbase::XResult<PlaylistItem> ItemByTime(const double _pos_sec) const                        = 0;
    virtual std::vector<PlaylistItem>    ItemsList(const std::optional<double>& _from_pos_sec = {},
                                                   const std::optional<double>& _to_pos_sec   = {}) const = 0;

    // Return previous background
    virtual xbase::XResult<PlaylistMedia> BackgroundSet(const Media& _media, const INode::SPtrC& _play_props = {}) = 0;
    virtual std::optional<PlaylistMedia>  BackgroundGet() const                                                    = 0;

    // 2Think: Split to DurationSec() + ItemsCount() ?
    virtual std::pair<double, size_t> Duration() const = 0;

    virtual INode::SPtrC PlaylistProps() const = 0;
};

XENUM_OPS32(IPlaylist::ItemFlags)

} // namespace xsdk