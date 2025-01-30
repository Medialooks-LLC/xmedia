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

namespace xsdk::xcontainer {

template <typename TInterface>
xbase::XResult<std::shared_ptr<TInterface>> GetByPath(const IActiveContainer::SPtr& _container_p, XPath&& _path)
{
    if (!_container_p)
        return XError::NullPointer;

    IActiveHandler::SPtr target_handler = _container_p;
    if (!_path.Empty()) {

        target_handler = _container_p->ActiveGetByPath(std::move(_path));
        if (!target_handler)
            return XError::NotFound;
    }

    auto query_ptr = xobject::PtrQuery<TInterface>(target_handler.get());
    if (!query_ptr)
        return XError::InvalidCast;

    return query_ptr;
}
} // namespace xsdk::xcontainer
