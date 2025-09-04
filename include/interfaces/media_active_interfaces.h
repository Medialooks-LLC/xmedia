#pragma once

// xmedia
#include "media_links_interfaces.h"
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

/// @brief The IActiveItem optional handler interface used for notify handlers about state changes and optional
/// support push mode for handlers (bia SetLinkForPush call)
class IActiveItem {
public:
    USING_PTRS(IActiveItem)

    virtual ~IActiveItem() = default;

    // Return:
    // 'true'  - media consumed
    // 'false' - media not consumed (if possible, repeat later)
    // std::nullopt - remove callback
    using OnMediaPF = std::function<std::optional<std::error_code>(const IMediaObject::SPtrC& _obj)>;

    /**
     * @brief Set callback for push mode
     * @return true if compoent do support push mode - MediaGet() should return XError::PushModeUsed in this case
     * false if compont output data via MediaGet() only
     */
    virtual bool SetPushCallback(OnMediaPF&& _on_media_pf) = 0;

    /**
     * @brief Update state of media component from active wrapper/container
     * @return previous state or error if state changes prohibited (e.g. handler in not Ready)
     */
    virtual xbase::XResult<IMediaHandler::State> OnActiveStart(const std::string_view _details) = 0;

    /**
     * @brief Update state of media component from active wrapper/container
     * @return previous state or error if state changes prohibited (e.g. handler is not running)
     */
    virtual xbase::XResult<IMediaHandler::State> OnActiveStop(const std::string_view _details) = 0;
};

// todo: public IMediaBase
class IActiveOutput {
public:
    USING_PTRS(IActiveOutput)

    virtual ~IActiveOutput() = default;

    static constexpr int32_t kGetMediaRepeatMsec      = 10;
    static constexpr int32_t kGetMediaErrorRepeatMsec = 100;
    static constexpr int32_t kPutMediaRepeatMsec      = 10;

    /**
     * @brief Function signature for auto link creation.
     *
     * @tparam _media The media from handler.
     * @return new link for this stream, if stream not required:
     * - return nullptr for repeats callback
     * - return std::nullopt for not more callback for this stream
     */
    using OnNewStreamPF = std::function<std::optional<ILink::SPtr>(const IMediaObject::SPtrC& _media)>;

    /**
     * @brief Start media data processing.
     *
     * This function starts data-flow for specified componet, by start all output links
     *
     * @param _on_new_link - optionally create new link for input stream (if not set, only Links added via ILinks
     * interface used)
     * @param _media_get_worker - worker for get media (if not set, xmedia::WorkersPool() used)
     * @return An error code indicating the result of the Start() function call.
     */
    virtual std::error_code OutputStart(OnNewStreamPF&&              _on_new_stream    = {},
                                        const xbase::IWorker::SPtr&  _media_get_worker = nullptr,
                                        const std::optional<size_t>& _index_for_get    = {}) = 0;

    // Set hints (e.g. pos_msec:5000) for next MediaGet() call
    /**
     * @brief Set hints for the next MediaGet() call, if hints not applied they are merge/overrides, if MediaGet()
     * thread is postponed after EOS, after set hints it's reactived.
     *
     * @param _hints The hints to be set for the next MediaGet() call.
     * @return The not applied yet hints.
     */
    virtual INode::SPtrC OutputHintsSet(INode::SPtrC&& _hints) = 0;
    /**
     * @brief Stop media data processing
     * - stop reading from underlying media handler and all links output, all links added via OnNewLinkPF is removed,
     * manully added links is not removed
     */
    virtual void OutputStop(bool _flush_data, bool _wait_for_finish) = 0;

    /**
     * @brief Notify about media streams chnages
     */
    virtual std::error_code OutputUpdateStreams(const MediaUnitsVec& _output_streams) = 0;

    /**
     * @brief Return ILinks interface for enumerate links
     * @return ILinks interface.
     */
    virtual ILinks::SPtrC OutputLinks() const = 0;
    /**
     * @brief Return ILinks interface for enumerate and add output links
     * @return ILinks interface.
     */
    virtual ILinks::SPtr OutputLinks() = 0;
};

// todo: public IMediaBase
class IActiveInput {
public:
    USING_PTRS(IActiveInput)

    virtual ~IActiveInput() = default;

    virtual xbase::XResult<ILink::SPtr> LinkCreate(const INode::SPtrC&         _link_details,
                                                   const xbase::IWorker::SPtr& _dedicated_worker = nullptr) = 0;

    virtual size_t LinksCount(const std::optional<std::string>& _source_name = {}) const = 0;

    virtual std::vector<ILink::SPtr> LinksGet(const std::optional<std::string>& _source_name = {}) = 0;

    virtual std::vector<ILink::SPtrC> LinksGet(const std::optional<std::string>& _source_name = {}) const = 0;

    virtual std::vector<ILink::SPtr> LinksRemove(bool                              _flush_data,
                                                 const std::optional<std::string>& _source_name = {}) = 0;

    virtual ILink::SPtr LinkRemove(bool _flush_data, const uint64_t _link_uid) = 0;
};

class IActiveHandler: public IMediaHandler, public IActiveOutput {
public:
    USING_PTRS(IActiveHandler)

    virtual IActiveInput* InputLinks() = 0;
};

class IActiveContainer: public IActiveHandler, public IContainerScheme {
public:
    USING_PTRS(IActiveContainer)

    // TODO: Rename to ActiveSchemeLoad(...) ?
    virtual std::error_code ActiveSchemeSet(const IContainerScheme::SPtrC& _container_scheme) = 0;

    //
    virtual std::vector<std::string> ActiveHandlers() const               = 0;
    virtual IActiveHandler::SPtrC    ActiveGetByPath(XPath&& _path) const = 0;
    virtual IActiveHandler::SPtr     ActiveGetByPath(XPath&& _path)       = 0;

    // virtual std::vector<IActiveHandler::SPtr> ActiveReinit(const std::string_view _name) = 0;
};

} // namespace xsdk
