#pragma once

#include "xbase.h"
#include "xnode.h"

#include "media_handler_interfaces.h"
#include "media_playlist_interfaces.h"

#include <optional>
#include <vector>

namespace xsdk {

// Temp, expect to be moved into xbase
class ISyncExecution {
public:
    enum class Result { kOk, kDuplicated, kNotFound, kFixedCountExceeded, kResetCalled, kTimeout };
    struct Status {
        size_t fixed_count = 0;
        size_t added_count = 0;
        size_t ready_count = 0;
    };
    USING_PTRS(ISyncExecution)
public:
    virtual ~ISyncExecution() = default;

    virtual Status                    SyncStatus() const                                             = 0;
    virtual Result                    SyncAdd(const xbase::Uid _sync_uid, const bool _is_ready)      = 0;
    virtual Result                    SyncRemove(const xbase::Uid _sync_uid)                         = 0;
    virtual Result                    SyncSetReady(const xbase::Uid _sync_uid, const bool _is_ready) = 0;
    virtual std::pair<Result, size_t> SyncWait(const uint32_t _timeout_msec = 0) const               = 0;
    virtual void                      SyncReset()                                                    = 0;
};

class IMediaPlayerControl {

public:
    // Move next structure members to PlayerMedia ?
    struct PlayProps {
        std::optional<xbase::Time64> start_time;    // start_timestamp ?
        std::optional<double>        start_pos_sec; // Optional start positions (relative to in point)
        INode::SPtrC                 play_params;   // e.g. for transition
    };

    struct PlayerMedia {
        Media                 media;
        PlayProps             play_props;
        std::optional<double> pos_sec;       // Change to Time64 (?), (relative to in point)
        std::optional<size_t> loop_counter;  // Has value only for files in loop
        IMediaOutput::SPtr    source_output; // TODO: Make const
        INode::SPtrC          source_stat;

        using UPtr  = std::unique_ptr<PlayerMedia>;
        using SPtrC = std::shared_ptr<const PlayerMedia>;
    };

    enum class SwitchType { kOnStart, kScheduled, kForced, kOnStop };
    using OnSwitchPf = std::function<std::error_code(const PlayerMedia* _from_media_p,
                                                     const PlayerMedia* _to_media_p,
                                                     const SwitchType   _switch_type)>;

    // Return PlayerMedia and optionally handler (for take owning for handler e.g. Close)
    using OnCreateMediaPf = std::function<xbase::XResult<std::pair<PlayerMedia, IMediaHandler::SPtr>>(
        const Media&                  _media,
        const PlayProps&              _play_props,
        const std::optional<XFormat>& _play_format,
        const INode::SPtrC&           _format_conversion_props,
        const std::optional<size_t>   _loop_counter)>;

    USING_PTRS(IMediaPlayerControl)

public:
    virtual ~IMediaPlayerControl() = default;

    virtual const xbase::IClock* PlayerClock() const = 0;
    // Return current and next uids (if no media -> xbase::kInvalidUid)
    virtual std::pair<xbase::Uid, xbase::Uid> PlayerMediaUids() const = 0;

    // Return copy of currently playing and next media, PlayerMedia::pos_sec is pos in media at the moment of call
    virtual std::pair<PlayerMedia::SPtrC, PlayerMedia::SPtrC> PlayerMediaGet() const = 0;

    virtual std::optional<std::pair<xbase::Time64, xbase::Time64>> PauseTimesGet() const = 0;

    virtual void SetCallbacks(OnSwitchPf&& _on_switch_pf, OnCreateMediaPf&& _on_create_media_pf) = 0;

    enum class PlayerFlags { kRejectIfHasNext, kReplaceNext = 0x01, kLoop = 0x02, kSyncInitMedia = 0x10 };
    // Return replaced PlayerMedia and clock time of media start
    virtual xbase::XResult<PlayerMedia::UPtr> PlayMedia(const Media&      _media,
                                                        const PlayProps&  _play_props   = {},
                                                        const PlayerFlags _player_flags = {}) = 0;
    // Switch to next media, optionally at specified time, for immediate switch return replaced PlayerMedia
    virtual xbase::XResult<PlayerMedia::UPtr> SwitchToNext(const std::optional<xbase::Time64> _switch_at_time = {}) = 0;
    // Return the clock time of first paused frame or error code
    virtual xbase::XResult<xbase::Time64> PausePlayback(const bool                         _keep_next_start_time,
                                                        const std::optional<xbase::Time64> _continue_at_time = {}) = 0;
    // Return the clock time of first un-paused frame or error code
    virtual xbase::XResult<xbase::Time64> ContinuePlayback() = 0;

