#pragma once

// xmedia
#include "xmedia_structures.h"

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

/**
 * @brief Interface for media objects.
 * This class represents the interface for media objects. It derives from IObject and adds functionality
 * related to media handling.
 */
class IMediaObject: public IObject {
public:
    /// Type aliases for pointers to IMediaObject instances.
    USING_PTRS(IMediaObject)

    /// @brief Unique IDs for media objects.
    struct Uids {
        /// @brief Optional UID for the stream associated with the media object
        std::optional<xbase::Uid> stream_uid;
        /// @brief Optional UID for the group (e.g. ts program) of the media object.
        std::optional<xbase::Uid> group_uid;
        /// @brief Optional UID for the source (e.g. one udp stream) of the media object.
        std::optional<xbase::Uid> source_uid;
    };

    /**
     * @brief Get the type of the object.
     * @return XObjectType The type of the object.
     */
    virtual XObjectType ObjectType() const = 0;
    /**
     * @brief Get the timestamp of the media object (by default is unit utc of object creation time)
     */
    virtual xbase::Time64 Timestamp() const = 0;
    /**
     * @brief Get the UIDs associated with the media object.
     * @return Uids The UIDs of the source and stream.
     */
    virtual Uids MediaUids() const = 0;

    /**
     * @brief Get the media flags associated with the media object.
     * @return media flags.
     */
    virtual XMediaFlags MediaFlags() const = 0;

    /**
     * @brief Get the interface for data holder of the media object.
     * @return A pointer to the constant data holder interface or nullptr for objects w/o holders (e.g. for chunks).
     */
    virtual const IData* Data() const = 0;
};

// Candinate for remove, as not used  (?)
/**
 * @brief A subclass of IMediaObject for handling media data as binary chunks.
 * @deprecated This class is considered for removal as it is not used in the codebase.
 */
class IMediaChunk: public IMediaObject {
public:
    USING_PTRS(IMediaChunk)

    /**
     * @brief Get the binary data of the media chunk.
     * @return An XBlobC object containing the binary data.
     */
    virtual xbase::XBlobC BinaryData() const = 0;
};

/**
 * @brief Media object with associated properties.
 * This class represents a media object with associated properties. It derives from IMediaObject and adds
 * functionality related to media properties.
 */
class IMediaUnit: public IMediaObject {
public:
    /// Type aliases for pointers to IMediaUnit instances.
    USING_PTRS(IMediaUnit)

    /**
     * @brief Get the time of the media object.
     * @return A pointer to the constant XTime.
     */
    virtual const XTime* Time() const = 0;
    /**
     * @brief Get the format of the media object.
     * @return A pointer to the constant XFormat.
     */
    virtual const XFormat* Format() const = 0;
    /**
     * @brief Get the stream information of the media object.
     * @return A pointer to the constant XStreamInfo.
     */
    virtual const XStreamInfo* StreamInfo() const = 0;
    /**
     * @brief Get the list of programs associated with the media object.
     * @return The list of programs.
     */
    virtual std::vector<XProgram> Programs() const = 0;
    /**
     * @brief Clone the props packet or frame.
     * @param _update_uids An optional UIDs to update in the cloned object.
     * @param _update_time_p An optional time to update in the cloned object.
     * @param _update_stream_p An optional stream information to update in the cloned object.
     * @param _update_programs_p An optional list of programs to update in the cloned object.
     * @return A shared pointer to the cloned frame.
     */
    virtual IMediaUnit::SPtr Clone(const IMediaObject::Uids&          _update_uids        = {},
                                   const XTime*                       _update_time_p      = nullptr,
                                   const std::optional<XMediaFlags>   _update_media_flags = {},
                                   const XStreamInfo*                 _update_stream_p    = nullptr,
                                   const std::vector<XProgram>*       _update_programs_p  = nullptr,
                                   const std::optional<xbase::Time64> _update_timestamp   = {}) const = 0;
    /**
     * @brief Get the shared metadata of the media object.
     * @param _path The XPath to the metadata.
     * @return A shared pointer to the constant metadata node.
     */
    virtual INode::SPtrC SharedMetadata(XPath&& _path = {}) const = 0;
    /**
     * @brief Get the private metadata of the media object.
     * @param _path The XPath to the metadata.
     * @return A shared pointer to the constant metadata node.
     */
    virtual INode::SPtrC PrivateMetadata(XPath&& _path = {}) const = 0;
    /**
     * @brief Get the private metadata of the media object.
     * @param _path The XPath to the metadata.
     * @return A shared pointer to the metadata node.
     */
    virtual INode::SPtr PrivateMetadata(XPath&& _path = {}) = 0;
};

