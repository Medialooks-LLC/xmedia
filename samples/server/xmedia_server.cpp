#include "command_line.hpp"
#include "helpers.hpp"

#include "xmedia.h"
#include "xnode.h"

#include <algorithm>
#include <atomic>
#include <string_view>
#include <thread>

using namespace xsdk;

class ContainerServer: public std::enable_shared_from_this<ContainerServer> {

    IActiveContainer::SPtr  root_container_;
    ICommandsExecutor::SPtr command_executor_;
    IData::SPtr             outer_interfaces_;

    ContainerServer() {}

public:
    USING_PTRS(ContainerServer)

    static xbase::XResult<ContainerServer::SPtr> Create(xevents::OnEventPF&& _on_media_event)
    {
        ContainerServer::SPtr containter_server {new ContainerServer()};
        auto                  err = containter_server->Init_(std::move(_on_media_event));
        if (err)
            return err;

        return containter_server;
    }

    ~ContainerServer() { SetTargetContainer_(nullptr); }

    std::error_code LoadScheme(const INode::SPtr& _container_scheme)
    {
        auto scheme_xr = xconfig::LoadContainerScheme(_container_scheme);
        if (!scheme_xr.Result())
            return scheme_xr.Error(XError::Unexpected);

        // Create container
        auto container_xr = xmedia::HandlerCreateByProps<IActiveContainer>(
            IContainerScheme::ItemDesc {scheme_xr.Result()},
            {},
            outer_interfaces_);
        if (!container_xr.Result())
            return container_xr.Error(XError::Unexpected);

        SetTargetContainer_(container_xr.MoveResult());

        return {};
    }

    xbase::XResult<INode::SPtr> LoadScheme(const std::string& _json_file_path)
    {
        auto container_scheme = helpers::JsonFromFile(_json_file_path);
        if (!container_scheme)
            return std::make_error_code(std::errc::invalid_argument);

        auto err = LoadScheme(container_scheme);
        if (err)
            return err;

        return container_scheme;
    }

    xbase::XResult<INode::SPtr> StoreScheme(INode::SPtr&& _scheme_node = {})
    {
        assert(root_container_);
        return xconfig::StoreItemDesc({IContainerScheme::SPtrC {root_container_}}, std::move(_scheme_node));
    }

    std::error_code StoreScheme(const std::string& _json_file_path)
    {
        assert(root_container_);
        auto store_xr = xconfig::StoreItemDesc({IContainerScheme::SPtrC {root_container_}});
        if (!store_xr.Result())
            return store_xr.Error(XError::Unexpected);

        auto json = xnode::ToJson(store_xr.Result());
        if (!helpers::SaveToFile(json, _json_file_path))
            return std::make_error_code(std::errc::read_only_file_system);

        return {};
    }

    ICommandsExecutor::CommandRes CommandExecute(const ICommandsExecutor::Command& _command)
    {
        assert(command_executor_);
        return command_executor_->CommandExecute(_command);
    }

    INode::SPtrC Stat(XPath&& _path = {})
    {
        assert(root_container_);
        return root_container_->Stat(std::move(_path));
    }

    std::vector<ICommandsExecutor::CommandDesc> CommandsList()
    {
        std::vector<ICommandsExecutor::CommandDesc> all_commands;
        auto                                        interfaces = command_executor_->InterfacesList();
        for (auto uid : interfaces) {
            // todo: add readable interface prefix support
            auto commands = command_executor_->CommandsList(uid);
            for (auto& command_desc : commands)
                all_commands.push_back(command_desc);
        }

        return all_commands;
    }

private:
    std::error_code Init_(xevents::OnEventPF&& _on_media_event)
    {
        assert(!command_executor_);
        command_executor_ = xcommands::ExecutorCreate(true);
        assert(command_executor_);
        AddSaveLoadCommands_(command_executor_.get());

        if (_on_media_event) {
            auto events_hander = xevents::CreateEventsHandler(std::move(_on_media_event));
            outer_interfaces_  = xdata::CreateInterfacesCollection(std::move(events_hander));
        }
        else {
            outer_interfaces_.reset();
        }

        auto err = SetTargetContainer_(
            xmedia::HandlerCreateByName<IActiveContainer>(xmedia::handlers::kFreeContainer, "root", outer_interfaces_)
                .MoveResult());
        assert(root_container_);
        return err;
    }

