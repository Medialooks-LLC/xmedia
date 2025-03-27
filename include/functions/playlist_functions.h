#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

// Use xplayer instead ?
namespace xsdk::xplaylist {

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

INode::SPtr StoreItem(const IPlaylist::PlaylistItem& _item, const std::optional<double>& _start_pos_sec = {});

xbase::XResult<std::pair<IPlaylist::PlaylistItem, std::optional<double>>> LoadItem(const INode::SPtrC& _item_node);

} // namespace xsdk::xplaylist
