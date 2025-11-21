#pragma once

#include "xbase.h"
#include "xnode.h"

#include "audio_processing_interfaces.h"
#include "media_overlay_interfaces.h"
#include "media_players_interfaces.h"

#include <map>
#include <optional>
#include <string>
#include <vector>

namespace xsdk {

/**
 * @brief - interface for control media mixer sources
 */
class IMediaMixerSources {
public:
    /**
     * @brief - structure for represent media mixer source
     */
    struct Source {
        /**
         * @brief - media source flags, use kAutoRemove for remove media source when all blocks with such media source
         * removed, Note: kAutoRemove & kMixMinusEnabled logic not implemented yet
         */
        enum class Flags {
            kDefault         = 0, // Regular source with manual remove and hide source on eof
            kAutoRemove      = 1,
            kBackground      = 2,
            kLoop            = 4,
            kShowLastFrame   = 8,
            kMixMinusEnabled = 0x10,
        };

        xbase::Uid                uid = xbase::kInvalidUid;
        IMediaPlayerControl::SPtr player_control;
        Flags                     flags = Flags::kDefault;
        XFormat                   actual_format;
    };

public:
    USING_PTRS(IMediaMixerSources)

    virtual ~IMediaMixerSources() = default;

    /**
     * @brief - set mixer background media, optionally with custom media player, return new background Source
     */
    virtual xbase::XResult<Source> BackgroundSet(const Media&         _media,
                                                 IMediaPlayer::SPtr&& _custom_media_player = {}) = 0;
    /**
     * @brief - get mixer background media
     */
    virtual std::optional<Source> BackgroundGet() const = 0;
    /**
     * @brief - reset mixer background media
     */
    virtual IMediaPlayer::SPtr BackgroundReset() = 0;
    /**
     * @brief - add mixer media source, optionally with custom media player and initial media, return new media Source
     */
    virtual xbase::XResult<Source> MediaSourceAdd(const std::optional<xbase::Uid>& _media_source_uid,
                                                  const Source::Flags  _media_source_flags   = Source::Flags::kDefault,
                                                  IMediaPlayer::SPtr&& _custom_media_player  = {},
                                                  const std::optional<Media>& _initial_media = {}) = 0;
    /**
     * @brief - return mixer media sources list
     */
    virtual std::vector<Source> MediaSourcesList() const = 0;
    /**
     * @brief - return mixer media sources by it's uid
     */
    virtual xbase::XResult<Source> MediaSourceGet(const xbase::Uid _media_source_uid) const = 0;
    /**
     * @brief - remove mixer media sources by it's uid
     */
    virtual xbase::XResult<Source> MediaSourceRemove(const xbase::Uid _media_source_uid) = 0;
    /**
     * @brief - set mixer media sources position, optionally with positioning not earler whan specifified time (NOT
     * IMPLENETED YET)
     */
    virtual xbase::XResult<IMediaPlayer::SPtr> MediaPositionsSet(
        const std::map<xbase::Uid, double>  _media_positions_map,
        const std::optional<xbase::Time64>& _sync_switch_time = {}) = 0;
};

XENUM_OPS32(IMediaMixerSources::Source::Flags)

/**
 * @brief - mixer media overlays interface, used for specifiy multiple mixer output (e.g. master + preview)
 */
class IMediaMixerOverlays {
public:
    USING_PTRS(IMediaMixerOverlays)

    virtual ~IMediaMixerOverlays() = default;

