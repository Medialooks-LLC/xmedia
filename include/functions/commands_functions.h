#pragma once

#include "../xmedia_errors.h"
#include "../xmedia_interfaces.h"
#include "../xmedia_structures.h"

#include "xbase.h"
#include "xnode.h"

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace xsdk::xcommands {

ICommandsExecutor::SPtr ExecutorCreate(bool _fill_commands);

xbase::XResult<ICommandsExecutor::GetTargetPF> ContainerSchemeTargetAdd(ICommandsExecutor*            _executor_p,
                                                                        const IContainerScheme::SPtr& _container_scheme,
                                                                        XPath&& _target_path = {});

xbase::XResult<ICommandsExecutor::GetTargetPF> LinksSchemeTargetAdd(ICommandsExecutor*            _executor_p,
                                                                    const IContainerScheme::SPtr& _container_scheme,
                                                                    XPath&&                       _target_path = {});

xbase::XResult<ICommandsExecutor::GetTargetPF> MediaHandlerTargetAdd(ICommandsExecutor*            _executor_p,
                                                                     const IActiveContainer::SPtr& _active_container,
                                                                     XPath&&                       _target_path = {});

xbase::XResult<ICommandsExecutor::GetTargetPF> ActiveOutputTargetAdd(ICommandsExecutor*            _executor_p,
                                                                     const IActiveContainer::SPtr& _active_container,
                                                                     XPath&&                       _target_path = {});

xbase::XResult<size_t> ActiveContainerTargetsAdd(ICommandsExecutor*            _executor_p,
                                                 const IActiveContainer::SPtr& _active_container,
                                                 XPath&&                       _target_path = {});

} // namespace xsdk::xcommands
