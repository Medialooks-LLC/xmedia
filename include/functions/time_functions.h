#pragma once

#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace xsdk::xtime {

const XTime* TimeGet(const IMediaObject* _obj_p);
/**
 * @brief Helper function to retrieve a timebase from an XTime object.
 * @param _time_p Pointer to an XTime object.
 * @return The stored timebase from XTime object or std::nullopt if the input time object is null.
 */
std::optional<XRational> Timebase(const XTime* _time_p);
/**
 * @brief Converts the given time reperesentation with using time base to real-time representation.
 * @param _time Current time representation.
 * @param _time_base Optional timebase for convertaion.
 * @return The real-time representation or null opt if the input time or time base is invalid.
 */
std::optional<xbase::Time64> ToRT(int64_t _time, const std::optional<XRational>& _time_base);
/**
 * @brief Converts an XTime object to real-time representation.
 * @param _time_p Pointer to an XTime object.
 * @param _pts_time Flag for return packet pts time (by default is dts)
 * @return The real-time representation or null opt if the input time object is null.
 */
std::optional<xbase::Time64> ToRT(const XTime* _time_p, const bool _pts_time = false);
/**
 * @brief Converts real-time representation to another one with using input time base.
 * @param _rtTime Real-time representation.
 * @param _time_base Time base.
 * @param _llReplaceNoVal Value to replace null opt in output.
 * @return The new representation of time.
 */
int64_t FromRT(xbase::Time64                   _rtTime,
               const std::optional<XRational>& _time_base,
               int64_t                         _llReplaceNoVal = time64::kNoVal);

/**
 * @brief Check is playing segment start changed.
 */
bool IsNewSegment(const XTime* _time_p, const XTime& _recent_time);

/**
 * @brief Helper function to extract Packet extra data from an XTime object.
 * @param _time_p Pointer to an XTime object.
 * @return The packet extra data or an empty packet if the input time object is null or its extra data
 * is not set.
 */
XTime::Packet PacketExtra(const XTime* _time_p);
/**
 * @brief Helper function to extract Frame extra data from an XTime object.
 * @param _time_p Pointer to an XTime object.
 * @return The frame extra data or an empty frame if the input time object is null or its extra data is
 * not set.
 */
XTime::Frame FrameExtra(const XTime* _time_p);

/**
 * @brief Function for calculate next frame time from given one.
 * @return The next frame time if possible to calulate it's
 */
std::optional<XTime> NextFrameTime(const XTime* _time_p, const std::optional<XRational>& _frame_rate = {});

/**
 * @brief Function for store XSegment into INode
 * @return The node with XSegment 'in', 'out'
 */
INode::SPtr ToNode(const XSegment& _segment, const INode::SPtr& _dest_node = nullptr);

} // namespace xsdk::xtime
