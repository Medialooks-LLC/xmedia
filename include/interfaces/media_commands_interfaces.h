#pragma once

// xmedia
#include "media_active_interfaces.h"
#include "media_handler_interfaces.h"
#include "media_schemes_interfaces.h"

#include "socket_interfaces.h"
#include "xbase.h"
#include "xnode.h"

#include "xmedia_errors.h" //TEMP

#include <any>
#include <cassert>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

namespace xsdk {

class ICommandsExecutor {
public:
    struct InterfaceDesc {
        xbase::Uid  uid;
        std::string name;
        std::string description;
    };

    struct CommandDesc {
        struct Option {
            std::string option_name;
            XValue      default_value;
            std::string option_description;
        };

        std::string         name;
        std::string         description;
        std::vector<Option> mandatory_params;
        std::vector<Option> optional_params;
    };

    struct Command {
        // Translated to json
        std::string name;
        XValue      body;
        XPath       target_path;
    };

    struct CommandRes {
        std::error_code error;
        XValue          result;
        XValue          body_patch_for_next;
    };

    using CommandHandlerPF =
        std::function<CommandRes(const std::any& target_object, const ICommandsExecutor::Command& command)>;

    using GetTargetPF = std::function<xbase::XResult<std::any>(ICommandsExecutor::Command& command)>;

public:
    USING_PTRS(ICommandsExecutor)

    virtual ~ICommandsExecutor() = default;

    // Return supported interfaces uids
    virtual std::vector<xbase::Uid> InterfacesList() const = 0;

    // Return list of commands names
    virtual std::vector<CommandDesc> CommandsList(const std::optional<xbase::Uid> _interface_uid = {}) const = 0;

    // Return {command interface uid (xbase::kInvalidUid if command not found), command targets paths}
    virtual std::pair<xbase::Uid, std::vector<XPath>> CommandTargets(const std::string& _command_name) const = 0;

    // Execute command
    // Return:
    // * error code
    // * for error: error description, for success: result or empty node
    virtual CommandRes CommandExecute(const Command& _command) const = 0;

    // Clone optionally with commands and/or targets
    virtual ICommandsExecutor::SPtr Clone(const bool _clone_commands, const bool _clone_targets) const = 0;

    // Add command handler, if replaced, return replaced one
    // Use {} for remove handler (?)

    virtual xbase::XResult<std::pair<xbase::Uid, CommandHandlerPF>> CommandHandlerAdd(
        bool               _replace_existed,
        const CommandDesc& _command_desc,
        const xbase::Uid   _interface_uid,
        CommandHandlerPF&& _command_handler) = 0;

    // Set get target callback for specified interface and optional target path
    // Use {} for remove handler (?),
    // Note:
    // * _target_path used for select commands with _target_path prefixed Command::target_path value,
    // in GetTargetPF() passed command with modified Command::target_path field.
    // * Command structure (except Command::name) could be modified in this handler, before pass
    // into CommandHandler
    // e.g. for pass command with modified Command::target_path into CommandHandler
    virtual xbase::XResult<GetTargetPF> TargetHandlerAdd(bool             _replace_existed,
                                                         const xbase::Uid _interface_uid,
                                                         GetTargetPF&&    _get_target_pf,
                                                         XPath&&          _target_path = {}) = 0;

    // Clear command/target handlers
    virtual std::pair<size_t, size_t> Clear(const bool _clear_commands, const bool _clear_targets) = 0;
};

class ICommandsDispatcher {
public:
    struct Repeat {
        double interval_sec = 0;
        XValue command_patch;
        size_t max_repeats = 0; // If 0 -> infinite
    };

    struct Command {
        USING_PTRS(Command)

        // Command content
        ICommandsExecutor::Command command;
        // Execution context
        std::optional<std::string>   context_name;
        std::optional<xbase::Time64> scheduled_time_utc;
        // For repeat command execution
        std::vector<Repeat> repeats;

        // Service params
        xbase::Time64 dispatch_time_utc = time64::kNoVal;
        size_t        dispatch_counter  = 0;
    };

    struct DispatchRes {
        ICommandsExecutor::CommandRes command_res;
        std::optional<xbase::Time64>  repeated_at_time_utc;
    };

    using PendingCommand = std::map<xbase::Uid, ICommandsDispatcher::Command::SPtr>;

