#pragma once

#include "xbase.h"
#include "xnode.h"

#include <map>
#include <string>
#include <vector>

namespace xsdk {

class IMediaDeviceInfo {
public:
    struct DeviceInfo {
        // e.g. decklink, ndi, etc. (see constants)
        std::string device_class;
        // Device unique (for specified class) name, devices in diffrent classes may have same names
        std::string device_name;
        // For devices w/o format selection use empty vector or vector with one format type
        std::vector<XFormat> formats_list;
        // For options w/o fixed values use vector with one XValue with desired type
        std::map<std::string, std::vector<XValue>> options_list;
    };

    virtual std::vector<DeviceInfo> DevicesList() const = 0;
};

class IMediaDevice: public IMediaDeviceInfo {
public:
    virtual ~IMediaDevice() = default;

    USING_PTRS(IMediaDevice)

    struct Device {
        std::string  device_name;
        XFormat      device_format;
        INode::SPtrC device_options;
    };

    // Return {device_class, is_collector}, for device classes collector return active device class
    virtual std::pair<std::string, bool> GetDeviceClass() const = 0;
    // Return active device with format and actual options or error
    virtual xbase::XResult<Device> GetActiveDevice() const = 0;
    // Change device and return active device with format and actual options
    virtual xbase::XResult<Device> SetActiveDevice(const Device& _device, const INode::SPtrC& _hints) = 0;
    // Set format for specified device and return active device with format and actual options
    virtual xbase::XResult<Device> SetFormat(const XFormat& _device_format, const INode::SPtrC& _hints) = 0;
    // Set options for specified device and return active device with format and actual options
    virtual xbase::XResult<Device> SetOptions(const INode::SPtrC& _device_options) = 0;
};

} // namespace xsdk