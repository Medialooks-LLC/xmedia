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

namespace xnode {
    /**
     * @brief Converts an INode pointer to a std::string.
     * @param _node The INode pointer to convert.
     * @param _deep The depth parameter, a depth of 0 will print the whole nodes structure.
     * @return A std::string representing the INode.
     */
    std::string ToString(INode::SPtrC _node, size_t _deep);
} // namespace xnode

namespace xrational {
    /**
     * @brief Converts a XRational object to a std::string.
     * @param _rat The XRational object to convert.
     * @param _ch_delimer The character to use as delimiter, default is '/'.
     * @return A std::string representing the rational number.
     * @note The resulting string will look like this: "num/den" or "3/4"
     */
    std::string ToString(const XRational& _rat, char _ch_delimer = '/');
    /**
     * @brief Converts a optional XRational object to a std::string.
     * @param _rat The XRational object to convert.
     * @param _ch_delimer The character to use as delimiter, default is '/'.
     * @param _value_for_nullopt The string returned if _rat is std::nullopt, default is empty string.
     * @return A std::string representing the rational number.
     * @note The resulting string will look like this: "num/den" or "3/4"
     */
    std::string ToString(const std::optional<XRational>& _rat,
                         char                            _ch_delimer        = '/',
                         const std::string_view          _value_for_nullopt = {});
} // namespace xrational

namespace xsize {
    /**
     * @brief Converts a XSize object to a std::string.
     * @param _size The XSize object to convert.
     * @param _ch_delimer The character to use as delimiter, default is 'x'.
     * @return A std::string representing the size.
     * @note The resulting string will look like this: "cxxcy" or "1920x1080"
     */
    std::string ToString(const XSize& _size, char _ch_delimer = 'x');
} // namespace xsize

namespace xrect {
    /**
     * @brief Converts a XRect object to a std::string.
     * @param _rect The XRect object to convert.
     * @return A std::string representing the rectangle.
     * @note The resulting string will look like this: "{left,top;right,bottom}" or "{0,0;1920x1080}"
     */
    std::string ToString(const XRect& _rect);
} // namespace xrect

namespace xtime {
    /**
     * @brief Converts a XSegment data structure into a string.
     */
    std::ostringstream ToString(const XSegment& _segment, std::ostringstream&& _out_ss = {});
    /**
     * @brief Converts a XTime data structure into a string.
     * @param _time The XTime data structure to convert.
     * @return A string representation of the XTime data structure.
     */
    std::string ToString(const XTime& _time);
    /**
     * @brief Converts a pointer to a XTime data structure into a string.
     * @param _time A pointer to an XTime data structure.
     * @return A string representation of the XTime data structure.
     */
    std::string ToString(const XTime* _time);
} // namespace xtime

namespace xstream_info {
    /**
     * @brief Converts a XStreamInfo data structure into a string.
     * @param _stream_info The XStreamInfo data structure to convert.
     * @return A string representation of the XStreamInfo data structure.
     */
    std::string ToString(const XStreamInfo& _stream_info);
    /**
     * @brief Converts a pointer to a XStreamInfo data structure into a string.
     * @param _stream_info A pointer to an XStreamInfo data structure.
     * @return A string representation of the XStreamInfo data structure.
     */
    std::string ToString(const XStreamInfo* _stream_info);
} // namespace xstream_info

namespace xside_data {
    /**
     * @brief Converts a XSideData data structure into a string.
     * @param _side_data The XSideData data structure to convert.
     * @return A string representation of the XSideData data structure.
     * @note The resulting string will look like this: "type size:size_blob_data"
     */
    std::string ToString(const XSideData& _side_data);
} // namespace xside_data

namespace xframe_side_data {
    /**
     * @brief Converts an XFrameSideData data structure into a string.
     * @param _frame_side_data The XFrameSideData data structure to convert.
     * @return A string representation of the XFrameSideData data structure.
     * @note The resulting string will look like this: "type size:size_blob_data meta:metadata"
     */
    std::string ToString(const XFrameSideData& _frame_side_data);
} // namespace xframe_side_data

namespace xcodec {
    /**
     * @brief Converts an XCodec data structure into a string.
     * @param _codec The XCodec data structure to convert.
     * @return A string representation of the XCodec data structure.
     */
    std::string ToString(const XCodec& _codec);
} // namespace xcodec

