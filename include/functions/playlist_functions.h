#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

namespace xsdk::xplaylist {

// [Start:12:35:00.000 Pos:12:50:30.000 (650.000)] audi.mp4 (12.000) -> (9.050) ori.mp4
std::string ToString(const IPlaylistPlayerControl::Status& _status);

// Playlist
IPlaylist::UPtr CreatePlaylist(IPlaylist::OnPlaylistChangesPf&& _on_playlist_changes = {},
                               const INode::SPtrC&              _playlist_props      = {});

// Helpers
double MediaDuration(const Media& _media);

IPlaylist::PlaylistItem ConvertItemRate(const IPlaylist::PlaylistItem&  _base_item,
                                        const std::optional<XRational>& _frame_rate);

std::vector<IPlaylist::PlaylistItem> ConvertItemsRate(const std::vector<IPlaylist::PlaylistItem>& _base_items,
                                                      const std::optional<XRational>&             _frame_rate);

INode::SPtr StorePlayerStatus(const IPlaylistPlayerControl::Status& _status);

// Playlist persistance methods

INode::SPtr                     StorePlaylist(const IPlaylist*             _playlist_p,
                                              const std::optional<double>& _from_pos_sec = {},
                                              const std::optional<double>& _to_pos_sec   = {});
xbase::XResult<IPlaylist::UPtr> LoadPlaylist(const INode::SPtrC&              _playlist_node,
                                             IPlaylist::OnPlaylistChangesPf&& _on_playlist_changes = {});

INode::SPtr StorePlaylistItems(const std::vector<IPlaylist::PlaylistMedia>& _media_items,
                               INode::SPtr&&                                _dest_node = {});
INode::SPtr StorePlaylistItems(const std::vector<IPlaylist::PlaylistItem>& _playlist_items,
                               INode::SPtr&&                               _dest_node = {});
xbase::XResult<std::vector<IPlaylist::PlaylistMedia>> LoadPlaylistItems(const INode::SPtrC& _playlist_items);

INode::SPtr StorePlaylistItem(const IPlaylist::PlaylistMedia& _item, INode::SPtr&& _dest_node = {});
xbase::XResult<IPlaylist::PlaylistMedia> LoadPlaylistItem(const INode::SPtrC& _item_node);

INode::SPtr StorePlaylistMediaPos(const IPlaylist::PlaylistPos& _pos, INode::SPtr&& _dest_node = {});

} // namespace xsdk::xplaylist
