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
#include <variant>
#include <vector>

namespace xsdk::xconfig {

// For added links existed_link_details is nullptr
// For removed links updated_link_details is nullptr
// Note: For remove links result ignored !!!
using OnLinkChangedPF = std::function<std::error_code(const std::string&  dest_name,
                                                      const INode::SPtrC& existed_link_details,
                                                      const INode::SPtrC& updated_link_details)>;

// For create ActiveContainers for subconfig
using OnCreateSubcontainerPF =
    std::function<xbase::XResult<IContainerScheme::SPtr>(const xconfig::DataFlowMode data_flow_mode,
                                                         const std::string_view      container_name)>;

// TODO: Think about factory for objects creation like below ?

// TODO: Move non public functions to internal helpers

// Create link node (Map): node name is link_source, node body (Map) is link details (could be empty)
INode::SPtr CreateLinkNode(const std::string_view _link_source, const INode::SPtrC& _details = {});
// Input is vector of nodes with name is link_source, body is details (use method above for such nodes creation)
ILinksScheme::SPtr CreateLinksScheme(const std::vector<INode::SPtrC>& _links_details,
                                     xconfig::OnLinkChangedPF&&       _on_changes_pf = {},
                                     const std::string&               _dest_name     = {});

std::optional<std::string>           ContainerTypeByFlow(const xconfig::DataFlowMode _flow_mode);
std::optional<xconfig::DataFlowMode> ContainerFlowByType(const std::string_view _container_type);
IContainerScheme::SPtrC              ContainerScheme(const IContainerScheme::ItemDesc& _item_desc);
std::pair<HandlerType, std::string>  GetTypeSubtype(const IContainerScheme::ItemDesc& _item_desc);

// Return {name, is_specified}
std::pair<std::string, bool> BaseNameGet(const IContainerScheme::ItemDesc& _item_desc);

xbase::XResult<IContainerScheme::SPtr> CreateContainerScheme(const xconfig::DataFlowMode       _flow_mode,
                                                             const std::optional<std::string>& _scheme_name,
                                                             OnCreateSubcontainerPF&& _on_create_subconfig = {},
                                                             OnLinkChangedPF&&        _on_link_changes_pf  = {});

xbase::XResult<size_t> CopyContainerScheme(const IContainerScheme::SPtrC& _source, const IContainerScheme::SPtr& _dest);

// Serialization
// 2Think:
// - Make something like ISerializer / IConfigSerializer interface ?
// - add 'serialize' namespace ?

xbase::XResult<INode::SPtr> StoreItemDesc(const IContainerScheme::ItemDesc& _item_desc, INode::SPtr&& _dest_node = {});

xbase::XResult<IContainerScheme::ItemDesc> LoadItemDesc(const INode::SPtrC&               _item_node,
                                                        const std::optional<std::string>& _instance_name_update = {});

xbase::XResult<IContainerScheme::SPtr> LoadContainerScheme(const INode::SPtrC&               _item_node,
                                                           const std::optional<std::string>& _instance_name = {});

xbase::XResult<INode::SPtr> StoreLinks(const std::vector<INode::SPtrC>& _links, INode::SPtr&& _dest_node = {});

xbase::XResult<std::vector<INode::SPtrC>> LoadLinks(const INode::SPtrC& _links_node);

xbase::XResult<INode::SPtr> StoreHandlers(const IContainerScheme* _container_scheme_p, INode::SPtr&& _dest_node = {});

xbase::XResult<size_t> LoadHandlers(IContainerScheme* _container_scheme_p, const INode::SPtrC& _scheme_node);

} // namespace xsdk::xconfig