namespace xformat {
    /**
     * @brief Converts an XFormatA object to a string.
     * @param _format The XFormatA object to convert.
     * @return A string representation of the XFormatA object.
     * @note The resulting string will look like this: "fmt_a:channels(channels_layout):sample_rate:sample_format
     * codec:codec_id"
     */
    std::string ToString(const XFormatA* _format);
    /**
     * @brief Converts an XFormatV object to a string.
     * @param _format_v_p The XFormatV object to convert.
     * @return A string representation of the XFormatV object.
     * @note The resulting string will look like this: "fmt_v:widthxheight@frame_rate ar:picture_ar pf:pixel_format
     * codec:codec_id"
     */
    std::string ToString(const XFormatV* _format_v_p);
    /**
     * @brief Converts an XFormatS object to a string.
     * @param _format The XFormatS object to convert.
     * @return A string representation of the XFormatV object.
     * @note The resulting string will look like this: "fmt_s codec:codec_id"
     */
    std::string ToString(const XFormatS* _format);
    /**
     * @brief Converts an XFormatAV object to a string.
     * @param _format The XFormatAV object to convert.
     * @return A string representation of the XFormatAV object.
     * @note The resulting string will look like this: "fmt_v:....;fmt_a:...."
     */
    // std::string ToString(const XFormatAV* _format);
    /**
     * @brief Converts an XFormat object to a string.
     * @param _format The XFormat object to convert.
     * @return A string representation of the XFormat object.
     */
    std::string ToString(const XFormat* _format);
} // namespace xformat

namespace xplane_v {
    /**
     * @brief Converts an XPlaneV data structure to a string.
     * @param _plane_v The XPlaneV data structure to convert.
     * @return A string representation of the XPlaneV data structure.
     * @note The resulting string will look like this: "widthxheight(row_bytes)"
     */
    std::string ToString(const XPlaneV& _plane_v);
} // namespace xplane_v

namespace xplane_a {
    /**
     * @brief Converts an XPlaneA data structure to a string.
     * @param _plane_a The XPlaneA data structure to convert.
     * @return A string representation of the XPlaneA data structure.
     */
    std::string ToString(const XPlaneA& _plane_a, const XFormatA* _format_p = nullptr);
} // namespace xplane_a

namespace xprogram {
    /**
     * @brief Converts an XProgram data structure to a string.
     * @param _program The XProgram data structure to convert.
     * @return A string representation of the XProgram data structure.
     */
    std::string ToString(const XProgram& _program);
} // namespace xprogram

namespace xmedia::object {
    /**
     * @brief Converts an IMediaObject object to a string.
     * @param _object The IMediaObject object to convert.
     * @return A string representation of the IMediaObject object.
     */
    std::string ToString(const IMediaObject* _object, bool _try_convert = true);
} // namespace xmedia::object

namespace xmedia::chunk {
    /**
     * @brief Converts an IMediaChunk object to a string.
     * @param _chunk The IMediaChunk object to convert.
     * @return A string representation of the IMediaChunk object.
     */
    std::string ToString(const IMediaChunk* _chunk);
} // namespace xmedia::chunk

namespace xmedia::props {
    /**
     * @brief Converts an IMediaUnit object to a string.
     * @param _props The IMediaUnit object to convert.
     * @return A string representation of the IMediaUnit object.
     */
    std::string ToString(const IMediaUnit* _props);
} // namespace xmedia::props

namespace xmedia::packet {
    /**
     * @brief Converts an IMediaPacket object to a string.
     * @param _packet The IMediaPacket object to convert.
     * @return A string representation of the IMediaPacket object.
     */
    std::string ToString(const IMediaPacket* _packet);
} // namespace xmedia::packet

namespace xmedia::frame {
    /**
     * @brief Converts an IMediaFrame object to a string.
     * @param _frame The IMediaFrame object to convert.
     * @return A string representation of the IMediaFrame object.
     */
    std::string ToString(const IMediaFrame* _frame);
} // namespace xmedia::frame

namespace xmedia::handler {
    /**
     * @brief Converts an HandlerType to a string.
     * @param _type The HandlerType to convert.
     * @return A string representation of the HandlerType value.
     */
    std::string ToString(const HandlerType _type);
    /**
     * @brief Converts an IMediaHandler object to a string.
     * @param _handler The IMediaHandler object to convert.
     * @return A string representation of the IMediaHandler object.
     */
    std::string ToString(const IMediaHandler* _handler);
} // namespace xmedia::handler

namespace xmedia::source {
    /**
     * @brief Converts an IMediaHandler object to a string.
     * @param _source The IMediaHandler object to convert.
     * @return A string representation of the IMediaHandler object.
     */
    std::string ToString(const IMediaHandler* _source);
} // namespace xmedia::source

namespace xmedia {
    /**
     * @brief Converts an IMediaHandler::InitParamsVariant to a string.
     * @param _init_url_or_func The IMediaHandler::InitParamsVariant convert.
     * @return A string representation of the IMediaHandler::InitParamsVariant object.
     */
    std::string ToString(const IMediaHandler::InitParamsVariant& _init_url_or_func);

    /**
     * @brief Converts an MediaUnitsVec to a string.
     * @param _input_streams_props The MediaUnitsVec convert.
     * @return A string representation of the MediaUnitsVec object.
     */
    std::string ToString(const MediaUnitsVec& _input_streams_props, const bool _short_info = false);

    // TODO: Make support for custom ToString(..) ?
    template <class TResult>
    std::string ToString(const xbase::XResult<TResult>& _xr)
    {
        if (_xr.HasError())
            return xerror::ToString(_xr.Error());

        if (_xr.HasResult())
            return "xres:" + std::to_string(_xr.Result());

        return "xres:empty";
    }
} // namespace xmedia

} // namespace xsdk
