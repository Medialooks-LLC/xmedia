#pragma once

#include "xbase.h"
#include "xnode.h"

#include "media_objects_interfaces.h"

#include <map>
#include <optional>
#include <string>
#include <vector>

namespace xsdk {

/**
 * @brief Overlay item position anchor, kIgnoreDestRegion mean what position related to whole frame, not destination
 * region
 */
XENUM_CLASS(Anchor,
            kMiddle,
            kTop              = 1,
            kBottom           = 2,
            kLeft             = 0x10,
            kRight            = 0x20,
            kTopLeft          = kTop | kLeft,
            kTopRight         = kTop | kRight,
            kBottomLeft       = kBottom | kLeft,
            kBottomRight      = kBottom | kRight,
            kIgnoreDestRegion = 0x100) // kUseWholeImage (?)

/**
 * @brief - unit types - pixels or ratio
 */
XENUM_CLASS(Units, kRatio, kPixels)

/**
 * @brief - Alpha mixing flags, Note: Mask not supported yet
 */
XENUM_CLASS(AlphaFlags, kDefault, kIgnoreOriginalAlpha, kApplySrcCropForMask, kMaskPinnedToDest)

/**
 * @brief - Overlay item location - position and size
 */
struct Location {
    double                x = 0.0;
    double                y = 0.0;
    std::optional<double> width;
    std::optional<double> height;
    Anchor                anchor = Anchor::kTopLeft;
    Units                 units  = Units::kRatio;
};

/**
 * @brief - Alpha blending props
 */
struct AlphaBlending {
    std::optional<double> alpha_value; // 0..1.0
    AlphaFlags            flags = AlphaFlags::kDefault;
    IMediaFrame::SPtrC    alpha_mask; // TODO
};

/**
 * @brief - Class for overlay items on destination video frame
 */
class IOverlayRenderer { // Better name ?
public:
    /**
     * @brief - overlay block status
     */
    enum class BlockStatus { kError, kDirect, kScaling, kScaled, kBusyNotReady, kBusyUsePrevious };

    /**
     * @brief - overlay block
     */
    struct OverlayBlock {
        IMediaFrame::SPtrC        video_frame;
        XRect                     src_crop;
        Location                  overlay_dest;
        AlphaBlending             blending;
        std::optional<xbase::Uid> block_uid; // For allow to skip not ready frames
    };

    USING_PTRS(IOverlayRenderer)

    virtual ~IOverlayRenderer() = default;

    /**
     * @brief - set destination image, if _async_prepare is true, the pixel format conversion performed asynchronious
     * and method return immediate
     */
    virtual std::error_code SetTargetImage(const IMediaFrame::SPtrC& _dest_image,
                                           const bool                _async_prepare = false) = 0;

    /**
     * @brief - return destination format, should be called after SetTargetImage() called, overwise return std::nullopt
     */
    virtual std::optional<XFormatV> GetTargetFormat() const = 0;

    /**
     * @brief - Put overlay block into overlay queue, start async image sacaling, return block uid + scheduled blocks
     * count
     */
    virtual xbase::XResult<std::pair<xbase::Uid, BlockStatus>> OverlayPut(const OverlayBlock& _overlay_block,
                                                                          const XRect&        _dest_region = {}) = 0;

    /**
     * @brief - Get destination images with overlayed blocks, Return resulting image + overlayed blocks count
     * If _base_props_p is null -> target image props used
     */
    virtual xbase::XResult<std::pair<IMediaFrame::SPtr, size_t>> GetComposedImage(
        const std::optional<xbase::Time64> _overlay_till_utc = {},
        const INode::SPtrC&                _rendering_hints  = {},
        const IMediaUnit*                  _base_props_p     = nullptr) = 0;

    /**
     * @brief - Return queued overlay blocks uids with status
     */
    virtual std::map<xbase::Uid, BlockStatus> BlocksStatus() const = 0;

    /**
     * @brief - Reset queued overlayd blocks by it's uids, for emoty _reset_blocks reset all blocks, return removed
     * blocks uids
     */
    virtual std::vector<xbase::Uid> ResetBlocks(const std::vector<xbase::Uid>& _reset_blocks) = 0;

    /**
     * @brief - Reset overlay renderer
     */
    virtual void Reset() = 0;
};

/**
 * @brief - Class for overlayed block
 */
class IOverlayBlock: public IObject {
public:
    /**
     * @brief - Overlayed block props
     */
    struct OverlayProps {
        Location      src_rect; // Not sure about this - add XRect to DisplayFrameUpdate ?
        Location      dst_rect;
        AlphaBlending blending;
    };

