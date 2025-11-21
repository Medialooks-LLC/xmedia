#pragma once

// xmedia
#include "media_handler_interfaces.h"
#include "media_schemes_interfaces.h"
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

// we don't use it yet, so it will be described when it will be ready to use.
// class IMediaConfig {
// public:
//    USING_PTRS(IMediaConfig)
//
//    virtual ~IMediaConfig() = default;
//
//    virtual INode::SPtr OptionsGet(const INode::SPtrC& _hints, INode::SPtr&& _base = {}) const = 0;
//};

/// @brief The IMediaHandlersFactory class represents the factory for creating different media handlers.
class IMediaHandlersFactory {
public:
    using HandlerCreatePF =
        std::function<xbase::XResult<IMediaHandler::SPtr>(const IMediaHandler::Specs& _handler_specs,
                                                          const INode::SPtrC&         _initial_props,
                                                          const std::string_view      _instance_name,
                                                          IData::SPtrC&&              _outer_interfaces,
                                                          INode::SPtr&&               _stat_dest)>;

    using IsSupportedPF = std::function<bool(const IMediaHandler::InitParamsVariant& _init_url_or_func,
                                             const INode::SPtrC&                     _init_props,
                                             const MediaUnitsVec&                    _input_streams_props)>;

    struct RegistrationData {
        // Mandatory fields
        IMediaHandler::Specs specs;
        HandlerCreatePF      create_pf;

        // Optional fields
        IsSupportedPF is_supported_pf;
        INode::SPtrC  initial_props;
    };

    using WrapperCreatePF = std::function<IMediaHandler::SPtr(
        std::variant<IMediaHandler::SPtr, IContainerScheme::ItemDesc>&& _wrapped_handler_or_desc,
        const INode::SPtrC&                                             _wrapping_props,
        const IData::SPtrC&                                             _outer_interfaces,
        const INode::SPtr&                                              _stat_dest)>;

    struct WrapperRegistrationData {
        // Mandatory fields
        std::string     wrapper_name; // Change to wrapper_type ?
        WrapperCreatePF create_pf;

        // Optional fields
        INode::SPtrC wrapper_props;
        std::string  description;
    };

public:
    virtual ~IMediaHandlersFactory() = default;

    virtual std::error_code                   HandlerRegister(RegistrationData&& _registration)                = 0;
    virtual std::vector<RegistrationData>     HandlersList() const                                             = 0;
    virtual std::vector<IMediaHandler::Specs> HandlersFind(const IContainerScheme::ItemDesc& _item_desc) const = 0;

    virtual std::error_code                      WrapperRegister(WrapperRegistrationData&& _registration) = 0;
    virtual std::vector<WrapperRegistrationData> WrappersList() const                                     = 0;

    /**
     * @brief Deprecated method for creating media handlers.
     *
     * This method is expected to be removed in favor of CreateAndInit().
     *
     * @param _handler_type The type of the media handler to create.
     * @param _wrapping_props Properties for creating the media handler.
     * @param _initial_props Base properties of the created media handler.
     * @param _handler_stat Statistics node of the created media handler.
     * @return Returns an XResult with a shared pointer to the newly created media handler object if successful,
     *         or an error if creation fails.
     */
    virtual xbase::XResult<IMediaHandler::SPtr> CreateByName(const std::string_view                 _handler_name,
                                                             const std::optional<std::string_view>& _instance_name = {},
                                                             IData::SPtrC&& _outer_interfaces                      = {},
                                                             INode::SPtr&&  _handler_stat = {}) const = 0;

    /**
     * @brief Method for creating and initializing media handlers.

     * This method creates and initializes a media handler instance.
     *
     * @param _create_init_params  The creation (include wrappers) props of the media handler to create.
     * @param _handler_stat Statistics node of the created media handler.
     * @param _input_streams_props Input stream properties for the media handler.
     * @return Returns an XResult with a shared pointer to the newly created media handler object if successful, or an
     * error if creation fails.
     */
    virtual xbase::XResult<IMediaHandler::SPtr> CreateAndInit(const IContainerScheme::ItemDesc& _create_init_params,
                                                              MediaUnitsVec&& _input_streams_props = {},
                                                              IData::SPtrC&&  _outer_interfaces    = {},
                                                              INode::SPtr&&   _handler_stat        = {}) const = 0;

    /**
     * @brief Method for creating media handlers.

     * This method creates media handler (with wrappers) for specified input props
     *
     * @param _create_init_params  The creation (include wrappers) props of the media handler to create.
     * @param _handler_stat Statistics node of the created media handler.
     * @param _input_streams_props Input stream properties for the media handler.
     * @return Returns an XResult with a shared pointer to the newly created media handler object if successful, or an
     * error if creation fails.
     */
    virtual xbase::XResult<IMediaHandler::SPtr> CreateByProps(const IContainerScheme::ItemDesc& _create_init_params,
                                                              const MediaUnitsVec& _input_streams_props = {},
                                                              IData::SPtrC&&       _outer_interfaces    = {},
                                                              INode::SPtr&&        _handler_stat        = {}) const = 0;
};

} // namespace xsdk
