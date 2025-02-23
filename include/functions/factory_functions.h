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

namespace xsdk::xmedia {

static constexpr size_t   kWorkersPoolMinSize         = 4;
static constexpr size_t   kWorkersPoolMaxSize         = 128;
static constexpr uint32_t kWorkersPoolIdleTimeoutMsec = 3000;

/// @brief default xmedia scheduler.
xbase::IWorker::SPtr WorkersPool();
/// @brief default xmedia scheduler (use default workers pool)
xbase::IScheduler::SPtr Scheduler();

/// @brief Get IMediaObjectsFactory instance.
IMediaObjectsFactory* ObjectsFactory();
/// @brief Get IMediaHandlersFactory instance.
IMediaHandlersFactory* HandlersFactory();

// TODO: Discuss about config & factory usage, now is basic test impl.
INode::SPtr FactoryConfig(XPath&& _path = {}, bool _create_path = false);

/**
 * @brief Helpers for create wrapping props (used in ItemDesc::wrapping_props member)
 */
INode::SPtr CreateWrappingProps(const std::vector<std::pair<std::string_view, INode::SPtrC>>& _wrappers_list);

/**
 * @brief Factory function for creating media handlers.
 * @tparam TInterface The type of interface to query for after creation.
 * @param _handler_type The type of media handler to create.
 * @param _props Optional creation properties.
 * @param _stat_dest Node to store handler statistics.
 * @return Returns an XResult with a shared pointer to the newly created handler object if successful,
 *         or an error if creation fails.
 */
template <typename TInterface>
xbase::XResult<std::shared_ptr<TInterface>> HandlerCreateByName(
    const std::string_view                 _handler_name,
    const std::optional<std::string_view>& _instance_name    = {},
    IData::SPtrC&&                         _outer_interfaces = {},
    INode::SPtr&&                          _stat_dest        = {})
{
    auto handler_res = xmedia::HandlersFactory()->CreateByName(_handler_name,
                                                               _instance_name,
                                                               std::move(_outer_interfaces),
                                                               std::move(_stat_dest));
    if (handler_res.HasError())
        return handler_res.Error();

    auto desired_intrerface = xobject::PtrQuery<TInterface>(handler_res.Result().get());
    if (!desired_intrerface)
        return XError::InvalidCast;

    return desired_intrerface;
}

/**
 * @brief Factory function for creating and initializing media handlers.
 * @tparam TInterface The type of interface to query for after creation and initialization.
 * @param _create_init_params - name or type, url, props
 * @param _input_streams_props Optional input streams properties.
 * @param _handler_stat Node to store handler statistics.
 * @return Returns an XResult with a shared pointer to the newly created and initialized handler object if
 * successful, or an error if creation fails.
 */
template <typename TInterface>
xbase::XResult<std::shared_ptr<TInterface>> HandlerCreateAndInit(const IContainerScheme::ItemDesc& _create_init_params,
                                                                 MediaPropsVec&& _input_streams_props = {},
                                                                 IData::SPtrC&&  _outer_interfaces    = {},
                                                                 INode::SPtr&&   _handler_stat        = {})
{
    auto handler_res = xmedia::HandlersFactory()->CreateAndInit(_create_init_params,
                                                                std::move(_input_streams_props),
                                                                std::move(_outer_interfaces),
                                                                std::move(_handler_stat));
    if (handler_res.HasError())
        return handler_res.Error();

    auto desired_intrerface = xobject::PtrQuery<TInterface>(handler_res.Result().get());
    if (!desired_intrerface)
        return XError::InvalidCast;

    return desired_intrerface;
}

template <typename TInterface>
xbase::XResult<std::shared_ptr<TInterface>> HandlerCreateByProps(const IContainerScheme::ItemDesc& _create_init_params,
                                                                 MediaPropsVec&& _input_streams_props = {},
                                                                 IData::SPtrC&&  _outer_interfaces    = {},
                                                                 INode::SPtr&&   _handler_stat        = {})
{
    auto handler_res = xmedia::HandlersFactory()->CreateByProps(_create_init_params,
                                                                std::move(_input_streams_props),
                                                                std::move(_outer_interfaces),
                                                                std::move(_handler_stat));
    if (handler_res.HasError())
        return handler_res.Error();

    auto desired_intrerface = xobject::PtrQuery<TInterface>(handler_res.Result().get());
    if (!desired_intrerface)
        return XError::InvalidCast;

    return desired_intrerface;
}

/**
 * @brief Factory function for creating and initializing media handlers.
 * @tparam TInterface The type of interface to query for after creation and initialization.
 * @param _type_name_or_scheme The type or name of media handler or container scheme to create and initialize.
 * @param _init_url_or_func The initialization parameter, which can be either a URL or a function.
 * @param _init_props Optional initialization properties.
 * @param _input_streams_props Optional input streams properties.
 * @param _wrapping_props Optional creation properties.
 * @param _handler_stat Node to store handler statistics.
 * @return Returns an XResult with a shared pointer to the newly created and initialized handler object if
 * successful, or an error if creation fails.
 */
template <typename TInterface>
xbase::XResult<std::shared_ptr<TInterface>> HandlerCreateAndInit(
    const std::variant<HandlerType, std::string, IContainerScheme::SPtrC>& _type_name_or_scheme,
    IMediaHandler::InitParamsVariant&&                                     _init_url_or_func,
    const INode::SPtrC&                                                    _init_props          = {},
    MediaPropsVec&&                                                        _input_streams_props = {},
    const INode::SPtrC&                                                    _wrapping_props      = nullptr,
    IData::SPtrC&&                                                         _outer_interfaces    = {},
    INode::SPtr&&                                                          _handler_stat        = {})
{
    return xmedia::HandlerCreateAndInit<TInterface>(
        IContainerScheme::ItemDesc {_type_name_or_scheme, _init_url_or_func, _init_props, _wrapping_props},
        std::move(_input_streams_props),
        std::move(_outer_interfaces),
        std::move(_handler_stat));
}

} // namespace xsdk::xmedia
