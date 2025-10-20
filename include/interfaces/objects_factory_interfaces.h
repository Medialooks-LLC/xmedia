#pragma once

// xmedia
#include "media_objects_interfaces.h"

// xnode
#include "xbase.h"
#include "xnode.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace xsdk {

/// @brief The IMediaObjectsFactory class represents the factory for creating different media objects.
class IMediaObjectsFactory {
public:
    virtual ~IMediaObjectsFactory() = default;

    /**
     * @brief Creates a new media chunk object.
     *
     * @param _data_bytes The size of the data in bytes.
     * @param _data_p Pointer to the data.
     * @param _holder If _holder is empty, data is copied into internal buffer, otherwise only pointer is stored.
     * @param _media_uids The media object UIDs.
     * @param _timestamp The timestamp.
     * @param _extra_data Additional data.
     *
     * @return Returns an XResult with a shared pointer to the newly created media chunk object if successful,
     *         or an error if creation fails.
     */
    virtual xbase::XResult<IMediaChunk::SPtr> ChunkCreate(size_t      _data_bytes,
                                                          const void* _data_p,
                                                          std::any&&  _holder                       = {},
                                                          const std::optional<IMediaObject::Uids>&  = {},
                                                          const std::optional<uint64_t> _timestamp  = {},
                                                          const IData*                  _extra_data = nullptr) = 0;
    /**
     * @brief Creates a new media properties object.
     *
     * @param _media_uids The media object UIDs.
     * @param _format The format.
     * @param _stream_info The stream information.
     * @param _shared_metadata The shared metadata.
     * @param _programs The programs.
     * @param _extra_data Additional data.
     *
     * @return Returns an XResult with a shared pointer to the newly created media properties object if successful,
     *         or an error if creation fails.
     */
    virtual xbase::XResult<IMediaUnit::SPtr> PropsCreate(const IMediaObject::Uids&         _media_uids,
                                                         const XFormat&                    _format,
                                                         const std::optional<XStreamInfo>& _stream_info     = {},
                                                         const INode::SPtrC&               _shared_metadata = {},
                                                         std::vector<XProgram>&&           _programs        = {},
                                                         const IData*                      _extra_data = nullptr) = 0;
    // TODO: Replace in favor of IMediaUnit::Clone()
    /**
     * @brief Clones an existing media properties object
     *
     * @param _base_props The base media properties object.
     * @param _media_uids The new media object UIDs.
     * @param _format The new format.
     * @param _stream_info The new stream information.
     * @param _shared_metadata The new shared metadata.
     * @param _programs_update The updated programs.
     * @param _data_update Additional updated data.
     * @param _data_types_remove The data types to remove.
     *
     * @return Returns an XResult with a shared pointer to the cloned media properties object if successful,
     *         or an error if cloning fails.
     */
    virtual xbase::XResult<IMediaUnit::SPtr> PropsClone(const IMediaUnit*                  _base_props,
                                                        const IMediaObject::Uids&          _media_uids        = {},
                                                        const std::optional<XFormat>&      _format            = {},
                                                        const std::optional<XStreamInfo>&  _stream_info       = {},
                                                        const std::optional<INode::SPtrC>& _shared_metadata   = {},
                                                        const std::vector<XProgram>*       _programs_update   = nullptr,
                                                        const IData*                       _data_update       = nullptr,
                                                        const std::vector<uint64_t>&       _data_types_remove = {}) = 0;
    /**
     * @brief Creates a new media packet object.
     *
     * @param _base_props The base media properties object.
     * @param _time The packet time.
     * @param _data_bytes The size of the data in bytes.
     * @param _data_p Pointer to the data.
     * @param _flags The packet flags.
     * @param _extra_data Additional data.
     *
     * @return Returns an XResult with a shared pointer to the newly created media packet object if successful,
     *         or an error if creation fails.
     */
    virtual xbase::XResult<IMediaPacket::SPtr> PacketCreate(const IMediaUnit*        _base_props,
                                                            const XTime&             _time,
                                                            size_t                   _data_bytes,
                                                            const void*              _data_p,
                                                            std::any&&               _holder,
                                                            std::vector<XSideData>&& _side_data        = {},
                                                            INode::SPtr&&            _private_metadata = {}) = 0;
    /**
     * @brief Create media frame
     * @param _base_props Base properties for the frame
     * @param _time Time for the frame
     * @param _audio_planes Vector of audio planes for the frame, can be empty
     * @param _video_planes Vector of video planes for the frame, can be empty
     * @param _holder Holder for the audio/video planes data, should be provided if audio/video planes present
     * @param _side_data Vector of side data for the frame, can be empty
     * @param _subtitle Subtitle for the frame, can be empty
     * @param _private_metadata Private metadata for the frame
     * @return Returns an XResult with a shared pointer to the newly created media frame object if successful,
     *         or an error if creation fails.
     */
    virtual xbase::XResult<IMediaFrame::SPtr> FrameCreate(const IMediaUnit*               _base_props,
                                                          const XTime&                    _time,
                                                          std::vector<XPlaneA>&&          _audio_planes,
                                                          std::vector<XPlaneV>&&          _video_planes,
                                                          std::any&&                      _holder,
                                                          const std::optional<XSubtitle>& _subtitle         = {},
                                                          std::vector<XFrameSideData>&&   _side_data        = {},
                                                          INode::SPtr&&                   _private_metadata = {}) = 0;

    /**
     * @brief Create media frame
     * @param _base_props Base properties for the frame
     * @param _time Time for the frame
     * @param _planes_or_subtitle Vector of audio or video planes or subtitle structure
     * @param _holder Holder for the audio/video planes data, should be provided if audio/video planes present
     * @param _side_data Vector of side data for the frame, can be empty
     * @param _private_metadata Private metadata for the frame
     * @return Returns an XResult with a shared pointer to the newly created media frame object if successful,
     *         or an error if creation fails.
     */
    using FrameCreateVariant = std::variant<std::vector<XPlaneA>, std::vector<XPlaneV>, XSubtitle>;
    virtual xbase::XResult<IMediaFrame::SPtr> FrameCreate(const IMediaUnit*             _base_props,
                                                          const XTime&                  _time,
                                                          FrameCreateVariant&&          _planes_or_subtitle,
                                                          std::any&&                    _holder,
                                                          std::vector<XFrameSideData>&& _side_data        = {},
                                                          INode::SPtr&&                 _private_metadata = {}) = 0;
};

} // namespace xsdk
