#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

namespace xsdk::xplayer {

/**
 * @brief - Create media player object
 */
IMediaPlayer::SPtr CreateMediaPlayer(const IMediaNotification::SPtr& _notification = {},
                                     const INode::SPtrC&             _player_props = {},
                                     const xbase::IClock*            _clock_p      = nullptr);

/**
 * @brief - Create playlist player based on specified media player (e.g. for use custom media players)
 */
IPlaylistPlayer::SPtr CreatePlaylistPlayer(const IMediaNotification::SPtr& _notification,
                                           const INode::SPtrC&             _player_props,
                                           IMediaPlayer::SPtr&&            _media_player);

/**
 * @brief - Create playlist player with default medaia player
 */
IPlaylistPlayer::SPtr CreatePlaylistPlayer(const IMediaNotification::SPtr& _notification = {},
                                           const INode::SPtrC&             _player_props = {},
                                           const xbase::IClock*            _clock_p      = nullptr);

} // namespace xsdk::xplayer
