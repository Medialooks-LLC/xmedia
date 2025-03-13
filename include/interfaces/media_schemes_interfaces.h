#pragma once

// xmedia
#include "media_handler_interfaces.h"
#include "media_links_interfaces.h"

#include "xbase.h"
#include "xnode.h"

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

namespace xsdk {

// TODO: Rename to ILinksScheme (?)
class ILinksScheme {
public:
    virtual ~ILinksScheme() = default;

    USING_PTRS(ILinksScheme)

    virtual size_t LinksCount(const std::optional<std::string_view>& _link_source = {}) const = 0;

    virtual std::vector<INode::SPtrC> LinksGet(const std::optional<std::string_view>& _link_source = {}) const = 0;

    virtual xbase::XResult<INode::SPtrC> LinkAdd(const std::string_view _link_source,
                                                 bool                   _update_existed,
                                                 const INode::SPtrC&    _link_details = {}) = 0;

    virtual xbase::XResult<INode::SPtrC> LinkReplace(const std::string_view             _from_name_existed,
                                                     const std::string_view             _from_name_updated,
                                                     const std::optional<INode::SPtrC>& _updated_details = {}) = 0;
    virtual xbase::XResult<INode::SPtrC> LinkRemove(const std::string_view _link_source)                       = 0;

    virtual std::vector<INode::SPtrC> LinksDetach() = 0;
};

namespace xconfig {
    XENUM_CLASS(DataFlowMode,
                // Automatically detect based on target mode or this container mode
                kDefault,
                // No link between handlers
                kFree,
                // Automatic add links for serial connection
                kSerial,
                // Automatic add links for parallel connection (each handler reacieve all strreams)
                kParallel,
                // Automatic add links for separate connection (links splitted between component, each streams recived
                // not more than one handler)
                // + special container (by default pass-through) received non-taken streams
                kSelector)
} // namespace xconfig

class IContainerScheme {
public:
    USING_PTRS(IContainerScheme)

    // Structure used for describe handler or container
    struct ItemDesc {
        std::variant<HandlerType, std::string, IContainerScheme::SPtrC> type_name_or_scheme;
        IMediaHandler::InitParamsVariant                                init_url_or_func;
        INode::SPtrC                                                    init_props;
        // 2Think: use special class for wrapping props ?
        INode::SPtrC               wrapping_props;
        std::optional<std::string> instance_name;
    };

    struct ItemProps {
        ItemDesc           item_desc;
        ILinksScheme::SPtr links_scheme;
        std::string        item_name; // Remove ?

        using SPtr  = std::shared_ptr<ItemProps>;
        using SPtrC = std::shared_ptr<const ItemProps>;
    };

    struct InsertRes {
        IContainerScheme::SPtr item_container; // Optionally, only if item inserted item inside container
        std::string            item_name;
        size_t                 item_idx = xbase::npos;
        ILinksScheme::SPtr     links_scheme;

        ItemProps::SPtrC replaced_item;
    };

    // Used for add links to container input
    static constexpr std::string_view kContainerSource = "container_source";
    // Used for make link to container output
    static constexpr std::string_view kContainerSink = "container_sink";

public:
    virtual xconfig::DataFlowMode ContainerMode() const = 0;

    virtual const std::string& ContainerName() const = 0;

    virtual xbase::XResult<InsertRes> ItemInsert(ItemDesc&&                                  _item_desc,
                                                 const std::optional<xconfig::DataFlowMode>& _target_container = {},
                                                 const std::vector<INode::SPtrC>&            _links            = {},
                                                 const XKey&                                 _insert_at = {}) = 0;

    virtual xbase::XResult<InsertRes> ItemReplace(const XKey& _replaced_name_or_idx, ItemDesc&& _new_item_desc) = 0;

    virtual std::vector<IContainerScheme::ItemProps::SPtrC> ItemsGet() const = 0;
    // Return {info + index}, use XPath ?
    virtual std::pair<IContainerScheme::ItemProps::SPtrC, size_t> ItemGet(XPath&& _item_path) const = 0;
    virtual IContainerScheme::ItemProps::SPtrC                    ItemRemove(XPath&& _item_path)    = 0;
    virtual std::vector<IContainerScheme::ItemProps::SPtrC>       ItemsClear()                      = 0;

    // For subcontainer editing
    // For empty path return this interface ptr
    virtual IContainerScheme::SPtr SubcontainerGet(XPath&& _item_path) = 0;

    // For sink links use kContainerSink
    virtual ILinksScheme::SPtrC ItemLinks(XPath&& _item_path) const = 0;
    virtual ILinksScheme::SPtr  ItemLinks(XPath&& _item_path)       = 0;
};

} // namespace xsdk
