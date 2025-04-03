#pragma once

#include "xbase.h"
#include "xnode.h"

#include "../xmedia_structures.h"
#include "media_handler_interfaces.h"

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

class IMediaPlayer: public IMediaOutput /*, public IMediaStatAndProps*/ {

public:
    enum class SwitchType { kOutOrEOF, kByTime, kImmediate };

    struct PlayProps {
        std::optional<double>        in_sec; // Move to Media ???
        std::optional<double>        out_sec;
        SwitchType                   switch_type;
        std::optional<xbase::Time64> switch_time;
        INode::SPtrC                 switch_params; // e.g. for transition
        uint64_t                     playlist_uid;
    };

    struct PlayerMedia {
        Media                 media;
        PlayProps             play_props;
        std::optional<double> pos_sec;
        IMediaHandler::SPtrC  media_handler; // IMediaOutput::SPtrC
    };

    using OnSwitchPf = std::function<std::error_code(const PlayerMedia* _from_media_p, const PlayerMedia* _to_media_p)>;
    using OnCreateMediaPf =
        std::function<std::optional<IMediaHandler::SPtr>(const Media& _media, const PlayProps& _play_props)>;

public:
    virtual ~IMediaPlayer() = default;

    USING_PTRS(IMediaPlayer)

    virtual const xbase::IClock*       PlayerClock() const     = 0;
    virtual std::optional<PlayerMedia> PlayingMediaGet() const = 0;
    virtual std::optional<PlayerMedia> NextMediaGet() const    = 0;

    virtual void            SetCallbacks(OnSwitchPf&& _on_switch_pf, OnCreateMediaPf&& _on_create_media_pf) = 0;
    virtual std::error_code PlayMedia(const Media& _media, const PlayProps& _play_props = {})               = 0;
    virtual std::error_code SwitchToNext()                                                                  = 0;
    virtual std::error_code StopPlayback(const bool _reset_callack)                                         = 0;
};

class IPlaylist {
public:
    virtual ~IPlaylist() = default;

    USING_PTRS(IPlaylist)

    // using Media = std::variant<IMediaPlayer::Media, IPlaylist::SPtrC>;

    enum class ItemFlags {
        kRegular   = 0x00, // Regular playback, could be reorder with sync items
        kFixedTime = 0x01, // Sync with specified time,
        kBreak     = 0x02, // Break playback of item at specified time, after finished, continue playback to the
                           // ~same pos (see 'break_rollback')
        kFixedTimeWithBreak = kFixedTime | kBreak,

        kBackground = 0x100,

        // Below is not implemented yet, think about
        kPinToPrevious = 0x10, // With time rearrangment keeped after prev one (2Think)
        kDisabled      = 0x20  // Skipped during playback (2Think)
    };

    struct PlaylistMedia {
        Media                 media;
        std::optional<double> in_sec;
        std::optional<double> out_sec;
        ItemFlags             flags;      // = ItemFlags::kRegular;
        INode::SPtrC          play_props; // e.g. transitions, in/out events, etc.

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

    struct PlaylistItem {
        PlaylistPos   pos;
        PlaylistMedia item;
    };

    // Note: If _position_sec specified, added to the end of list
    virtual xbase::XResult<PlaylistItem> ItemAdd(PlaylistMedia&&              _item,
                                                 const std::optional<double>& _position_sec = {}) = 0;

    // 2Think: Remove method, rest onlt ItemAdd( PlaylistMedia&& ...) ?
    virtual xbase::XResult<PlaylistItem> ItemAdd(const Media&                 _media,
                                                 const std::optional<double>& _in_sec       = {},
                                                 const std::optional<double>& _out_sec      = {},
                                                 const ItemFlags              _item_flags   = ItemFlags::kRegular,
                                                 const INode::SPtrC&          _item_props   = {},
                                                 const std::optional<double>& _position_sec = {}) = 0;

    // Update item position, if switch from regulart to sync and pos not specified, current start time used as sync
    // point. The next algorithm used: item removed from playlist (and next items may move) and inserted into new pos
    virtual xbase::XResult<PlaylistPos> ItemChangePosAndFlags(
        const xbase::Uid&              _item_uid,
        const std::optional<ItemFlags> _item_flags,
        const std::optional<double>&   _pos_from_start_sec = {}) = 0;

    virtual xbase::XResult<PlaylistItem> ItemChangeMedia(const xbase::Uid&                  _item_uid,
                                                         const std::optional<Media>&        _media,
                                                         const std::optional<double>&       _in_sec     = {},
                                                         const std::optional<double>&       _out_sec    = {},
                                                         const std::optional<INode::SPtrC>& _item_props = {}) = 0;

    virtual xbase::XResult<PlaylistMedia> ItemRemove(const xbase::Uid& _item_uid) = 0;

    virtual xbase::XResult<PlaylistItem> ItemByUid(const xbase::Uid _item_uid) const = 0;

    virtual xbase::XResult<PlaylistItem> ItemByTime(const double _pos_sec) const = 0;

    virtual std::vector<PlaylistItem> ItemsList(const std::optional<double>& _from_pos_sec = {},
                                                const std::optional<double>& _to_pos_sec   = {}) const = 0;

    // Return previous background
    virtual xbase::XResult<PlaylistMedia> BackgroundSet(const Media&                 _media,
                                                        const std::optional<double>& _in_sec     = {},
                                                        const std::optional<double>& _out_sec    = {},
                                                        const INode::SPtrC&          _item_props = {}) = 0;

    virtual std::optional<PlaylistMedia> BackgroundGet() const = 0;

    // 2Think: Split to DurationSec() + ItemsCount() ?
    virtual std::pair<double, size_t> Duration() const = 0;

    virtual INode::SPtrC PlaylistProps() const = 0;
};

XENUM_OPS32(IPlaylist::ItemFlags)

class IPlaylistPlayer: public IMediaOutput /*, public IMediaStatAndProps*/ {

public:
    // 2Think: make more optional<> fields ?
    struct Status {
        std::optional<xbase::Time64> playlist_head_rt; // Better name (?) playlist_start_timestamp ?
        double                       playlist_pos_sec; // Rename to pos_in_playlist_sec ?

        std::optional<IPlaylist::PlaylistMedia> current_item;
        double                                  item_pos_sec; // Rename to pos_in_item_sec;

        std::optional<IPlaylist::PlaylistMedia> next_item;
        double                                  until_next_sec;
    };

public:
    virtual ~IPlaylistPlayer() = default;

    USING_PTRS(IPlaylistPlayer)

    virtual const IPlaylist* Playlist() const = 0;

    virtual const IMediaPlayer* MediaPlayer() const = 0;

    virtual Status PlayerStatus() const = 0;

    virtual std::error_code StartPlayback(const IMediaPlayer::PlayProps& _play_props = {}) = 0;

    virtual std::error_code StopPlayback(const bool _switch_to_background) = 0;

    // The next method change 'playlist_head_rt'
    virtual xbase::XResult<Status> JumpToTime(const double _playlist_pos_sec) = 0;

    virtual xbase::XResult<Status> JumpToItem(const xbase::Uid _item_uid) = 0;
};

} // namespace xsdk