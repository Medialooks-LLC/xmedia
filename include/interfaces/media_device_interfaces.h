#pragma once

#include <map>
#include <string>
#include <vector>

#include "xmedia_structures.h"

namespace xsdk {

XENUM(DeviceFlag, Audio = 0x01, Video = 0x02, Input = 0x04, Output = 0x08)
XENUM_OPS32(DeviceFlag)

class IDeviceEnumerator {
public:
    virtual ~IDeviceEnumerator() = default;

    USING_PTRS(IDeviceEnumerator)

    struct DeviceInfo {
        // e.g. decklink, ndi, etc. (see constants)
        std::string device_family;
        // Device unique (for specified class) name, devices in diffrent classes may have same names
        std::string device_name;
        // Is output device (for axmple playback audio device or NDI renderer)
        DeviceFlag flags;
        // For devices w/o format selection use empty vector or vector with one format type
        std::vector<XFormat> formats_list;
        // For options w/o fixed values use vector with one XValue with desired type
        std::map<std::string, std::vector<XValue>> options_list;
    };

    // Return {device_family, is_collector}
    virtual std::pair<std::string, bool> DeviceFamily() const = 0;
    virtual std::vector<DeviceInfo>      DevicesList() const  = 0;
};

class IDeviceController {
public:
    virtual ~IDeviceController() = default;

    USING_PTRS(IDeviceController)

    struct Device {
        std::string  device_family;
        std::string  device_name;
        DeviceFlag   flags; // to be sure which type of device will be selected, e.g. Audio | Output
        XFormat      device_format;
        INode::SPtrC device_options;
    };

    // Return active device with format and actual options or error
    virtual xbase::XResult<Device> GetDevice() const = 0;
    // Get supported formats list for active device
    virtual std::vector<XFormat> GetSupportedFormats(const INode::SPtrC& _hints) const = 0;
    // Change device and return active device with format and actual options
    virtual xbase::XResult<Device> ChangeDevice(const Device& _device, const INode::SPtrC& _hints) = 0;
    // Set format for specified device and return active device with format and actual options
    virtual xbase::XResult<XFormat> ChangeFormat(const XFormat& _device_format, const INode::SPtrC& _hints) = 0;
    // Set options for specified device and return active device with format and actual options
    virtual xbase::XResult<INode::SPtrC> ChangeOptions(const INode::SPtrC& _device_options) = 0;
    // Close device (2Think)
    virtual void CloseDevice() = 0;
};

// class IDeviceFactory {
// public:
//     virtual ~IDeviceFactory() = default;
//
//     virtual xbase::XResult<IDeviceController::SPtr> CreateDevice(const IDeviceController::Device& _device,
//                                                                  const INode::SPtrC&              _hints) = 0;
// };

namespace xdevice {
    /**
     * Create a device enumerator for a specified device family.
     * @param _family Identifier of the device family (e.g., "sdl", "decklink", "ndi").
     * @return Unique pointer to the created device enumerator.
     */
    IDeviceEnumerator::UPtr CreateDeviceEnumerator(const std::string& _family);

    /**
     * Create a device controller for a given device info.
     * @param _device_info Information about the device to control.
     * @return Unique pointer to the created device controller.
     */
    IDeviceController::UPtr CreateDeviceController(const IDeviceController::Device& _device);
} // namespace xdevice

} // namespace xsdk
