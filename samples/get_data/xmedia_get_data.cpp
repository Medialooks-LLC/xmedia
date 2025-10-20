#include "xmedia.h"
#include "xnode.h"

#include <algorithm>
#include <atomic>
#include <condition_variable>
#include <filesystem>
#include <mutex>
#include <ostream>
#include <thread>

#include "command_line.hpp"
#include "helpers.hpp"

using namespace xsdk;

int GetStream(std::string_view      _container_scheme_path,
              INode::SPtrC          _cmd_line,
              size_t                _num_frames,
              std::filesystem::path _output_path,
              bool                  _trace = false)
{
    xmedia::LogLevelSet(xmedia::LogLevel::kDebug);
    std::string scheme_path = _container_scheme_path.data();

    std::cout << "Load scheme from file: " << scheme_path << "\n";
    auto [container_scheme, error] = helpers::JsonFromFile(scheme_path);
    if (!container_scheme || !error.empty()) {
        std::cout << "Couldn't load scheme file from " << scheme_path << "path. Error:" << error << std::endl;
        return -1;
    }

    std::cout << "Prepare init properties\n";
    auto init_props = xnode::CreateMap();
    for (auto& [key, value] : _cmd_line->BulkGetAll()) {
        auto key_str = key.StringGet().value_or("");
        if (key_str.find_first_of("p:") == 0) { // It's parameter for scheme
            auto path = XPath(key_str.substr(2));
            xnode::Set(init_props, std::move(path), std::move(value));
        }
    }
    std::cout << "Init properties:\n" << xnode::ToJson(init_props) << "\n";

    std::cout << "Load scheme data to ContainerScheme\n";
    auto scheme_xr = xconfig::LoadContainerScheme(container_scheme);
    if (!scheme_xr.Result()) {
        std::cout << "Couldn't load scheme from json with error: " << scheme_xr.Error() << " - "
                  << scheme_xr.Error().message() << "\n ";
        return -1;
    }

    std::cout << "Create container\n";
    auto container_xr = xmedia::HandlerCreateByProps<IActiveContainer>(IContainerScheme::ItemDesc {scheme_xr.Result()},
                                                                       {},
                                                                       {});
    if (!container_xr.Result()) {
        std::cout << "Couldn't create container with error: " << container_xr.Error() << " - "
                  << container_xr.Error().message() << "\n ";
        return -1;
    }

    auto container = container_xr.MoveResult();
    std::cout << "Initialize container\n";
    auto init_xr = container->Init({}, init_props, {});
    if (!init_xr.HasResult())
        std::cout << "container->Init() Failed:" << ErrorDump(init_xr.Error());

    std::mutex                    mtx;
    std::unique_lock              lck(mtx);
    size_t                        encoded_packets = 0;
    std::condition_variable       done;
    std::map<XObjectType, size_t> received;
    size_t                        received_video = 0;
    size_t                        saved_frames   = 0;

    std::atomic_bool stopped    = {false};
    auto             pf_on_data = [&](const ILink::Info*           _link_info_p,
                          const IMediaObject::SPtrC&   _obj,
                          const std::optional<int64_t> _dest_id) -> std::optional<ILink::OnDataRes> {
        std::unique_lock lck(mtx);

        if (!_obj) {
            if (_trace)
                std::cout << "flush idx:" << _dest_id.value_or(-1) << "\n";
            return ILink::OnDataRes {};
        }
        ++received[_obj->ObjectType()];

        auto frame = xobject::PtrQuery<IMediaFrame>(_obj.get());
        if (_trace) {
            if (frame->Format()->Video()) {
                std::cout << "Video frame idx:" << _dest_id.value_or(-1) << " " << xmedia::frame::ToString(frame.get())
                          << "\n";
            }
            else if (frame->Format()->Audio()) {
                std::cout << "Audio frame idx:" << _dest_id.value_or(-1) << " " << xmedia::frame::ToString(frame.get())
                          << "\n";
            }
            else {
                std::cout << "Unknown frame idx:" << _dest_id.value_or(-1) << " "
                          << xmedia::frame::ToString(frame.get()) << "\n";
            }
        }

        if (received_video > _num_frames) {
            done.notify_all();
            return std::nullopt;
        }

        if (frame && frame->Format()->Video()) {
            if (received_video % 30 == 0) { // 30 - frame rate after converter
                auto num_str  = std::to_string(received_video);
                num_str       = std::string(4 - std::min((size_t)4, num_str.length()), '0') + num_str;
                auto dst_path = _output_path / ("captured_" + num_str + ".png");
                auto err      = xframe::SaveToFile({frame}, dst_path.string());
                if (!err)
                    ++saved_frames;
                if (_trace)
                    std::cout << "SaveToFile(" << dst_path << "):" << ErrorDump(err) << "\n";
            }
            ++received_video;
        }

        return ILink::OnDataRes {};
    };

    // Add callback for contaner for check packets
    std::cout << "Start container\n";
    auto err = xmedia::OutputStart(container.get(), pf_on_data);
    if (err)
        std::cout << "container->OutputStart() Failed:" << ErrorDump(err);

    done.wait_for(lck, std::chrono::seconds(300));
    lck.unlock();
    std::cout << "Captured frames by type:\n";
    for (auto& [type, num_frames] : received) {
        std::cout << xenum::ToString(type) << ": " << num_frames << "\n";
    }
    std::cout << "Saved " << saved_frames << " video frames\n";
    std::cout << "Stop and close container\n";
    container->OutputStop(true, false);
    container->Close();
    return 0;
}

void printHelp(std::string _name)
{
    std::cout << _name << " is sample for xsdk framework.\n\n";
    std::cout << "It's get video/audio frames from input stream and put it as images to local folder.\n\n";
    std::cout << "Options:\n";
    std::cout << "--scheme Input json file with container scheme.\n";
    std::cout << "--output Path to save captured frames\n";
    std::cout << "--frames Number of video frames to be captured.\n";
    std::cout << "--debug Print more information about frames capturing.\n";

    std::cout << "Example of usage:\n"
              << _name
              << " --scheme schemes/xm_decode_from_file.json --frames 600 --p:my_demux_name::open_url "
                 "<path_to_file>/my_test_video.mp4\n";
    exit(0);
}

int main(int argc, char** argv)
{
    auto cmd_line = command_line::ParseCommandLine(argc, argv);
    assert(cmd_line);
    auto need_help = cmd_line->At("help").Bool(false);
    if (need_help)
        printHelp(cmd_line->NameGet());

    auto scheme_file     = cmd_line->At("scheme").String("schemes/xm_decode_from_file.json");
    auto output_path_str = cmd_line->At("output").String();
    auto output_path     = std::filesystem::current_path();
    if (!output_path_str.empty()) {
        output_path = std::filesystem::path(output_path_str);
    }
    auto num_frames = (size_t)cmd_line->At("frames").Int64(500);
    auto debug      = cmd_line->At("debug").Bool(false);

    std::filesystem::path p(scheme_file);
    if (!std::filesystem::exists(p)) {
        std::cout << "File doesn't exist: " << scheme_file << "\n";
    }
    if (!p.is_absolute()) {
        scheme_file = std::filesystem::absolute(p).string();
    }

    std::cout << "Use scheme: " << scheme_file << "\n";
    return GetStream(scheme_file, cmd_line, num_frames, output_path, debug);
}