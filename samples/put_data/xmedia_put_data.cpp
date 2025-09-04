#include "xmedia.h"
#include "xnode.h"

#include <algorithm>
#include <atomic>
#include <condition_variable>
#include <filesystem>
#include <mutex>
#include <thread>

#include "command_line.hpp"
#include "helpers.hpp"

using namespace xsdk;

int GenerateStream(std::string_view _container_scheme_path, INode::SPtrC _cmd_line, size_t _num_frames, bool _async)
{
    xmedia::LogLevelSet(xmedia::LogLevel::kDebug);
    std::string scheme_path = _container_scheme_path.data();

    std::cout << "Load scheme from file: " << scheme_path << "\n";
    auto container_scheme = helpers::JsonFromFile(scheme_path);
    if (!container_scheme) {
        std::cout << "Couldn't load scheme file from " << scheme_path << "path\n";
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
    auto v_frame = helpers::GenerateBGRAVideoFrame(0, 0); //<-here can be simple MediaUnit not full formed frame
    auto a_frame = helpers::GenerateAudioFrame(0);        //<-here can be simple MediaUnit not full formed frame
    auto asamples_in_chunk = 1764;
    auto init_xr           = container->Init({}, init_props, {v_frame, a_frame});
    if (!init_xr.HasResult())
        std::cout << "container->Init() Failed:" << ErrorDump(init_xr.Error());

    std::cout << "Start container\n";
    auto err = container->OutputStart();
    if (err)
        std::cout << "container->OutputStart() Failed:" << ErrorDump(err);

    if (!_async) {
        std::cout << "Create a simple scheduler to put frames every 40ms\n";
        std::mutex              mtx;
        std::condition_variable cv;
        bool                    is_finished  = false;
        auto                    clock        = xclock::Create(xclock::SysSyncGen(true));
        auto                    call_counter = 0;
        const auto              frame_time   = time64::FromMsec(40);
        const auto              start_time   = clock->Time() + frame_time;
        auto                    scheduler    = xscheduler::CreateScheduler(clock.get(), false, xworker::CreateWorker());
        auto                    task_function =
            [_num_frames,
             start_time,
             frame_time,
             asamples_in_chunk,
             &container,
             &mtx,
             &cv,
             &is_finished,
             &call_counter](const xsdk::xbase::IScheduler::TaskInfo* task_info) -> std::optional<xsdk::xbase::Time64> {
            if (call_counter >= _num_frames) {
                {
                    std::unique_lock<std::mutex> lock(mtx);
                    is_finished = true;
                }
                cv.notify_all();
                return std::nullopt;
            }
            auto call_time     = task_info->clock_p->Time();
            auto captured_time = time64::ToMsec(call_time - start_time);
            auto v_frame       = helpers::GenerateBGRAVideoFrame(call_counter, captured_time);
            auto err           = container->MediaPut(v_frame);
            if (err) {
                std::cout << "Couldn't put frame to container with error: " << err << " - " << xerror::ToString(err)
                          << "\n ";
                return std::nullopt;
            }
            auto a_frame = helpers::GenerateAudioFrame(call_counter * asamples_in_chunk);
            err          = container->MediaPut(a_frame);
            if (err) {
                std::cout << "Couldn't put frame to container with error: " << err << " - " << xerror::ToString(err)
                          << "\n ";
                return std::nullopt;
            }
            ++call_counter;
            return task_info->scheduled_time + frame_time;
        };

        auto task_uid = scheduler->ScheduleTask(start_time, std::move(task_function));

        if (task_uid == xsdk::xbase::kInvalidUid) {
            std::cerr << "Failed to schedule task" << std::endl;
            return 1;
        }

        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [&is_finished]() { return is_finished; });
    }
    else {
        // wait to connect with NDI monitor
        std::cout << "Wait for 3 seconds for the user to connect to the NDI source throungh NDI Studio Monitor.\n";
        std::cout << "Actual only for NDI sample scheme\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        std::cout << "Create a simple loop to put frames as fast as it's possible\n";
        auto clock      = xclock::Create(xclock::SysSyncGen(true));
        auto start_time = clock->Time();
        for (size_t i = 0; i < _num_frames; i++) {
            auto tick_time    = clock->Time();
            auto created_time = time64::ToMsec(tick_time - start_time);
            auto v_frame      = helpers::GenerateBGRAVideoFrame(
                i,
                created_time); // Added timestamp to know when we really put the frame
            err = container->MediaPut(v_frame);
            if (err) {
                std::cout << "Couldn't put frame to container with error: " << err << " - " << xerror::ToString(err)
                          << "\n ";
                return -1;
            }
            auto a_frame = helpers::GenerateAudioFrame(i * asamples_in_chunk);
            err          = container->MediaPut(a_frame);
            if (err) {
                std::cout << "Couldn't put frame to container with error: " << err << " - " << xerror::ToString(err)
                          << "\n ";
                return -1;
            }
        }
        //  TODO: add some await while, but it should be wait on OutputStop
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    std::cout << "Send EOS frames\n";
    v_frame = helpers::GenerateBGRAVideoFrame(_num_frames, 0, true);
    err     = container->MediaPut(v_frame);
    if (err) {
        std::cout << "Couldn't put frame to container with error: " << err << " - " << xerror::ToString(err) << "\n ";
        return -1;
    }
    a_frame = helpers::GenerateAudioFrame(_num_frames * asamples_in_chunk, true);
    err     = container->MediaPut(a_frame);
    if (err) {
        std::cout << "Couldn't put frame to container with error: " << err << " - " << xerror::ToString(err) << "\n ";
        return -1;
    }
    std::cout << "Stop and close container\n";
    container->OutputStop(false, true);
    container->Close();
    return 0;
}

void printHelp(std::string _name)
{
    std::cout << _name << " is sample for xsdk framework.\n\n";
    std::cout << "It's generate video/audio frames stream and put it in the loaded container.\n\n";
    std::cout << "Options:\n";
    std::cout << "--scheme Input json file with container scheme.\n";
    std::cout << "--frames Number of frames to be generated.\n";
    std::cout << "--async Enable async putting of generated frames.\n\n";

    std::cout << "Example of usage:\n"
              << _name
              << " --scheme schemes/xm_encode_to_file.json --frames 500 --p:av_multiplexer::open_url "
                 "<path_to_save>/xmedia_gen_sample.mp4\n";
    exit(0);
}

int main(int argc, char** argv)
{
    auto cmd_line = command_line::ParseCommandLine(argc, argv);
    assert(cmd_line);
    auto need_help = cmd_line->At("help").Bool(false);
    if (need_help)
        printHelp(cmd_line->NameGet());

    auto scheme_file = cmd_line->At("scheme").String("schemes/xm_encode_to_file.json");
    auto num_frames  = (size_t)cmd_line->At("frames").Int64(500);
    auto async       = cmd_line->At("async").Bool(false);

    std::filesystem::path p(scheme_file);
    if (!std::filesystem::exists(p)) {
        std::cout << "File doesn't exist: " << scheme_file << "\n";
    }
    if (!p.is_absolute()) {
        scheme_file = std::filesystem::absolute(p).string();
    }

    std::cout << "Use scheme: " << scheme_file << "\n";
    return GenerateStream(scheme_file, cmd_line, num_frames, async);
}