#pragma once

#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace xsdk::xtime {

// Have to be removed as switched to IMediaUnit
const XTime* TimeGet(const IMediaObject* _obj_p);

/**
 * @brief Helper function for get XTime with check of null pointer
 **/
inline const XTime* Time(const IMediaUnit* _unit_p) { return _unit_p ? _unit_p->Time() : nullptr; }

/**
 * @brief Helper function for check of live rate control
 **/
bool IsLiveRateControl(const XTime* _time_p, const bool _default_value);

/**
 * @brief Helper function to check is _time_p non null and _time_p->timestamp != kNoVal.
 **/
bool IsValid(const XTime* _time_p);
/**
 * @brief Helper function to retrieve a timebase from an XTime object.
 * @param _time_p Pointer to an XTime object.
 * @return The stored timebase from XTime object or std::nullopt if the input time object is invalid.
 */
std::optional<XRational> Timebase(const XTime* _time_p);
/**
 * @brief Converts the given time reperesentation with using time base to time64 (1/10'000'000 sec) representation.
 * @param _time Current time representation.
 * @param _time_base Optional timebase for convertaion.
 * @return The time64 (1/10'000'000 sec) representation or null opt if the input time or time base is invalid.
 */
std::optional<xbase::Time64> ToRT(int64_t _time, const std::optional<XRational>& _time_base);
/**
 * @brief Converts an XTime object to time64 (1/10'000'000 sec) representation.
 * @param _time_p Pointer to an XTime object.
 * @param _pts_time Flag for return packet pts time (by default is dts)
 * @return The time64 (1/10'000'000 sec) representation or null opt if the input time object is invalid.
 */
std::optional<xbase::Time64> ToRT(const XTime* _time_p, const bool _pts_time = false);
/**
 * @brief Converts an XTime object to units (default is seconds) representation.
 * @param _time_p Pointer to an XTime object.
 * @param _pts_time Flag for return packet pts time (by default is dts)
 * @param _unit_per_sec Unit duration in time64 (1/10'000'000 sec).
 * @return The double units (e.g. seconds) representation or null opt if the input time object is invalid.
 */
std::optional<double> ToUnits(const XTime*        _time_p,
                              const bool          _pts_time      = false,
                              const xbase::Time64 _unit_duration = time64::kSecond);
/**
 * @brief Converts an XTime object to time64 (1/10'000'000 sec) representation.
 * @param _time_p Pointer to an XTime object.
 * @param _pts_time Flag for return packet pts time (by default is dts)
 * @return The time64 (1/10'000'000 sec) representation or null opt if the input time object is invalid.
 */
std::optional<xbase::Time64> ToRT(const std::optional<XTime>& _time, const bool _pts_time = false);
/**
 * @brief Converts time64 (1/10'000'000 sec) representation to another one with using input time base.
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
bool IsNewSegment(const XTime* _time_p, const XTime* _recent_time_p);

/**
 * @brief Helper function to extract Packet extra data from an XTime object.
 * @param _time_p Pointer to an XTime object.
 * @return The packet extra data or an empty packet if the input time object is invalid or its extra data
 * is not set.
 */
XTime::Packet PacketExtra(const XTime* _time_p);
/**
 * @brief Helper function to update Packet extra data for an XTime object.
 * @param _time an XTime object.
 * @param _create_new create new packet extradata with default values.
 * @return The packet extra data pointer or nullptr if no packet extra
 */
XTime::Packet* PacketExtra(XTime& _time, bool _create_new);
/**
 * @brief Helper function to check if XTime for key frame packet
 * @param _time_p Pointer to an XTime object.
 * @param _value_for_frame returned value for frames, of not set as PictureType::TypeI flag as key (if has ones)
 * @return true for key-frame packet, _value_for_frame if it's frame and false for null
 */
bool IsKeyPacket(const XTime* _time_p, const std::optional<bool> _value_for_frame);
/**
 * @brief Helper function to extract Frame extra data from an XTime object.
 * @param _time_p Pointer to an XTime object.
 * @return The frame extra data or an empty frame if the input time object is invalid or its extra data is
 * not set.
 */
XTime::Frame FrameExtra(const XTime* _time_p);
/**
 * @brief Helper function to update Frame extra data for an XTime object.
 * @param _time an XTime object.
 * @param _create_new create new frame extradata with default values.
 * @return The frame extra data pointer or nullptr if no frame extra
 */
XTime::Frame* FrameExtra(XTime& _time, bool _create_new);

/**
 * @brief Function for calculate end frame time based on duration.
 * @return The end frame time if possible to calulate it's
 */
std::optional<xbase::Time64> EndTime(const XTime* _time_p, const std::optional<XRational>& _frame_rate);
/**
 * @brief Function for calculate next frame time from given one.
 * @return The next frame time if possible to calulate it's
 */
std::optional<XTime> NextFrameTime(const XTime*                    _time_p,
                                   const int32_t                   _number_of_frames = 1,
                                   const std::optional<XRational>& _frame_rate       = {});

std::pair<double, int64_t> FrameLenAlignSec(const double                    _value_sec,
                                            const std::optional<XRational>& _frame_rate,
                                            const time64::AlignType         _align_type     = time64::AlignType::kLower,
                                            const double                    _base_value_sec = 0.0);

std::pair<xbase::Time64, int64_t> FrameLenAlign64(const xbase::Time64             _value_rt,
                                                  const std::optional<XRational>& _frame_rate,
                                                  const time64::AlignType _align_type    = time64::AlignType::kLower,
                                                  const xbase::Time64     _base_value_rt = 0);

int64_t FrameStartTime64(const int64_t                   _frame_idx,
                         const std::optional<XRational>& _frame_rate,
                         const int64_t                   _base_value_rt = 0);
double  FrameStartTimeSec(const int64_t                   _frame_idx,
                          const std::optional<XRational>& _frame_rate,
                          const double                    _base_value_sec = 0.0);

XENUM_CLASS(SegmentPos,
            kTimeInvalid = 0,
            kBeforeStart = 0x01,
            kInside      = 0x10,
            kInsideFirst = 0x02 | kInside,
            kInsideLast  = 0x04 | kInside,
            kOpenSegment = 0x08 | kInside,
            kAfterEnd    = 0x20);

inline const XSegment* Segment(const XTime* _time_p) { return _time_p ? &_time_p->segment : nullptr; }

const XSegment* Segment(const IMediaUnit* _unit_p);

XSegment UpdateSegmentUid(const XSegment& _segment, const std::optional<xbase::Uid> _new_uid = {});

SegmentPos CheckSegment(const XTime* _time_p, const std::optional<XRational>& _frame_rate = {});

std::optional<xbase::Time64> TimeInSegment(const XTime* _time_p, const XSegment& _override_segment = {});
/**
 * @brief Function for store XSegment into INode
 * @return The node with XSegment 'in', 'out'
 */
INode::SPtr SegmentStore(const XSegment& _segment, const INode::SPtr& _dest_node = {});
/**
 * @brief Function for load XSegment from INode
 * @return The loaded XSegment (from 'in', 'out' node attibutes)
 */
XSegment SegmentLoad(const INode::SPtrC& _src_node, const bool _gen_segment_uid);

} // namespace xsdk::xtime
