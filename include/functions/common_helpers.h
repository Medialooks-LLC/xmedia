#pragma once

#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

#include <xbase.h>
#include <xnode.h>

namespace xsdk::common_helpers {

std::string FileName(const std::string_view _open_url);

std::string TimeStr(const xbase::Time64 _time);

template <typename TDest, class TSource>
std::optional<TDest> OptionalConvert(const std::optional<TSource>& _source)
{
    if (!_source.has_value())
        return std::nullopt;

    return static_cast<TDest>(_source.value());
}

template <typename TDest, class TSource, class TConvertFunc>
std::optional<TDest> OptionalConvert(const std::optional<TSource>& _source, TConvertFunc&& _convert_pf)
{
    if (!_source.has_value())
        return std::nullopt;

    return _convert_pf(_source.value());
}

std::optional<xbase::Time64> OptionalConvertUnits(const std::optional<double>& _time_in_units,
                                                  const xbase::Time64          _unit_duration);

inline std::optional<xbase::Time64> OptionalConvertSec(const std::optional<double>& _time_in_sec)
{
    return OptionalConvertUnits(_time_in_sec, time64::kSecond);
}

// TODO: Make undetstandable name and move to xnode (+variant with XPath ?)
std::pair<INode::SPtr, size_t> ExtractNodeValues(const INode*             _from,
                                                 const std::vector<XKey>& _values_names,
                                                 const INode::SPtr&       _dest = {});

} // namespace xsdk::common_helpers
