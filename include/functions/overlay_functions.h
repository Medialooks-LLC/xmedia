#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

namespace xsdk::xoverlay {

/**
 * @brief - create overlay renderer with spcified properties
 */
IOverlayRenderer::SPtr CreateOverlayRenderer(const INode::SPtrC& _overlay_n_scaler_props = {});
/**
 * @brief - convert ratio units to pixels according to spcified with and heigh
 */
Location ToPixels(const Location& _dest, const uint32_t _width, const uint32_t _height);
/**
 * @brief - change width & height of specifed format with keep correct aspect ratio.
 */
XFormatV UpdateFormat(const XFormatV& _base_format, const XSize& _new_size);
/**
 * @brief - convert rectange to crop values.
 */
XRect ToCrop(const XFormatV& _src_format, const XRect& _src_rect);
/**
 * @brief - convert Location to crop values.
 */
XRect ToCrop(const XFormatV& _src_format, const Location& _src_rect);

// TODO: Simplify parameters
/**
 * @brief - convert Location with specified source, destination format & region to rectangle with pixel value.
 */
XRect ToRectangle(const XFormatV& _src_format,
                  const Location& _location,
                  const XFormatV& _dest_format,
                  const XRect&    _dest_region = {});

/**
 * @brief - create overlay block with specified parameters.
 */
IOverlayBlock::SPtr CreateOverlayBlock(const IOverlayBlock::OverlayProps& _overlay_props,
                                       const IMediaFrame::SPtrC&          _display_frame    = {},
                                       const std::optional<xbase::Uid>    _media_source_uid = {},
                                       const std::optional<std::string>&  _block_name       = {});
/**
 * @brief - create overlay group with specified parameters.
 */
IOverlayGroup::SPtr CreateOverlayGroup(const IOverlayBlock::OverlayProps& _overlay_props    = {},
                                       const IMediaFrame::SPtrC&          _display_frame    = {},
                                       const std::optional<xbase::Uid>    _media_source_uid = {},
                                       const std::optional<std::string>&  _block_name       = {});

/**
 * @brief - find subgroup by it's uid - this helper use _overlay_group_p->BlockGetByUid() and
 * xobject::PtrQuery<IOverlayGroup>() for founded block
 */
IOverlayGroup::SPtr GroupGetByUid(IOverlayGroup* const _root_group_p,
                                  const xbase::Uid     _group_uid,
                                  const bool           _nested_lookup);
/**
 * @brief - find subgroup by it's uid - this helper use _overlay_group_p->BlockGetByUid() and
 * xobject::PtrQuery<IOverlayGroup>() for founded block
 */
IOverlayGroup::SPtrC GroupGetByUid(const IOverlayGroup* const _root_group_p,
                                   const xbase::Uid           _group_uid,
                                   const bool                 _nested_lookup);

/**
 * @brief - return subgroups list - this helper use _overlay_group_p->BlocksList(IOverlayBlock::Type::kGroup) and
 * xobject::PtrQuery<IOverlayGroup>() for founded blocks
 */
std::vector<IOverlayGroup::SPtr> GroupsList(IOverlayGroup* const _overlay_group_p);

/**
 * @brief - return subgroups list - this helper use _overlay_group_p->BlocksList(IOverlayBlock::Type::kGroup) and
 * xobject::PtrQuery<IOverlayGroup>() for founded blocks
 */
std::vector<IOverlayGroup::SPtrC> GroupsList(const IOverlayGroup* const _overlay_group_p);

/**
 * @brief - Put IOverlayBlock and all it's subblocks/subgroups into IOverlayRenderer
 */
xbase::XResult<size_t> OverlayPut(IOverlayRenderer* const _overlay_renderer_p,
                                  const IOverlayBlock*    _block_or_group_p,
                                  const XRect&            _dest_region = {});

// TODO:
inline INode::SPtr StoreProps(const IOverlayBlock::OverlayProps& _overlay_props, INode::SPtr&& _dest = {})
{
    return std::move(_dest);
}
inline xbase::XResult<IOverlayBlock::OverlayProps> LoadProps(const INode::SPtrC& _from) { return {}; }

inline INode::SPtr StoreBlock(const IOverlayBlock* _block_p, INode::SPtr&& _dest = {}) { return std::move(_dest); }
inline xbase::XResult<IOverlayBlock::SPtr> LoadBlock(const INode::SPtrC& _from) { return {}; }

inline INode::SPtr StoreGroup(const IOverlayGroup* _block_p, INode::SPtr&& _dest = {}) { return std::move(_dest); }
inline xbase::XResult<IOverlayGroup::SPtr> LoadGroup(const INode::SPtrC& _from) { return {}; }

} // namespace xsdk::xoverlay