    /**
     * @brief - Overlayed block audio level, used for blocks with media or for groups, for kAuto mode - relative size of
     * block used for calcuate audio level
     */
    struct AudioLevel {
        enum class Mode {
            kMuted = 0,
            kFixed = 1,
            kAuto  = 2
            // TODO: kAutoWithOverlap = 3
        };

        double base_level = 1.0; // 2Think: Use dB ?
        Mode   gain_mode  = Mode::kAuto;
    };

    /**
     * @brief - Used for apply overlay block changes at specified time and during specified time (e.g. smooth size,
     * position or alpha changes), NOT IMPLEMENTED YET
     */
    struct ApplyProps {
        /**
         * @brief - duration of changes in milliseconds
         */
        std::optional<double> duration_msec;
        /**
         * @brief - time for apply changes
         */
        std::optional<xbase::Time64> apply_at_time;
        /**
         * @brief - extra properties
         */
        INode::SPtrC hints;
    };

    /**
     * @brief - special block properties node name, for store uaer speified data, use this node
     */
    static constexpr std::string_view kCustomProps = "custom";

public:
    USING_PTRS(IOverlayBlock)

    /**
     * @brief - type of block
     */
    enum class Type { kRegular, kGroup /*, kDynamic*/ };
    /**
     * @brief - return type of block
     */
    virtual Type BlockType() const = 0;

    /**
     * @brief - return path of block related to root group
     */
    virtual XPath Path() const = 0;
    /**
     * @brief - return parent block group
     */
    virtual IOverlayBlock::SPtrC ParentGet() const = 0;
    /**
     * @brief - return parent block group
     */
    virtual IOverlayBlock::SPtr ParentGet() = 0;

    /**
     * @brief - state of block
     */
    enum class State { kDisabled, kEnabled, kPaused };
    /**
     * @brief - return block state
     */
    virtual State BlockStateGet() const = 0;
    /**
     * @brief - return block name
     */
    virtual std::string BlockNameGet() const = 0;
    /**
     * @brief - return block overlay props
     */
    virtual OverlayProps OverlayPropsGet() const = 0;
    /**
     * @brief - return block props
     */
    virtual const INode::SPtr& BlockPropsGet() const = 0;
    /**
     * @brief - return recent tick value (updated by BlockNextTick())
     */
    virtual xbase::Time64 BlockLastTick() const = 0;
    /**
     * @brief - return media source uid (if has one)
     */
    virtual std::optional<xbase::Uid> MediaSourceUidGet() const = 0;
    /**
     * @brief - return audio level (for block with media source uid or for group)
     */
    virtual std::optional<AudioLevel> MediaAudioLevelGet() const = 0;
    /**
     * @brief - change block state, return previous state
     */
    virtual State BlockStateSet(const State _new_state, const ApplyProps& _apply_props = {}) = 0;
    /**
     * @brief - change block bame, return previous name
     */
    virtual xbase::XResult<std::string> BlockNameSet(const std::string& _new_name) = 0;
    /**
     * @brief - change block overlay props, return previous props
     */
    virtual OverlayProps OverlayPropsSet(const OverlayProps& _overlay_props, const ApplyProps& _apply_props = {}) = 0;
    /**
     * @brief - change block properties (via PatchAppy call), return updated block propertoes
     */
    virtual INode::SPtrC BlockPropsSet(const INode::SPtrC& _block_props_patch) = 0;
    /**
     * @brief - return custom block properties (kCustomProps node), optionally create kCustomProps node
     */
    virtual INode::SPtr CustomBlockProps(const bool _create_node) = 0;
    /**
     * @brief - change block media uid, return previous media uid
     */
    virtual std::optional<xbase::Uid> MediaSourceUidSet(const std::optional<xbase::Uid> _media_source_uid,
                                                        const ApplyProps&               _apply_props = {}) = 0;
    /**
     * @brief - change block audio level, return true for sucessful update ot false if not applicated (not media block
     * or group)
     */
    virtual bool MediaAudioLevelSet(const AudioLevel& _audio_level, const ApplyProps& _apply_props) = 0;
    /**
     * @brief - called for update block properties according to stream time (for dynamic perties changes - see
     * ApplyProps)
     */
    virtual xbase::Time64 BlockNextTick(const xbase::Time64 _time_value,
                                        const XRational&    _frame_rate,
                                        const INode::SPtrC& _block_hints) = 0;
    /**
     * @brief - return actual overlay frame
     */
    virtual IMediaFrame::SPtrC DisplayFrameGet() const = 0;
    /**
     * @brief - uopdate overlay frame, return previous one
     */
    virtual IMediaFrame::SPtrC DisplayFrameUpdate(const IMediaFrame::SPtrC& _display_frame,
                                                  const ApplyProps&         _apply_props = {}) = 0;
};

/**
 * @brief - class for group of overlay blocks
 */
class IOverlayGroup: public IOverlayBlock {
public:
    USING_PTRS(IOverlayGroup)