    std::error_code SetTargetContainer_(IActiveContainer::SPtr&& _target_container)
    {
        if (root_container_) {
            root_container_->Close();
            root_container_.reset();
        }

        root_container_ = _target_container;
        command_executor_->Clear(false, true);
        if (!root_container_)
            return {};

        auto add_xr = xcommands::ActiveContainerTargetsAdd(command_executor_.get(), root_container_);
        assert(add_xr.HasResult());
        if (!add_xr.HasResult())
            return add_xr.Error(XError::Unexpected);

        auto server_add_xr = xcommands::InterfaceTargetAdd<ContainerServer>(command_executor_.get(),
                                                                            true,
                                                                            shared_from_this());
        assert(server_add_xr.HasResult());
        if (!server_add_xr.HasResult())
            return server_add_xr.Error(XError::Unexpected);

        return {};
    }

    // Add custom load/save commands
    static void AddSaveLoadCommands_(ICommandsExecutor* _command_executor)
    {
        assert(_command_executor);

        auto add_xr = xcommands::CommandAdd<ContainerServer>(
            _command_executor,
            true,
            {"load_scheme", "Load xmedia server scheme", {{(std::string)kPath, "", "Loading scheme path"}}},
            [](ContainerServer* server_p, const ICommandsExecutor::Command& command) {
                assert(server_p);
                auto load_xr = server_p->LoadScheme(xnode::At(command.body, kPath).String());
                return xcommands::CommandResult(load_xr.Error(),
                                                "server_p->LoadScheme",
                                                {{"scheme", load_xr.Result()}});
            });
        assert(add_xr.HasResult());

        add_xr = xcommands::CommandAdd<ContainerServer>(
            _command_executor,
            true,
            {"save_scheme", "Save xmedia server scheme", {{(std::string)kPath, "", "Save scheme path"}}},
            [](ContainerServer* server_p, const ICommandsExecutor::Command& command) {
                assert(server_p);
                auto err = server_p->StoreScheme(xnode::At(command.body, kPath).String());
                return xcommands::CommandResult(err);
            });
        assert(add_xr.HasResult());
    }
};

void PrintHelp(std::string name)
{
    std::cout << name << " is sample for xsdk framework." << std::endl << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "--factory_config Handler & Wrappers factory config." << std::endl;
    std::cout << "--load_scheme Path for load root contianer scheme." << std::endl;
    std::cout << "--save_scheme Path for store root contianer scheme (updated at commands receving)" << std::endl;
    std::cout << "--log_level logging level" << std::endl;
    std::cout << std::endl;
    std::cout
        << "Example of usage:" << std::endl
        << name
        << " --factory_config factory_config.json --load_scheme container_state.json --save_scheme container_state.json"
        << std::endl;
    std::cout << std::endl;
}

ICommandsExecutor::Command ParseCommand(const INode::SPtrC& _command)
{
    // Fill command
    ICommandsExecutor::Command command = {xnode::At(_command, "command_name").String()};
    command.body                       = xnode::NodeConstGet(_command, "command_body");
    command.target_path                = XPath(xnode::At(_command, "target_path").String());

    return command;
}

using CommandInputPF = std::function<std::string()>;
using OnCommandExecutedPF =
    std::function<void(const ICommandsExecutor::Command& _command, const ICommandsExecutor::CommandRes& _command_res)>;

void PopulateCommandsList(ContainerServer* _server_p, std::ostream& _output_stream = std::cout)
{
    _output_stream << "Supported commands:" << std::endl << std::endl;
    auto commands_list = _server_p->CommandsList();
    for (const auto& command_desc : commands_list) {
        _output_stream << "\n" << command_desc.name << ": " << command_desc.description << std::endl;
        if (!command_desc.mendatory_params.empty()) {
            _output_stream << "  - Mandatory params(" << command_desc.mendatory_params.size() << "):" << std::endl;
            for (const auto& param : command_desc.mendatory_params) {
                _output_stream << "\t" << param.option_name << ": " << param.option_description << std::endl;
            }
        }

        if (!command_desc.optional_params.empty()) {
            _output_stream << "  - Optional params(" << command_desc.optional_params.size() << "):" << std::endl;
            for (const auto& param : command_desc.optional_params) {
                _output_stream << "\t" << param.option_name << ": " << param.option_description << std::endl;
            }
        }

        assert(!command_desc.name.empty());
    }
}

