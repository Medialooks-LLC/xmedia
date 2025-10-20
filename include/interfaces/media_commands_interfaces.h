#pragma once

// xmedia
#include "media_active_interfaces.h"
#include "media_handler_interfaces.h"
#include "media_schemes_interfaces.h"

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
        std::vector<Option> mendatory_params;
        std::vector<Option> optional_params;
    };

    struct Command {
        const std::string name;
        INode::SPtrC      body;
        XPath             target_path;
    };

    struct CommandRes {
        std::error_code error;
        INode::SPtr     result;
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

namespace xcommands {

    // Move declaration to interface file
    INode::SPtr Error(const std::error_code                   _error_code,
                      const std::string_view                  _reason       = {},
                      std::vector<std::pair<XPath, XValue>>&& _extra_params = {});

    INode::SPtr Succeeded(std::vector<std::pair<XPath, XValue>>&& _extra_params = {});

    ICommandsExecutor::CommandRes CommandError(const std::error_code                   _error_code,
                                               const std::string_view                  _reason       = {},
                                               std::vector<std::pair<XPath, XValue>>&& _extra_params = {});

    ICommandsExecutor::CommandRes CommandSuccess(std::vector<std::pair<XPath, XValue>>&& _extra_params = {});

    ICommandsExecutor::CommandRes CommandResult(const std::error_code                   _error_code,
                                                const std::string_view                  _reason       = {},
                                                std::vector<std::pair<XPath, XValue>>&& _extra_params = {});

    // Example for interface command handler
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
} // namespace xcommands
} // namespace xsdk
