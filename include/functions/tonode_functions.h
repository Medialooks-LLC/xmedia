#pragma once

#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xnode.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <variant>
#include <vector>

namespace xsdk {

namespace xrational {
    /**
     * @brief Converts a XRational object to a node
     * @param _rat The XRational object to convert.
     * @return A INode::SPtr representing the rational number.
     * @note The resulting string will look like this: "num/den" or "3/4"
     */
    INode::SPtr ToNode(const XRational& _rat, const INode::SPtr& _dest_node = {});

    std::optional<XRational> FromNode(const INode* _node_p, const bool _zero_num_valid);

} // namespace xrational

namespace xsize {
    /**
     * @brief Converts a XSize object to a node.
     * @param _size The XSize object to convert.
     * @param _ch_delimer The character to use as delimiter, default is 'x'.
     * @return A std::string representing the size.
     * @note The resulting string will look like this: "cxxcy" or "1920x1080"
     */
    INode::SPtr ToNode(const XSize& _size, const INode::SPtr& _dest_node = {});
} // namespace xsize

namespace xrect {
    /**
     * @brief Converts a XRect object to a node.
     * @param _rect The XRect object to convert.
     * @return A std::string representing the rectangle.
     * @note The resulting string will look like this: "{left,top;right,bottom}" or "{0,0;1920x1080}"
     */
    INode::SPtr ToNode(const XRect& _rect, const INode::SPtr& _dest_node = {});
} // namespace xrect

namespace xtime {
    /**
     * @brief Converts a XSegment data structure into a node.
     */
    INode::SPtr ToNode(const XSegment& _segment, const INode::SPtr& _dest_node = {});
    /**
     * @brief Converts a XSegment data structure into a node.
     */
    XSegment SegmentFromNode(const INode* _node_p);
    /**
     * @brief Converts a pointer to a XTime data structure into a node.
     * @param _time A pointer to an XTime data structure.
     * @return A INode::SPtr representation of the XTime data structure.
     */
    INode::SPtr          ToNode(const XTime* _time, const INode::SPtr& _dest_node = {});
    std::optional<XTime> FromNode(const INode* _node_p, XPath&& _path);
} // namespace xtime

namespace xstream_info {
    /**
     * @brief Converts a XStreamInfo data structure into a node.
     * @param _stream_info The XStreamInfo data structure to convert.
     * @return A INode::SPtr representation of the XStreamInfo data structure.
     */
    INode::SPtr ToNode(const XStreamInfo* _stream_info_p, const XValue& _dest_node = {});
} // namespace xstream_info

namespace xside_data {
    /**
     * @brief Converts a XSideData data structure into a node.
     * @param _side_data The XSideData data structure to convert.
     * @return A INode::SPtr representation of the XSideData data structure.
     * @note The resulting string will look like this: "type size:size_blob_data"
     */
    INode::SPtr ToNode(const XSideData& _side_data, const INode::SPtr& _dest_node = {});
} // namespace xside_data

namespace xframe_side_data {
    /**
     * @brief Converts an XFrameSideData data structure into a node.
     * @param _frame_side_data The XFrameSideData data structure to convert.
     * @return A INode::SPtr representation of the XFrameSideData data structure.
     * @note The resulting string will look like this: "type size:size_blob_data meta:metadata"
     */
    INode::SPtr ToNode(const XFrameSideData& _frame_side_data, const INode::SPtr& _dest_node = {});
} // namespace xframe_side_data

namespace xcodec {
    /**
     * @brief Converts an XCodec data structure into a node.
     * @param _codec The XCodec data structure to convert.
     * @return A INode::SPtr representation of the XCodec data structure.
     */
    INode::SPtr ToNode(const XCodec& _codec, const INode::SPtr& _dest_node = {});
    /**
     * @brief Converts an node to XCodec data structure.
     * @param _codec The XCodec data structure to convert.
     * @return A XCodec data structure or std::nullipt of failed to restore
     */
    std::optional<XCodec> FromNode(const INode* _node_p, XPath&& _codec_node_path = {});
} // namespace xcodec

namespace xplane_v {
    /**
     * @brief Converts an XPlaneV data structure to a node.
     * @param _plane_v The XPlaneV data structure to convert.
     * @return A INode::SPtr representation of the XPlaneV data structure.
     * @note The resulting string will look like this: "widthxheight(row_bytes)"
     */
    INode::SPtr ToNode(const XPlaneV& _plane, std::any&& _holder, const INode::SPtr& _dest_node = {});
    INode::SPtr ToNode(const std::vector<XPlaneV>& _planes, std::any&& _holder, const INode::SPtr& _dest_node = {});
    std::optional<std::pair<XPlaneV, xbase::IBuffer::SPtrC>> PlaneFromNode(const XValue& _plane_value);
    std::pair<std::vector<XPlaneV>, std::any>                FromNode(const INode* _node_from, XPath&& _path);
} // namespace xplane_v

namespace xplane_a {
    /**
     * @brief Converts an XPlaneA data structure to a node.
     * @param _plane_a The XPlaneA data structure to convert.
     * @return A INode::SPtr representation of the XPlaneA data structure.
     */
    INode::SPtr ToNode(const std::vector<XPlaneA>& _planes, std::any&& _holder, const INode::SPtr& _dest_node = {});
    std::pair<std::vector<XPlaneA>, std::any> FromNode(const INode* _node_from, XPath&& _path);
} // namespace xplane_a

namespace xerror {

    INode::SPtr ToNode(const std::error_code& _err, const INode::SPtr& _dest_node = {});

    std::optional<std::error_code> FromNode(const INode* _error_node);
} // namespace xerror

namespace xmedia::object {
    INode::SPtr ToNode(const IMediaObject::Uids& _uids, const INode::SPtr& _dest_node = {});

    IMediaObject::Uids UidsFromNode(const INode* _node_p, XPath&& _path);

    /**
     * @brief Converts an IMediaObject object to a node.
     * @param _object The IMediaObject object to convert.
     * @return A INode::SPtr representation of the IMediaObject object.
     */
    xbase::XResult<INode::SPtr>        ToNode(const IMediaObject* _object,
                                              const bool          _with_data,
                                              const INode::SPtr&  _dest_node = {});
    xbase::XResult<IMediaObject::SPtr> FromNode(const INode* _node_p);
} // namespace xmedia::object
} // namespace xsdk