    // Return: false for stop any repeats, true allow to repeat command
    using OnExecutionDone = std::function<bool(const ICommandsDispatcher::DispatchRes& _command_res,
                                               const ICommandsDispatcher::Command*     _command_p,
                                               const xbase::IScheduler::TaskInfo*      _task_info_p)>;

    static constexpr size_t         kDefaultMaxContexts     = 32;
    static constexpr size_t         kDefaultMinPoolWorker   = 0;
    static constexpr size_t         kDefaultMaxPoolWorker   = 16;
    inline static const std::string kDefaultPoolContextName = "pool";

    struct Params {
        size_t            max_contexts      = kDefaultMaxContexts;
        size_t            max_pool_workers  = kDefaultMaxPoolWorker;
        size_t            min_pool_workers  = kDefaultMinPoolWorker;
        const std::string pool_context_name = kDefaultPoolContextName;
    };

    struct ContextInfo {
        bool                  is_closed     = false;
        size_t                pending_count = 0;
        xbase::IWorker::SPtrC worker_p;
    };

public:
    USING_PTRS(ICommandsDispatcher)

    virtual ~ICommandsDispatcher() = default;

    virtual const Params& DispatcherParams() const = 0;

    // 2Think: std::variant<ISocketRpc::SPtr,ICommandsExecutor::SPtr> ?

    // Return task_uid
    virtual xbase::XResult<xbase::Uid> DispatchCommand(const ICommandsExecutor::SPtr& _executor_p,
                                                       ICommandsDispatcher::Command&& _command,
                                                       OnExecutionDone&&              _on_done_pf) = 0;

    virtual xbase::XResult<ICommandsDispatcher::Command::SPtr> DispatchCancel(const xbase::Uid _task_uid,
                                                                              const XValue& _notified_result = {}) = 0;

    virtual std::map<std::string, ContextInfo> ContextsGet() const = 0;

    virtual ICommandsDispatcher::PendingCommand PendingsGet() const = 0;

    virtual xbase::XResult<ICommandsDispatcher::PendingCommand> FlushContext(
        const std::string&    _context_name,
        const bool            _wait_for_finish,
        const std::error_code _err_for_done_cb = XError::Flushed) = 0;

    virtual xbase::XResult<ICommandsDispatcher::PendingCommand> CloseContext(
        const std::string&    _context_name,
        const std::error_code _err_for_done_cb = XError::Closed) = 0;

    virtual ICommandsDispatcher::PendingCommand DispatcherClose(
        const std::error_code _err_for_done_cb = XError::Closed) = 0;
};

namespace xcommands {

    //------------------------------------------------------------------------------------
    // Commands - INode translations

    static const std::string kCommandName          = "command_name";
    static const std::string kCommandBody          = "command_body";
    static const std::string kTargetPath           = "target_path";
    static const std::string kScheduledTimeSecUtc  = "scheduled_time_sec_utc";
    static const std::string kDispatchedTimeSecUtc = "dispatched_time_sec_utc";
    // static const std::string kSendingTimeSecUtc    = "sending_time_sec_utc";

    static const std::string kCommandContext = "command_context";

    static const std::string kCommandRepeats = "command_repeats";
    static const std::string kIntervalSec    = "interval_sec";
    static const std::string kMaxRepeats     = "max_repeats";
    static const std::string kCommandPatch   = "command_patch";

    static const std::string kCommandStatus        = "command_status";   // error/succeeded
    static const std::string kCommandResponce      = "command_response"; // For command_status = succeeded
    static const std::string kCommandError         = "command_error";    // For command_status = error
    static const std::string kExecutedCommand      = "executed_command"; // Executed command actual state
    static const std::string kNextCommandPatch     = "next_command_patch";
    static const std::string kRepeatedAtTimeSecUtc = "repeated_at_time_sec_utc";
    static const std::string kDispatcherTaskUid    = "dispatcher_task_uid";

    // std::string UniqueRequestId(const std::optional<xbase::Uid>& _from_uid, const std::string& _request_id);
    // std::string UniqueRequestId(const ICommandsDispatcher::Command* _command_p);
    std::optional<xbase::Time64> RepeatTime(const ICommandsDispatcher::Command* _command_p);

    INode::SPtr CommandToNode(const ICommandsExecutor::Command& _command, const INode::SPtr& _dest_node = {});
    INode::SPtr CommandToNode(const ICommandsDispatcher::Command& _command,
                              const bool                          _skip_command_body,
                              const INode::SPtr&                  _dest_node = {});

