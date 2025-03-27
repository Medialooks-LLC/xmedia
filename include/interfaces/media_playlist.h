#pragma once

#include "xbase.h"
#include "xnode.h"

#include "../xmedia_structures.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

namespace xsdk {

struct Media {
    std::string  open_url_or_json_desc; // Could be extended to subplaylist ?
    INode::SPtrC open_hints;            // in/out should be specified via in_sec/out_sec
    double       duration_sec = 0;      // Should be specified before added to playlist
};

class IMediaPlayer {

public:
    enum class SwitchType {
        kImmediate = 0x01,
        kByTime,
        kOutOrEOF,
        kOutOrDuration,
    };

    struct PlayProps {
        std::optional<double>        in_sec;
        std::optional<double>        out_sec;
        SwitchType                   switch_type;
        std::optional<xbase::Time64> switch_time;
        INode::SPtrC                 switch_params; // e.g. for transition
    };

    enum class MediaState {
        kClosed,
        kInitializing,
        kReady,
        kInBreak,
        kPlaying,
    };

    struct PlayerMedia {
        Media                 media;
        PlayProps             play_props;
        MediaState            state;
        XFormat               format;
        std::optional<double> pos_sec;
        INode::SPtrC          stat;
    };

    using OnSwitchPF = std::function<bool(const PlayerMedia& _from, const PlayerMedia& _to)>;

public:
    virtual ~IMediaPlayer() = default;

    USING_PTRS(IMediaPlayer)

    virtual const xbase::IClock* PlayerClock() const = 0;

    virtual std::error_code PlayMedia(const Media& _media, const PlayProps& _play_props = {}) = 0;
    // 2Think: Does we really next next method ?
    virtual std::error_code StopMedia(const PlayProps& _play_props = {}) = 0;

    virtual xbase::XResult<PlayerMedia> PlayingMedia() const = 0;
    virtual xbase::XResult<PlayerMedia> NextMedia() const    = 0;

    // Make something like IMediaCache interface ?
    // virtual std::error_code PrepareMedia(const Media& _media, const INode::SPtrC& _keep_props = {}) = 0;
    // virtual std::error_code DiscardMedia(const Media& _media) = 0;
    // virtual std::vector<std::pair<Media, MediaStatus>> MediaList() const = 0;
};

class IPlaylist {
public:
    virtual ~IPlaylist() = default;

    USING_PTRS(IPlaylist)

    // using Media = std::variant<IMediaPlayer::Media, IPlaylist::SPtrC>;

    enum class ItemFlags {
        kRegular     = 0x00, // Regular playback, could be reorder with sync items
        kSyncTimePos = 0x01, // Sync with specified time,
        kBreakForPos = 0x02, // Break playback of item at specified time, after finished, continue playback to the
                             // ~same pos (see 'break_rollback')
        kSyncWithBreak = kSyncTimePos | kBreakForPos,

        // Below is not implemented yet, think about
        kPinToPrevious = 0x10, // With time rearrangment keeped after prev one (2Think)
        kDisabled      = 0x20  // Skipped during playback (2Think)
    };

    struct PlaylistItem {
        Media                 media;
        std::optional<double> in_sec;
        std::optional<double> out_sec;
        ItemFlags             flags;      // = ItemFlags::kRegular;
        INode::SPtrC          item_props; // e.g. transitions, in/out events, etc.

        xbase::Uid                uid;       // = xbase::kInvalidUid;
        std::optional<xbase::Uid> split_uid; // Used for items breaks (2Think: make hidden ?)
    };

    struct PlaylistPos {
        size_t                    index_from_start; // = 0;
        double                    start_sec;        // = 0;  // 2Think: Use std::optional<> for disabled items
        double                    end_sec; // = 0;  // 2Think: Use std::optional<> for disabled or open (w/o end) items
        std::optional<xbase::Uid> previous_item;
        double                    in_gap_sec; //= 0.0; // negative for overlap
        std::optional<xbase::Uid> next_item;
        double                    out_gap_sec; //= 0.0; // negative for overlap
    };

    struct ItemProps {
        PlaylistPos  pos;
        PlaylistItem item;
    };

    // Note: If _position_sec specified, added to the end of list
    virtual xbase::XResult<ItemProps> ItemAdd(PlaylistItem&&               _item,
                                              const std::optional<double>& _position_sec = {}) = 0;

    // 2Think: Remove method, rest onlt ItemAdd( PlaylistItem&& ...) ?
    virtual xbase::XResult<ItemProps> ItemAdd(const Media&                 _media,
                                              const std::optional<double>& _in_sec       = {},
                                              const std::optional<double>& _out_sec      = {},
                                              const ItemFlags              _item_flags   = ItemFlags::kRegular,
                                              const INode::SPtrC&          _item_props   = {},
                                              const std::optional<double>& _position_sec = {}) = 0;

    // Update item position, if switch from regulart to sync and pos not specified, current start time used as sync
    // point. The next alorithm used: item removed from playlist (and next items may move) and inserted into new pos
    virtual xbase::XResult<PlaylistPos> ItemChangePos(const xbase::Uid&              _item_uid,
                                                      const std::optional<ItemFlags> _item_flags,
                                                      const std::optional<double>&   _pos_from_start_sec = {}) = 0;

    virtual xbase::XResult<ItemProps> ItemChangeMedia(const xbase::Uid&                  _item_uid,
                                                      const std::optional<Media>&        _media,
                                                      const std::optional<double>&       _in_sec     = {},
                                                      const std::optional<double>&       _out_sec    = {},
                                                      const std::optional<INode::SPtrC>& _item_props = {}) = 0;

    virtual xbase::XResult<PlaylistItem> ItemRemove(const xbase::Uid& _item_uid) = 0;

    virtual xbase::XResult<ItemProps> ItemByUid(const xbase::Uid _item_uid) const = 0;

    virtual xbase::XResult<ItemProps> ItemByTime(const double _pos_sec) const = 0;

    virtual std::vector<ItemProps> ItemsList(const std::optional<double>& _from_pos_sec = {},
                                             const std::optional<double>& _to_pos_sec   = {}) const = 0;

    // Return previous background
    virtual xbase::XResult<PlaylistItem> BackgroundSet(const Media&                 _media,
                                                       const std::optional<double>& _in_sec     = {},
                                                       const std::optional<double>& _out_sec    = {},
                                                       const INode::SPtrC&          _item_props = {}) = 0;

    virtual std::optional<PlaylistItem> BackgroundGet() const = 0;

    // 2Think: Split to DurationSec() + ItemsCount() ?
    virtual std::pair<double, size_t> Duration() const = 0;

    virtual INode::SPtrC PlaylistProps() const = 0;
};

XENUM_OPS32(IPlaylist::ItemFlags)

class IPlaylistPlayer {
public:
    virtual ~IPlaylistPlayer() = default;

    USING_PTRS(IPlaylistPlayer)

    virtual std::error_code StartPlayback(const IPlaylist::SPtrC&        _playlist,
                                          const IMediaPlayer::SPtr&      _media_player,
                                          const IMediaPlayer::PlayProps& _play_props = {}) = 0;

    virtual std::error_code StopPlayback(const IMediaPlayer::PlayProps& _play_props = {}) = 0;
};

} // namespace xsdk