    /**
     * @brief - return actual list of overlay blocks, optionally with specified type (e.g. kGroup) or with specified
     * media source.
     */
    virtual std::vector<IOverlayBlock::SPtrC> BlocksList(
        const std::optional<IOverlayBlock::Type> _block_type       = {},
        const std::optional<xbase::Uid>          _media_source_uid = {}) const = 0;
    /**
     * @brief - return actual list of overlay blocks, optionally with specified type (e.g. kGroup) or with specified
     * media source.
     */
    virtual std::vector<IOverlayBlock::SPtr> BlocksList(const std::optional<IOverlayBlock::Type> _block_type = {},
                                                        const std::optional<xbase::Uid> _media_source_uid    = {}) = 0;
    /**
     * @brief - find and return overlay block and it's parent group by block uid, could be search only for this groups
     * as and for subgroups (for _nested_lookup = true)
     */
    virtual std::pair<IOverlayBlock::SPtrC, IOverlayGroup::SPtrC> BlockGetByUid(const xbase::Uid _block_uid,
                                                                                const bool _nested_lookup) const = 0;
    /**
     * @brief - find and return overlay block and it's parent group by block uid, could be search only for this groups
     * as and for subgroups (for _nested_lookup = true)
     */
    virtual std::pair<IOverlayBlock::SPtr, IOverlayGroup::SPtr> BlockGetByUid(const xbase::Uid _block_uid,
                                                                              const bool       _nested_lookup) = 0;
    /**
     * @brief - find and return overlay block and it's parent group by block path
     */
    virtual std::pair<IOverlayBlock::SPtrC, IOverlayGroup::SPtrC> BlockGetByPath(XPath&& _block_path) const = 0;
    /**
     * @brief - find and return overlay block and it's parent group by block path
     */
    virtual std::pair<IOverlayBlock::SPtr, IOverlayGroup::SPtr> BlockGetByPath(XPath&& _block_path) = 0;

    /**
     * @brief - return set of media uids for this groups and optionlly for subgroups (for _nested_lookup = true)
     */
    virtual std::set<xbase::Uid> BlocksMediaSourcesUids(const bool _nested_lookup) const = 0;

    /**
     * @brief - return map of media uids to audio level for this groups and optionlly for subgroups (for _nested_lookup
     * = true)
     */
    virtual std::map<xbase::Uid, double> BlocksMediaSourcesAudioLevels(
        const bool   _nested_lookup,
        const double _parent_audio_level = 1.0) const = 0;

    /**
     * @brief - add overlay block to group, optionally insert block at specified position
     */
    virtual xbase::XResult<size_t> BlockAdd(const IOverlayBlock::SPtr&  _block_p,
                                            const std::optional<size_t> _insert_at = {}) = 0;
    /**
     * @brief - remove block by it's uid, return removed block or error if such block not found if this group
     */
    virtual xbase::XResult<IOverlayBlock::SPtr> BlockRemove(const xbase::Uid _block_uid) = 0;
    /**
     * @brief - chnage block order by it's uid, return new block oreder or error if such block not found if this group
     */
    virtual xbase::XResult<size_t> BlockReorder(const xbase::Uid _block_uid, const int32_t _new_index) = 0;
    /**
     * @brief - remove all blocks, return removed blocks
     */
    virtual std::vector<IOverlayBlock::SPtr> BlocksReset() = 0;

    /**
     * @brief - call BlockNextTick() with specified values for all blocks of group (include subgroups)
     */
    virtual size_t BlocksNextTick(const xbase::Time64 _time_value,
                                  const XRational&    _frame_rate,
                                  const INode::SPtrC& _blocks_hints) = 0;
    /**
     * @brief - update displaye frame for all blocks (include subgroups) with specifed media source uid
     */
    virtual size_t BlocksFrameUpdate(const xbase::Uid          _media_source_uid,
                                     const IMediaFrame::SPtrC& _display_frame,
                                     const INode::SPtrC&       _blocks_hints) = 0;
};

} // namespace xsdk
