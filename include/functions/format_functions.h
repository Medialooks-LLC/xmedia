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
    size_t BytesToSamples(const size_t _bytes, const XFormatA* _format_a_p, const bool _one_plane_bytes);
    /**
     * @brief Converts the number of samples to the number of bytes, based on the given sample format and channel count.
     * @param _samples_count The number of samples to convert.
     * @param _format_a_p A pointer to the given audio format.
     * @param _one_plane_bytes The flag for calculate sample count based on one audio plane size.
     * @return The number of bytes.
     */
    size_t SamplesToBytes(const size_t _samples_count, const XFormatA* _format_a_p, const bool _one_plane_bytes);
    /**
     * @brief Converts the time in 100 nsec units to the number of samples, based on the given sample rate.
     * @param _time The time in 100 nsec units.
     * @param _sample_rate Given sample rate.
     * @return The number of samples.
     */
    int64_t TimeToSamples(const xbase::Time64 _time, const int32_t _sample_rate);
    /**
     * @brief Converts the number of samples to the 100 nsec uinit, based on the given sample rate.
     * @param _samples_count The number of samples to convert.
     * @param _sample_rate Given sample rate.
     * @return The time in 100 nsec units.
     */
    xbase::Time64 SamplesToTime(const size_t _samples_count, const int32_t _sample_rate);
    /**
     * @brief Converts the time in 100 nsec units to the number of samples, based on the given sample rate.
     * @param _time The time in 100 nsec units.
     * @param _format_a_p A pointer to the given audio format.
     * @return The number of samples.
     */
    int64_t TimeToSamples(const xbase::Time64 _time, const XFormatA* _format_a_p);
    /**
     * @brief Converts the number of samples to the 100 nsec uinit, based on the given sample rate.
     * @param _samples_count The number of samples to convert.
     * @param _format_a_p A pointer to the given audio format.
     * @return The time in 100 nsec units.
     */
    xbase::Time64 SamplesToTime(const size_t _samples_count, const XFormatA* _format_a_p);

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
    INode::SPtr ToConversionProps(const XFormat&      _format,
                                  const INode::SPtrC& _conversion_props = {},
                                  INode::SPtr&&       _dst_node         = {});

    inline const XFormatA* Audio(const XFormat* _format_p) { return _format_p ? _format_p->Audio() : nullptr; }

    inline const XFormatV* Video(const XFormat* _format_p) { return _format_p ? _format_p->Video() : nullptr; }

    inline const XFormatS* Subtitle(const XFormat* _format_p) { return _format_p ? _format_p->Subtitle() : nullptr; }

    std::optional<XFormatV> VideoFromNode(const INode::SPtrC& _format_desc,
                                          const XFormatV*     _base_format_p,
                                          const bool          _override_base);
    std::optional<XFormatA> AudioFromNode(const INode::SPtrC& _format_desc,
                                          const XFormatA*     _base_format_p,
                                          const bool          _override_base);
    XFormat                 FromNodes(const std::vector<INode::SPtrC>& _format_nodes,
                                      const XFormat*                   _base_format_p,
                                      const bool                       _override_base);
    XFormat                 FromConversionProps(const INode::SPtrC& _conversion_props,
                                                const XFormat*      _base_format_p,
                                                const bool          _override_base);

    XFormat MakeFormat(const IMediaOutput* _media_output, const bool _only_valid_formats);

    XFormatV Combine(const XFormatV& _base, const XFormatV* _override_p);

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
     * @brief Checks if an XFormat object is empty
     *
     * This function checks if an XFormatA object is a null pointer and has
     * empty specifications such as zero sample rate and channels, and an empty
     * sample format and a empty codec.
     *
     * @param _p A pointer to an XFormat object.
     * @return true if the XFormatA object is empty, false otherwise.
     */
    bool IsEmpty(const XFormat* _p);

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

/**
 * @brief The xrect namespace provides the functionalities for working with XRect objects.
 */
namespace xrect {
    bool    IsEmpty(const XRect* _rect_p);
    bool    IsZero(const XRect* _rect_p, const bool _negative_as_zero);
    XSize   Size(const XRect* _rect_p);
    int32_t Compare(const XRect* _rect1_p, const XRect* _rect2_p);
    XRect   ToCrop(const XRect* _rect_p, const XSize _image_size, const bool _no_negative_values);

    inline int32_t Width(const XRect* _rect_p) { return _rect_p ? _rect_p->right - _rect_p->left : 0; }

    inline int32_t Height(const XRect* _rect_p) { return _rect_p ? _rect_p->bottom - _rect_p->top : 0; }
} // namespace xrect

} // namespace xsdk
