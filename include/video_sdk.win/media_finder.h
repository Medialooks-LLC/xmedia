#pragma once

#include "xnode.h"

#include <cassert>
#include <functional>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <system_error>

namespace xsdk {

class IMediaFinder {
public:
    USING_PTRS(IMediaFinder)

    // device name -> details
    using MediaMap = std::map<std::string, std::string>;

    // callback: return true (?) for stop finding, params: type, actual, added, removed sources
    using OnChangesPF = std::function<bool(std::string_view, const MediaMap&, const MediaMap&, const MediaMap&)>;

public:
    virtual ~IMediaFinder() = default;

    // callback: return true (?) for stop finding, params: actual, added, removed sources
    virtual std::error_code Start(OnChangesPF&&       _pf_on_changes = {},
                                  std::string_view    _types         = {},
                                  const INode::SPtrC& _hints         = {})       = 0;
    virtual void            Stop()                                       = 0;
    virtual MediaMap        MediaGet(const std::set<std::string_view>& _types            = {}, // empty -> all types
                                     std::string_view                  _filter_by_substr = {},
                                     bool                              _case_sensative   = false) const = 0;
};

// todo: move to impl
class MediaFinderCollect: public IMediaFinder {

public:
    using MediaFindersVec = std::vector<IMediaFinder::SPtr>;

public:
    MediaFinderCollect(MediaFindersVec&& _finders_vec) : finders_vec_(std::move(_finders_vec)) {}

    // callback: return true (?) for stop finding, params: actual, added, removed sources
    virtual std::error_code Start(OnChangesPF&&       _pf_on_changes = {},
                                  std::string_view    _types         = {},
                                  const INode::SPtrC& _hints         = {}) override
    {
        for (auto& finder_p : finders_vec_) {
            auto error = finder_p->Start(
                [=](auto... args) { return _pf_on_changes(std::forward<decltype(args)>(args)...); },
                {},
                _hints);
            if (error) {
                Stop();
                return error;
            }
        }

        return std::error_code();
    }
    virtual void Stop() override
    {
        for (auto& finder_p : finders_vec_)
            finder_p->Stop();
    }
    virtual MediaMap MediaGet(const std::set<std::string_view>& _types            = {}, // empty -> all types
                              std::string_view                  _filter_by_substr = {},
                              bool                              _case_sensative   = false) const override
    {
        MediaMap combined;
        for (const auto& finder_p : finders_vec_) {
            auto find_res = finder_p->MediaGet(_types, _filter_by_substr, _case_sensative);
            combined.insert(find_res.begin(), find_res.end());
        }

        return combined;
    }

private:
    MediaFindersVec finders_vec_;
};

} // namespace xsdk