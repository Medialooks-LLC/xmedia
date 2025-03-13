#pragma once

#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <variant>
#include <vector>

namespace xsdk {

/**
 * @brief The xcodec namespace provides the functionalities for working with XCodec objects.
 */
namespace xcodec {
    /**
     * @brief Compare two codecs by their properties.
     * @param _left_p The first codec.
     * @param _right_p The second codec.
     *
     * @return 0 if codecs are equal.
     */
    int32_t Compare(const XCodec& _left, const XCodec& _right);

} // namespace xcodec

/**
 * @brief The xformat namespace provides the functionalities for working with XFormat objects.
 */
namespace xformat {
    /**
     * @brief Checks if an XFormatV object is valid.
     *
     * This function checks if an XFormatV object is not a null pointer and has
     * valid specifications such as positive width and height, and an empty or valid
     * pixel format or a valid codec.
     *
     * @param _p A pointer to an XFormatV object.
     * @return true if the XFormatV object is valid, false otherwise.
     */
    bool IsValid(const XFormatV* _p);
    /**
     * @brief Checks if an XFormatA object is valid.
     *
     * This function checks if an XFormatA object is not a null pointer and has
     * valid specifications such as positive sample rate and channels, and an empty or valid
     * sample format or a valid codec.
     *
     * @param _p A pointer to an XFormatA object.
     * @return true if the XFormatA object is valid, false otherwise.
     */
    bool IsValid(const XFormatA* _p);
    /**
     * @brief Checks if an XFormatS object is valid.
     *
     * This function checks if an XFormatS object is not a null pointer and has
     * valid specifications
     *
     * @param _p A pointer to an XFormatS object.
     * @return true if the XFormatS object are valid, false otherwise.
     */
    bool IsValid(const XFormatS* _p);
    /**
     * @brief Checks if the given XFormat pointer is valid.
     *
     * This function checks if the given XFormat pointer is not a null pointer and
     * has valid specifications based on its derived type.
     *
     * @param _p A pointer to an XFormat object.
     * @return true if the XFormat object is valid, false otherwise.
     */
    bool IsValid(const XFormat* _p);

    /**
     * @brief Calculates the pixel aspect ratio (PX/PY) based on the format's aspect ratio (A/R) and dimensions.
     *
     * This function calculates the Pixel Aspect Ratio (PX/PY) based on the given format's aspect ratio (A/R) and
     * dimensions (width and height). If the input format is invalid (no aspect ratio or zero dimensions), it returns a
     * default rational number {1, 1}.
     *
     * @param _p Pointer to the XFormatV structure containing the format's aspect ratio and dimensions.
     *
     * @return A rational number representing the calculated Pixel Aspect Ratio (PX/PY).
     */
    XRational PixelAR(const XFormatV* _p);
    /**
     * @brief Calculates the aspect ratio (A/R) from the format's width and height.
     *
     * This function calculates the aspect ratio (A/R) based on the given format's width and height.
     * If the aspect ratio cannot be calculated (negative dimensions or zero aspect ratio), it returns a rational number
     * {1, 1}.
     *
     * @param _p Pointer to the XFormatV structure containing the format's dimensions.
     *
     * @return A rational number representing the calculated aspect ratio (A/R).
     */
    XRational PictureAR(const XFormatV* _p);

    /**
     * @brief Determines if the given sample format is planar.
     * @param _sample_format The sample format to check.
     * @return true if the given sample format is planar, false otherwise.
     */
    bool IsPlanarAudio(const std::string_view _sample_format);
    /**
     * @brief Calculates the number of bytes required to represent one sample in the given format.
     * @param _sample_format:The sample format to check.
     * @return The number of bytes required to represent one sample in the given format.
     */
    size_t BytesPerSample(const std::string_view _sample_format);
    /**
     * @brief Converts the number of bytes to the number of samples, based on the given sample format and channel count.
     * @param _bytes The number of bytes to convert.
     * @param _format_a_p A pointer to the given audio format.
     * @param _one_plane_bytes The flag for calculate sample count based on one audio plane size.
     * @return The number of samples.
     */
    size_t ToSamples(size_t _bytes, const XFormatA* _format_a_p, const bool _one_plane_bytes);

