#include "xmedia.h"
#include "xnode.h"

#include <algorithm>
#include <atomic>
#include <thread>

using namespace xsdk;

int transwrap_file(std::string_view _input_file,
                   std::string_view _output_file,
                   INode::SPtrC     _programs,
                   size_t           max_packets)
{
    xmedia::LogLevelSet(xmedia::LogLevel::kQuiet);
    std::string src_path = _input_file.data();
    std::string dst_path = _output_file.data();

    auto demux_res = xmedia::HandlerCreateByName<IMediaHandler>(xmedia::handlers::kAvDemultiplexer);
    if (!demux_res.Result()) {
        std::cerr << ErrorDump(demux_res.Error())
                  << "Error HandlerCreateByName<IMediaHandler>(xmedia::handlers::kAvDemultiplexer)";
        exit(1);
    }

    auto demux   = demux_res.Result();
    auto init_xr = demux->Init(src_path, xnode::CreateMap({{kAvProgramIdxs_Array, _programs}}));
    if (init_xr.Error()) {
        std::cerr << "Error:" << xsdk::ErrorDump(init_xr.Error()) << " for demux->Init(" << src_path << ")";
        exit(1);
    }

    std::cout << "Source context:" << xnode::ToJson(demux->Stat(kAvContext_Node)) << "\n";

    auto muxer_handler = xmedia::HandlersFactory()->CreateByName(xmedia::handlers::kAvMultiplexer).Result();
    if (!muxer_handler) {
        std::cerr << "Error CreateByName(xmedia::handlers::kAvMultiplexer)";
        exit(1);
    }
    auto muxer = xobject::PtrQuery<IMediaHandler>(muxer_handler.get());
    if (!muxer) {
        std::cerr << "Error PtrQuery<IMediaHandler>(muxer_handler.get())";
        exit(1);
    }

    std::map<uint64_t, IMediaProps::SPtrC> packets_have;

    bool   skip_before_kf = true;
    size_t a_frames       = 0;
    size_t v_frames       = 0;
    for (size_t z = 0; z < max_packets; ++z) {
        auto packet_res = xmedia::MediaGet<IMediaPacket>(demux.get());
        auto packet     = packet_res.MoveResult();
        std::cout << z << " " << xmedia::packet::ToString(packet.get()) << "\n";

        if (!(packet->StreamInfo() && packet->StreamInfo()->stream_idx.has_value())) {
            std::cerr << "No StreamInfo or stream index";
            exit(1);
        }

        auto stm_idx          = packet->StreamInfo()->stream_idx.value();
        packets_have[stm_idx] = packet;
        if (muxer->HandlerState() <= IMediaHandler::State::Closed && packets_have.size() >= 5) {
            MediaPropsVec init_streams;
            for (const auto& [uid, packet] : packets_have)
                init_streams.push_back(packet);

            auto init_xr = muxer->Init(dst_path, {}, std::move(init_streams));
            if (init_xr.Error()) {
                std::cerr << "Error:" << xsdk::ErrorDump(init_xr.Error()) << " for muxer->Init(" << dst_path << ")";
                exit(1);
            }

            for (const auto& [idx, packet] : packets_have) {
                auto err = muxer->MediaPut(packet);
                if (err)
                    std::cerr << "Error:" << xsdk::ErrorDump(err) << " for muxer->MediaPut(" << idx << ")";
            }
        }
        else if (muxer->HandlerState() > IMediaHandler::State::Closed) {
            auto err = muxer->MediaPut(packet);
            if (err != XError::WrongStream) {
                if (err)
                    std::cerr << "Error:" << xsdk::ErrorDump(err) << " for muxer->MediaPut(" << stm_idx << ")";
            }
        }
    }

    muxer->Close();
    return 0;
}

void print_help(std::string name)
{
    std::cout << name << " is sample for xsdk framework.\n\n";
    std::cout << "Options:\n";
    std::cout << "--input Input file for transwraping.\n";
    std::cout << "--output Output file for resulting of transwraping.\n";
    std::cout
        << "--programs For .ts file you can select programs. They should be passed though comma: --programs 1,2\n";
    std::cout << "--packets Number of processed packets from input file (Default: 1000 packets)\n\n";

    std::cout << "Example of usage:\n"
              << " xmedia_sample_transwraping.exe --input E:\\Media\\TS\\RTRS_1_mux_MSK.ts --output "
                 "'E:\\Media\\!Temp\\out.ts' --programs 1,2 --packets 3000\n";
}

int main(int argc, char** argv)
{
    std::string input_file;
    std::string output_file;
    auto        programs_arr = xnode::CreateArray();
    size_t      max_packets  = 1000;

    std::vector<std::string_view> command_line_args;

    for (int i = 1; i < argc; ++i) {
        command_line_args.push_back(argv[i]);
    }
    if (command_line_args.size() == 0) {
        print_help(argv[0]);
        exit(0);
    }

    for (int i = 0; i < command_line_args.size(); i++) {
        if (command_line_args.at(i) == "--input") {
            if (i + 1 >= command_line_args.size()) {
                std::cerr << "Input was not set\n";
                exit(1);
            }
            input_file = command_line_args.at(i + 1);
            ++i;
        }
        else if (command_line_args.at(i) == "--output") {
            if (i + 1 >= command_line_args.size()) {
                std::cerr << "Output was not set\n";
                exit(1);
            }
            output_file = command_line_args.at(i + 1);
            ++i;
        }
        else if (command_line_args.at(i) == "--programs") {
            if (i + 1 >= command_line_args.size()) {
                std::cerr << "Programs was not set. Skipped.\n";
                continue;
            }
            std::istringstream f(command_line_args.at(i + 1).data());
            std::string        s;
            while (getline(f, s, ',')) {
                programs_arr->Insert(xnode::kIdxLast, s);
            }
            ++i;
        }
        else if (command_line_args.at(i) == "--packets") {
            if (i + 1 >= command_line_args.size()) {
                std::cerr << "Packets was not set. Default value (" << max_packets << ") will be used.\n";
                continue;
            }
            auto packets = atoi(command_line_args.at(i + 1).data());
            if (packets > 0) {
                max_packets = packets;
            }
            ++i;
        }
        else if (command_line_args.at(i) == "--help") {
            print_help(argv[0]);
            exit(0);
        }
        else {
            std::cerr << "Unknown parameter was set: " << command_line_args.at(i) << ". Skipped.\n";
        }
    }

    return transwrap_file(input_file, output_file, programs_arr, max_packets);
}