    /**
     * @brief - add overlay group, optionally with custom destination format
     */
    virtual xbase::XResult<xbase::Uid> OverlayGroupAdd(IOverlayGroup::SPtr&&             _overlay_group,
                                                       const std::optional<std::string>& _group_name      = {},
                                                       const XFormat&                    _format_override = {},
                                                       const INode::SPtrC& _overlay_n_scaler_props        = {}) = 0;
    /**
     * @brief - return vector of overlay groups optionally with destination format according to specified _mixing_format
     */
    virtual std::vector<std::pair<IOverlayGroup::SPtr, XFormat>> OverlayGroupsGet(
        const std::optional<XFormat>& _mixing_format = {}) = 0;
    /**
     * @brief - return vector of overlay groups optionally with destination format according to specified _mixing_format
     */
    virtual std::vector<std::pair<IOverlayGroup::SPtrC, XFormat>> OverlayGroupsGet(
        const std::optional<XFormat>& _mixing_format = {}) const = 0;
    /**
     * @brief - return overlay group by it's uid, optionally with destination format according to specified
     * _mixing_format
     */
    virtual xbase::XResult<std::pair<IOverlayGroup::SPtr, XFormat>> OverlayGroupGet(
        const xbase::Uid              _group_uid,
        const std::optional<XFormat>& _mixing_format = {}) = 0;
    /**
     * @brief - return overlay group by it's uid, optionally with destination format according to specified
     * _mixing_format
     */
    virtual xbase::XResult<std::pair<IOverlayGroup::SPtrC, XFormat>> OverlayGroupGet(
        const xbase::Uid              _group_uid,
        const std::optional<XFormat>& _mixing_format = {}) const = 0;
    /**
     * @brief - remove ovarlay group by it's uid, return removed group with format overriding
     */
    virtual xbase::XResult<std::pair<IOverlayGroup::SPtr, XFormat>> OverlayGroupRemove(const xbase::Uid _group_uid) = 0;
    /**
     * @brief - remove all ovarlay groups, return removed groups with format overriding
     */
    virtual std::vector<std::pair<IOverlayGroup::SPtr, XFormat>> OverlayGroupsReset() = 0;
};

/**
 * @brief - media mixer control interface
 */
class IMediaMixerControl {

public:
    /**
     * @brief - media mixer state
     */
    enum class State { kClosed, kReady, kRunning };

public:
    USING_PTRS(IMediaMixerControl)

    virtual ~IMediaMixerControl() = default;

    /**
     * @brief - return actual mixer clock (never nullptr)
     */
    virtual const xbase::IClock* MixerClock() const = 0;
    /**
     * @brief - return media mixer audio precessor, schould be called after MixerInit() call, non-null if mixing audio
     * format specified
     */
    virtual const IAudioProcessor* AudioProcessor() const = 0;
    /**
     * @brief - return actual mixer state
     */
    virtual IMediaMixerControl::State MixerState() const = 0;
    /**
     * @brief - return actual mixer format
     */
    virtual XFormat MixerFormat() const = 0;

    /**
     * @brief - initialize media mixer with spcified mixing format and options, state changes from kClosed->kReady
     */
    virtual std::error_code MixerInit(const XFormat& _mixing_format, const INode::SPtrC& _mixing_options = {}) = 0;
    /**
     * @brief - start media mixer optionally at spcified time, sould be called AFTER MixerInit(), state changes from
     * kReady->kRunning, Note: Support for _start_at_clock_time is not implemented yet
     */
    virtual std::error_code MixerStart(const std::optional<xbase::Time64>& _start_at_clock_time = {}) = 0;
    /**
     * @brief - stop media mixer, sould be called AFTER MixerStart(), state changes from kRunning->kReady
     */
    virtual std::error_code MixerStop() = 0;
    /**
     * @brief - close media mixer, could be called at any state, state changes to kClosed
     */
    virtual void MixerClose() = 0;

    // 2Think: Move to other intrerface ?
    /**
     * @brief - add media source and block with specified media
     */
    virtual xbase::XResult<IOverlayBlock::SPtr> BlockWithMediaAdd(
        const xbase::Uid                        _overlay_group_uid,
        const Media&                            _media,
        const IOverlayBlock::OverlayProps&      _overlay_props,
        const IMediaMixerSources::Source::Flags _media_source_flags = IMediaMixerSources::Source::Flags::kAutoRemove,
        const std::optional<std::string>&       _block_name         = {}) = 0;
};

/**
 * @brief - composed interafce for media mixer object
 */
class IMediaMixer: public IMediaMixerSources,
                   public IMediaMixerOverlays,
                   public IMediaMixerControl,
                   public IMediaOutput {
public:
    USING_PTRS(IMediaMixer)
};

} // namespace xsdk
