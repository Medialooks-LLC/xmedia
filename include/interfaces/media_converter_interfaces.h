#pragma once

#include "media_handler_interfaces.h"
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

/**
 * @brief The IFormatConversion interface provide audio/video conversions configuring
 */
class IFormatConversion {

public:
    USING_PTRS(IFormatConversion)

public:
    virtual ~IFormatConversion() = default;

    // TODO: Make helper class with format & props
    virtual std::pair<XFormat, INode::SPtrC> ConversionGet() const = 0;

    // Return true if conversion chnaged, false overwise, or error if error occured
    virtual xbase::XResult<bool> ConversionSet(const XFormat&      _conversion_format,
                                               const INode::SPtrC& _conversion_props = {}) = 0;
};

/**
 * @brief The IFormatConverter interface provide interface for audio/video conversions
 */
class IFormatConverter: public IFormatConversion {

public:
    USING_PTRS(IFormatConverter)

public:
    virtual ~IFormatConverter() = default;

    virtual xbase::XResult<IMediaUnit::SPtrC> ConverterInit(const IMediaUnit::SPtrC& _media_props) = 0;

    virtual IMediaUnit::SPtrC ConverterInput() const = 0;

    virtual IMediaUnit::SPtrC ConverterOutput() const = 0;

    virtual INode::SPtrC ConverterStat(XPath&& _path = {}) const = 0;

    virtual xbase::XResult<std::vector<IMediaFrame::SPtrC>> ConvertFrame(
        const IMediaFrame::SPtrC&         _media_frame,
        const INode::SPtrC&               _hints  = {},
        std::vector<IMediaFrame::SPtrC>&& _add_to = {}) = 0;

    // Return unprocesssed input data (e.g. rest audio or video for fps conversion)
    virtual IMediaFrame::SPtrC ConverterFlush() = 0;

    virtual void ConverterClose() = 0;
};

class IMediaConverter: public IMediaHandler, public IFormatConversion {};

namespace xconverter {

    IFormatConverter::UPtr CreateConverter(const XFormat&      _conversion_format = {},
                                           const INode::SPtrC& _conversion_props  = {},
                                           INode::SPtr&&       _stat_node         = {});

    xbase::XResult<std::vector<IMediaFrame::SPtrC>> ConvertFrames(const std::vector<IMediaFrame::SPtrC>& _frames,
                                                                  const XFormat&      _conversion_format,
                                                                  const INode::SPtrC& _conversion_props = {});

} // namespace xconverter

} // namespace xsdk