void ControlMessagesLoop(ContainerServer*      _server_p,
                         CommandInputPF&&      _commands_input_pf,
                         OnCommandExecutedPF&& _on_command_executed_pf = {},
                         std::ostream&         _output_stream          = std::cout)
{
    assert(_server_p && _commands_input_pf);

    _output_stream << std::endl << "Command format (plain):" << std::endl;
    _output_stream << "\t"
                   << "command_name <enter>" << std::endl
                   << "\t" << R"(commands parameters json <enter> // if required for command)" << std::endl
                   << "\t" << R"(e.g. "clear" <enter> {"flush" : true } <enter>)"
                   << "\t" << R"(or "clear" <enter> <enter> (for skip optional params))" << std::endl;

    _output_stream << std::endl << "Command format (json):" << std::endl;
    _output_stream << R"({
        "command_name" : <name of command - see below>, 
        "command_body" : { commands parameters json },  // optional
        "target_path" : <target container item path>,  // optional
} <enter>)" << std::endl
                   << std::endl;

    PopulateCommandsList(_server_p, _output_stream);

    std::map<std::string, ICommandsExecutor::CommandDesc> commands_map;
    auto                                                  commands_list = _server_p->CommandsList();
    for (const auto& command_desc : commands_list) {
        assert(!command_desc.name.empty());
        commands_map.emplace(command_desc.name, command_desc);
    }

    _output_stream << std::endl << "Control commands support:" << std::endl;
    _output_stream << "\tq, Q - Quit execution" << std::endl;
    _output_stream << "\tc, C - Clear command buffer" << std::endl;
    _output_stream << "\tr, R - Repeat last command" << std::endl;
    _output_stream << "\tl, L - Commands list" << std::endl;
    _output_stream << "\th, H - Handlers list (TODO)" << std::endl;
    _output_stream << "\tw, W - Wrappers list (TODO)" << std::endl;

    _output_stream << std::endl << "STARTED" << std::endl;

    size_t      lines_count = 0;
    size_t      empty_lines = 0;
    std::string composed_json;

    std::unique_ptr<ICommandsExecutor::Command> command_p;
    std::unique_ptr<ICommandsExecutor::Command> prev_command_p;
    while (true) {

        if (command_p)
            _output_stream << command_p->name << " ";
        _output_stream << lines_count << ": ";

        auto captured_line = _commands_input_pf();
        helpers::Trim(captured_line);
        if (!captured_line.empty())
            empty_lines = 0;
        else if (command_p)
            ++empty_lines; // For e.g. "clear" <enter> <enter> (for skip optional params)
        else
            continue;

        // Check for command
        if (captured_line == "q" || captured_line == "Q") {
            _output_stream << std::endl << "FINISHED:" << captured_line << std::endl;
            break;
        }

        if (captured_line == "l" || captured_line == "L") {
            PopulateCommandsList(_server_p, _output_stream);
            continue;
        }

        if (captured_line == "c" || captured_line == "C") {
            if (composed_json.empty())
                command_p.reset();

            composed_json.clear();
            lines_count = 0;
            continue;
        }

        if (captured_line == "r" || captured_line == "R") {
            // Repeat last
            command_p = std::move(prev_command_p);
            prev_command_p.reset();
        }
        else if (!command_p && commands_map.count(captured_line) > 0) {
            // Basic command name
            assert(composed_json.empty());
            command_p.reset(new ICommandsExecutor::Command {captured_line});
        }
        else if (!captured_line.empty()) {
            // compose json
            composed_json += captured_line;
            ++lines_count;
        }

        // Check composed json
        auto [captured_node, error_pos] = xnode::FromJson(composed_json);
        if (!error_pos && !captured_node->Empty()) {
            // Parsed ok
            if (command_p)
                command_p->body = captured_node;
            else
                command_p.reset(new ICommandsExecutor::Command(ParseCommand(captured_node)));

            composed_json.clear();
            lines_count = 0;
        }

        if (!command_p)
            continue;

        // Check for ready command
        const auto& command_desc = commands_map[command_p->name];

        // Commands params not ready yet
        // if (command_p->body ||
        //    (command_desc.mendatory_params.empty() && (command_desc.optional_params.empty() || empty_lines > 0))) {
        if (command_p->body || empty_lines > 0) {

            _output_stream << "EXECUTE Command:" << command_p->name << " Body:" << xnode::ToJson(command_p->body)
                           << " Path:" << command_p->target_path.ToString() << std::endl;

            auto command_res = _server_p->CommandExecute(*command_p);
            if (_on_command_executed_pf)
                _on_command_executed_pf(*command_p, command_res);

            if (command_res.error) {
                _output_stream << "FAILED(" << ErrorDump(command_res.error) << "):" << std::endl
                               << xnode::ToJson(command_res.result) << std::endl;
            }
            else {
                _output_stream << "SUCCCEDED:" << std::endl << xnode::ToJson(command_res.result) << std::endl;
            }

            prev_command_p = std::move(command_p);
            command_p.reset();
        }
    }
}