    /**
     * @brief Compare two media formats by their properties.
     * @param _left_p The first media format.
     * @param _right_p The second media format.
     *
     * @return 0 if media formats are equal.
     */
    int32_t Compare(const XFormat& _left, const XFormat& _right);
    /**
     * @brief Compare two media formats by their properties.
     * @param _left_p The first media format.
     * @param _right_p The second media format.
     *
     * @return 0 if media formats are equal.
     */
    int32_t Compare(const XFormat* _left_p, const XFormat* _right_p);
    /**
     * @brief Compare two media formats by their properties.
     * @param _left_p The first media format.
     * @param _right_p The second media format.
     *
     * @return 0 if media formats are equal.
     */
    int32_t Compare(const XFormatA* _left_p, const XFormatA* _right_p);
    /**
     * @brief Compare two media formats by their properties.
     * @param _left_p The first media format.
     * @param _right_p The second media format.
     *
     * @return 0 if media formats are equal.
     */
    int32_t Compare(const XFormatV* _left_p, const XFormatV* _right_p);
    /**
     * @brief Compare two media formats by their properties.
     * @param _left_p The first media format.
     * @param _right_p The second media format.
     *
     * @return 0 if media formats are equal.
     */
    int32_t Compare(const XFormatS* _left_p, const XFormatS* _right_p);
    /**
     * @brief Compare only specfied props in _base_p, if props not specified it could be any.
     * @param _base_p The first media format.
     * @param _check_p The second media format.
     *
     * @return true if media formats are compatible.
     */
    bool IsCompatible(const XFormat* _base_p, const XFormat* _check_p);

    /**
     * @brief Compare only specfied props in _base_p, if props not specified it could be any.
     * @param _base_p The first media format.
     * @param _check_p The second media format.
     *
     * @return true if media formats are compatible.
     */
    bool IsCompatible(const XFormatA* _base_p, const XFormatA* _check_p);

    /**
     * @brief Compare only specfied props in _base_p, if props not specified it could be any.
     * @param _base_p The first media format.
     * @param _check_p The second media format.
     *
     * @return true if media formats are compatible.
     */
    bool IsCompatible(const XFormatV* _base_p, const XFormatV* _check_p);

    /**
     * @brief This function returns the corresponding XCodec object based on the given XFormat.
     * @param _format_p: A pointer to an XFormat object.
     * @return A pointer to the XCodec object corresponding to the XFormat object, or nullptr if the XFormat object does
     * not have a valid codec.
     */
    const XCodec* Codec(const XFormat* _format_p);

    // INode conversions
    INode::SPtr ToNode(const XFormatV* _format_p, bool _with_codec_props, const INode::SPtr& _dst_node = {});
    INode::SPtr ToNode(const XFormatA* _format_p, bool _with_codec_props, const INode::SPtr& _dst_node = {});
    INode::SPtr ToNode(const XFormat* _format_p, bool _with_codec_props, const INode::SPtr& _dst_node = {});

    std::optional<XFormatV> VideoFromNode(const INode::SPtrC& _format_desc);
    std::optional<XFormatA> AudioFromNode(const INode::SPtrC& _format_desc);
    XFormat                 FromNodes(const std::vector<INode::SPtrC>& _format_nodes);
    /**
     * @brief Checks if an XFormatV object is empty.
     *
     * This function checks if an XFormatV object is a null pointer and has
     * empty specifications such as zero width and height and empty
     * pixel format and a empty codec.
     *
     * @param _p A pointer to an XFormatV object.
     * @return true if the XFormatV object is empty, false otherwise.
     */
    bool IsEmpty(const XFormatV* _p);

    /**
     * @brief Checks if an XFormatA object is empty.
     *
     * This function checks if an XFormatA object is a null pointer and has
     * empty specifications such as zero sample rate and channels, and an empty
     * sample format and a empty codec.
     *
     * @param _p A pointer to an XFormatA object.
     * @return true if the XFormatA object is empty, false otherwise.
     */
    bool IsEmpty(const XFormatA* _p);

    /**
     * @brief Checks if an XFormatV object is hardware accelerated format, and return hw devicve type
     */
    std::optional<HWDeviceType> HWDeviceTypeGet(const XFormatV* _format_v_p);

    /**
     * @brief Compare two hardware acceleration props of two media formats.
     */
    int32_t CompareHW(const XFormatV* _left_p, const XFormatV* _right_p);

    /**
     * @brief Update format optional, not specified fields from default format
     * (exclude .codec member)
     * @param _dest_p A pointer to an XFormatV target object.
     * @param _default_p A pointer to an XFormatV with default optional valuie.
     * @return number of updated optional fields
     */
    size_t FillOptionalFields(XFormatV* _dest_p, const XFormatV* _default_p);
} // namespace xformat

} // namespace xsdk