    // Set position for played media, optionally with seamless switch to new position at specified time
    // Note: Position inside playing segement, returned position from start (?)
    virtual xbase::XResult<double> SetPosition(const double                       _position_from_in_sec,
                                               const std::optional<xbase::Time64> _switch_at_time = {},
                                               const ISyncExecution::SPtr&        _sync_execution = {}) = 0;

    // Return detached current and next PlayerMedia
    virtual std::pair<PlayerMedia::UPtr, PlayerMedia::UPtr> StopPlayback(const bool _reset_callack) = 0;
};

XENUM_OPS32(IMediaPlayerControl::PlayerFlags)

class IMediaPlayer: public IMediaPlayerControl,
                    public IMediaOutput,
                    public IFormatConversion /*, public IMediaStatAndProps*/ {
public:
    USING_PTRS(IMediaPlayer)
};

class IPlaylistPlayerControl {

public:
    // 2Think:
    // - Rename props to:
    //      playlist_***        for playlist props
    //      current_item_***    for currently played item
    //      next_item_***       for next item
    // - change double to xbase::Time64 ?
    struct Status {
        IPlaylist::SPtrC             playlist;
        xbase::Time64                clock_timestamp     = time64::kNoVal;
        double                       pos_in_playlist_sec = 0.0;
        std::optional<xbase::Time64> playlist_start_timestamp;
        std::optional<double>        time_in_playlist_sec; // Not set -> playlist stopped

        // For playlist loop
        std::optional<size_t> playlist_loop_counter;

        // Current item
        std::optional<IPlaylist::PlaylistItem> current_item;
        double                                 pos_in_item_sec = 0.0; // No sence if current_item is not set
        std::optional<size_t>                  item_loop_counter;

        // Next item
        std::optional<IPlaylist::PlaylistItem> next_item;
        std::optional<double>                  until_next_sec;
    };

public:
    virtual ~IPlaylistPlayerControl() = default;

    USING_PTRS(IPlaylistPlayerControl)

    // Return currently played playlist
    // virtual IPlaylist::SPtrC Playlist() const = 0;
    // The media player, never null
    virtual IMediaPlayerControl::SPtrC MediaPlayer() const = 0;
    // Return playback status (pos, current, next items times)
    virtual std::optional<Status> PlaybackStatus() const = 0;
    // Return playlist head clock timestamp or xbase::kNoVal if playback stopped
    virtual xbase::Time64 PlaylistHeadTimestamp() const = 0;

    // Next methods return frame-rate corrected value
    virtual xbase::XResult<IPlaylist::PlaylistItem> PlaylistItemByUid(const xbase::Uid _item_uid) const = 0;
    virtual xbase::XResult<IPlaylist::PlaylistItem> PlaylistItemByTime(const double _pos_sec) const     = 0;
    virtual std::vector<IPlaylist::PlaylistItem>    PlaylistItemsList(
           const std::optional<double>& _from_pos_sec = {},
           const std::optional<double>& _to_pos_sec   = {}) const = 0;

    // Set target playlist and begin output BG (if have)
    virtual xbase::XResult<Status> InitPlayer(const IPlaylist::SPtrC& _playlist) = 0;
    // Start or continue stopped playback
    virtual xbase::XResult<Status> StartPlayback(const IMediaPlayerControl::PlayProps& _play_props = {}) = 0;
    // Stop playback and return recent actual status
    virtual xbase::XResult<Status> StopPlayback(const std::optional<xbase::Time64> _continue_at_time = {}) = 0;
    // Pause playlist on recent frame, optionally swutch to background
    // during pausing PlaylistHeadTimestamp changed after each frame for have correct items times
    virtual xbase::XResult<Status> PausePlayback(const std::optional<xbase::Time64> _continue_at_time = {}) = 0;
    // Return the clock time of first un-paused frame or error code, during pausing PlaylistHeadTimestamp changed after
    // each frame
    virtual xbase::XResult<Status> ContinuePlayback() = 0;
    // Move playing position to specified pos, PlaylistHeadTimestamp changed accordintly
    virtual xbase::XResult<Status> JumpToTime(const double _playlist_pos_sec) = 0;
    // Move playing position to specified item, PlaylistHeadTimestamp changed accordintly
    virtual xbase::XResult<Status> JumpToItem(const xbase::Uid _item_uid) = 0;

    // Close player and detach playlist
    virtual xbase::XResult<Status> ClosePlayer() = 0;
};

// 2Think: Add inheritance from IMediaPlayer (really need IMediaPlayerControl interface support) for unified playback
// control and usage in mixer
class IPlaylistPlayer: public IPlaylistPlayerControl,
                       public IMediaOutput,
                       public IFormatConversion /*, public IMediaStatAndProps*/ {
public:
    USING_PTRS(IPlaylistPlayer)
};

} // namespace xsdk