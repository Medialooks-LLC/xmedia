#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

// Use xplayer instead ?
namespace xsdk::xplaylist {

// Media Player
IMediaPlayer::SPtr CreateMediaPlayer(const IMediaNotification::SPtr& _notification = {},
                                     const INode::SPtrC&             _player_props = {},
                                     const xbase::IClock*            _clock_p      = nullptr);

// Playlist Player
IPlaylistPlayer::SPtr CreatePlaylistPlayer(const IPlaylist::SPtrC&         _playlist,
                                           const IMediaNotification::SPtr& _notification,
                                           const INode::SPtrC&             _player_props,
                                           IMediaPlayer::SPtr&&            _media_player);

IPlaylistPlayer::SPtr CreatePlaylistPlayer(const IPlaylist::SPtrC&         _playlist,
                                           const IMediaNotification::SPtr& _notification = {},
                                           const INode::SPtrC&             _player_props = {},
                                           const xbase::IClock*            _clock_p      = nullptr);

// [Start:12:35:00.000 Pos:12:50:30.000 (650.000)] audi.mp4 (12.000) -> (9.050) ori.mp4
std::string ToString(const IPlaylistPlayer::Status& _status);

// Playlist
IPlaylist::UPtr CreatePlaylist(const INode::SPtrC& _playlist_props = {});

INode::SPtr StorePlaylist(const IPlaylist*             _playlist_p,
                          const std::optional<double>& _from_pos_sec = {},
                          const std::optional<double>& _to_pos_sec   = {});

xbase::XResult<IPlaylist::UPtr> LoadPlaylist(const INode::SPtrC& _playlist_node);

xbase::XResult<size_t> StorePlaylistItems(const IPlaylist*             _playlist_p,
                                          const INode::SPtr&           _playlist_items,
                                          const std::optional<double>& _from_pos_sec = {},
                                          const std::optional<double>& _to_pos_sec   = {});

xbase::XResult<size_t> LoadPlaylistItems(IPlaylist* _playlist_p, const INode::SPtrC& _playlist_items);

INode::SPtr StoreItem(const IPlaylist::PlaylistMedia& _item, const std::optional<double>& _start_pos_sec = {});

xbase::XResult<std::pair<IPlaylist::PlaylistMedia, std::optional<double>>> LoadItem(const INode::SPtrC& _item_node);

} // namespace xsdk::xplaylist