/// Type aliases for vector of pointers to IMediaUnit instances.
using MediaUnitsVec = std::vector<IMediaUnit::SPtrC>;

/**
 * @brief Media packet with encoded data and associated properties.
 * This class represents a media packet with encoded data and associated properties. It derives from IMediaUnit
 * and adds functionality related to media packet-specific properties.
 */
class IMediaPacket: public IMediaUnit {
public:
    /// Type aliases for pointers to IMediaPacket instances.
    USING_PTRS(IMediaPacket)

    /**
     * @brief Get the encoded data of the packet.
     * @param _holder_get An optional holder getter for the encoded data.
     * @return The encoded data as an XBlob.
     */
    virtual xbase::XBlobC EncodedData(std::any* _holder_get = nullptr) const = 0;
    /**
     * @brief Get the side data of the packet.
     * @param _type An optional SideDataType value for get only desired side-data types
     * @return The side data as a vector of XSideData.
     */
    virtual std::vector<XSideData> SideData(const std::optional<SideDataType> _type = std::nullopt) const = 0;
    /**
     * @brief Clone the packet
     * @param _update_uids An optional UIDs to update in the cloned object.
     * @param _update_time_p An optional time to update in the cloned object.
     * @param _update_stream_p An optional stream information to update in the cloned object.
     * @param _update_programs_p An optional list of programs to update in the cloned object.
     * @return A shared pointer to the cloned packet.
     */
    virtual IMediaPacket::SPtr ClonePacket(const std::vector<XSideData>*      _update_side_data_p = nullptr,
                                           const IMediaObject::Uids&          _update_uids        = {},
                                           const XTime*                       _update_time_p      = nullptr,
                                           const std::optional<XMediaFlags>   _update_media_flags = {},
                                           const XStreamInfo*                 _update_stream_p    = nullptr,
                                           const std::vector<XProgram>*       _update_programs_p  = nullptr,
                                           const std::optional<xbase::Time64> _update_timestamp   = {}) const = 0;
};

/**
 * @brief Media frame with video and audio planes and associated properties.
 *
 * This class represents a media frame with video and audio planes and associated properties. It derives from
 * IMediaUnit and adds functionality related to media frame-specific properties.
 */
class IMediaFrame: public IMediaUnit {
public:
    /// Type aliases for pointers to IMediaFrame instances.
    USING_PTRS(IMediaFrame)

    /**
     * @brief Get the video object planes of the frame.
     * @param _holder_get An optional holder getter for the video object planes.
     * @return The video object planes as a vector of XPlaneV.
     */
    virtual std::vector<XPlaneV> VideoPlanes(std::any* _holder_get = nullptr) const = 0;
    /**
     * @brief Get the audio planes of the frame.
     * @param _holder_get An optional holder getter for the audio planes.
     * @return The audio planes as a vector of XPlaneA.
     */
    virtual std::vector<XPlaneA> AudioPlanes(std::any* _holder_get = nullptr) const = 0;
    /**
     * @brief Get the subtitle data of the frame.
     * @return The subtitle data as a const pointer to XSubtitle, null if no subtitles
     */
    virtual const XSubtitle* Subtitle() const = 0;
    /**
     * @brief Get the side data of the frame.
     * @param _type An optional FrameSideDataType value for get only desired side-data types
     * @return The side data as a vector of XFrameSideData.
     */
    virtual std::vector<XFrameSideData> SideData(const std::optional<FrameSideDataType> _type = std::nullopt) const = 0;

    /**
     * @brief Clone the frame.
     * @param _update_uids An optional UIDs to update in the cloned object.
     * @param _update_time_p An optional time to update in the cloned object.
     * @param _update_stream_p An optional stream information to update in the cloned object.
     * @param _update_programs_p An optional list of programs to update in the cloned object.
     * @return A shared pointer to the cloned frame.
     */
    virtual IMediaFrame::SPtr CloneFrame(const std::vector<XFrameSideData>* _update_side_data_p = nullptr,
                                         const IMediaObject::Uids&          _update_uids        = {},
                                         const XTime*                       _update_time_p      = nullptr,
                                         const std::optional<XMediaFlags>   _update_media_flags = {},
                                         const XStreamInfo*                 _update_stream_p    = nullptr,
                                         const std::vector<XProgram>*       _update_programs_p  = nullptr,
                                         const std::optional<xbase::Time64> _update_timestamp   = {}) const = 0;
};

} // namespace xsdk