    INode::SPtr CommandResToNode(const ICommandsExecutor::CommandRes& _res,
                                 const ICommandsDispatcher::Command*  _finished_command_p,
                                 const INode::SPtr&                   _dest_node = {});
    INode::SPtr DispatchResToNode(const ICommandsDispatcher::DispatchRes& _dispatch_res,
                                  const ICommandsDispatcher::Command*     _finished_command_p,
                                  const xbase::IScheduler::TaskInfo*      _task_info_p,
                                  const INode::SPtr&                      _dest_node = {});

    xbase::XResult<ICommandsDispatcher::Command> ParseCommand(const INode::SPtrC& _msg_p);

    xbase::XResult<std::pair<ICommandsExecutor::CommandRes, ICommandsDispatcher::Command>> ParseCommandRes(
        const INode::SPtrC& _msg_p);

    //------------------------------------------------------------------------------------
    // For usage inside commands handlers

    ICommandsExecutor::CommandRes CommandError(const std::error_code                   _error_code,
                                               const std::string_view                  _reason       = {},
                                               std::vector<std::pair<XPath, XValue>>&& _extra_params = {},
                                               XValue&&                                _result       = {});

    ICommandsExecutor::CommandRes CommandSuccess(std::vector<std::pair<XPath, XValue>>&& _extra_params = {},
                                                 XValue&&                                _result       = {},
                                                 const INode::SPtrC&                     _next_patch   = {});

    ICommandsExecutor::CommandRes CommandResult(const std::error_code                   _error_code,
                                                const std::string_view                  _reason       = {},
                                                std::vector<std::pair<XPath, XValue>>&& _extra_params = {},
                                                XValue&&                                _result       = {});

    INode::SPtr Error(const std::error_code                   _error_code,
                      const std::string_view                  _reason       = {},
                      std::vector<std::pair<XPath, XValue>>&& _extra_params = {},
                      XValue&&                                _result       = {});

    XValue Success(std::vector<std::pair<XPath, XValue>>&& _extra_params = {}, XValue&& _result = {});

    //------------------------------------------------------------------------------------
    // Commands creation

    template <typename TInterface>
    using OnCommandPF = std::function<ICommandsExecutor::CommandRes(TInterface*                       target_object,
                                                                    const ICommandsExecutor::Command& command)>;

    template <typename TInterface>
    xbase::XResult<std::pair<xbase::Uid, ICommandsExecutor::CommandHandlerPF>> CommandAdd(
        ICommandsExecutor*                    _command_executor,
        bool                                  _replace_existed,
        const ICommandsExecutor::CommandDesc& _command_desc,
        OnCommandPF<TInterface>&&             _command_call)
    {
        auto add_xr = _command_executor->CommandHandlerAdd(
            _replace_existed,
            _command_desc,
            xbase::TypeUid<TInterface>(),
            [command_call = std::move(_command_call)](
                const std::any&                   target_object,
                const ICommandsExecutor::Command& command) -> ICommandsExecutor::CommandRes {
                auto target_sp = xdata::AnyUnwrapShared<TInterface>(target_object);
                if (!target_sp)
                    return CommandError(XError::InvalidCast);

                return command_call(target_sp.get(), command);
            });
        if (!add_xr.HasResult())
            return add_xr.Error(XError::Unexpected);

        return add_xr.MoveResult();
    }

    template <typename TInterface>
    xbase::XResult<ICommandsExecutor::GetTargetPF> InterfaceTargetAdd(
        ICommandsExecutor*                 _command_executor,
        bool                               _replace_existed,
        const std::shared_ptr<TInterface>& _target_interface,
        XPath&&                            _target_path = {})
    {
        if (!_target_interface)
            return _command_executor->TargetHandlerAdd(false,
                                                       xbase::TypeUid<TInterface>(),
                                                       {},
                                                       std ::move(_target_path));

        return _command_executor->TargetHandlerAdd(
            false,
            xbase::TypeUid<TInterface>(),
            [interface = _target_interface](ICommandsExecutor::Command& command) -> xbase::XResult<std::any> {
                return std::any {interface};
            },
            std::move(_target_path));
    }

    //------------------------------------------------------------------------------------
    // Commands execution

    ICommandsExecutor::SPtr CreateExecutor(bool _fill_commands);

    ICommandsDispatcher::SPtr CreateDispatcher(const ICommandsDispatcher::Params& _params = {});

} // namespace xcommands
} // namespace xsdk