int main(int argc, char** argv)
{

    auto cmd_line = command_line::ParseCommandLine(argc, argv);
    assert(cmd_line);
    auto need_help = cmd_line->At("help").Bool(false);
    if (need_help) {
        PrintHelp(argv[0]);
    }
    auto factory_config_path = cmd_line->At("factory_config").String();
    auto load_scheme_path    = cmd_line->At("load_scheme").String("xm_server.scheme.json");
    auto save_scheme_path    = cmd_line->At("save_scheme").String("xm_server.scheme.json");
    xmedia::LogLevelSet(xmedia::LogLevel(cmd_line->At("log_level").Int32()));

    auto container_server_xr = ContainerServer::Create(
        [](const IMediaHandler::SPtrC& event_source, const MediaEvent event_type, const INode::SPtrC& event_details) {
            // Events handler example
            std::cout << "Event:" << xenum::ToString(event_type) << std::endl;
            std::cout << "From:" << event_source->Props()->NameGet() << std::endl;
            std::cout << "Details:" << xnode::ToJson(event_details) << std::endl;
            // In this case return is not used as do not have next handler
            return false;
        });

    assert(container_server_xr.Result());

    INode::SPtr factory_config = helpers::JsonFromFile(factory_config_path);
    if (factory_config && !factory_config->Empty()) {

        // TODO: Better config support
        auto copied = xnode::CopyTo(factory_config, xmedia::FactoryConfig(), true, true);
        std::cout << "Applied factory config (props:" << copied << ") from:" << factory_config_path << std::endl;
    }

    if (!load_scheme_path.empty()) {
        auto load_xr = container_server_xr->LoadScheme(load_scheme_path);
        if (!load_xr.Result()) {
            std::cerr << "(scheme) Error load container scheme from '" << load_scheme_path
                      << "' Error:" << ErrorDump(load_xr.Error()) << std::endl;
        }
        else {
            std::cout << "(scheme) Load container scheme from '" << load_scheme_path
                      << "':" << xnode::ToJson(load_xr.Result()) << std::endl;
        }
    }

    ControlMessagesLoop(
        container_server_xr.GetPtr(),
        []() {
            // Capture command from std::cin example
            std::string captured_line;
            std::getline(std::cin, captured_line);
            return captured_line;
        },
        [&](const ICommandsExecutor::Command& _command, const ICommandsExecutor::CommandRes& _command_res) {
            // Command result handling example - save container scheme for succeeded command
            if (!_command_res.error && !save_scheme_path.empty()) {
                auto err = container_server_xr->StoreScheme(save_scheme_path);
                if (err) {
                    std::cout << "(scheme) Failed update:" << save_scheme_path << " Error:" << ErrorDump(err)
                              << std::endl;
                }
                else {
                    std::cout << "(scheme) Updated:" << save_scheme_path << std::endl;
                }
            }
        },
        std::cout);

    return 0;
}