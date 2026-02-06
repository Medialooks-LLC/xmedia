#include <condition_variable>
#include <filesystem>
#include <iostream>
#include <map>
#include <mutex>
#include <set>
#include <thread>
#include <vector>

#include "xbase.h"
#include "xmedia.h"
#include "xmedia_errors.h"
#include "xnode.h"

using namespace xsdk;

namespace {

void PrintUsage(const char* program_name)
{
    std::cout << "Usage: " << program_name << " <input_file_path> [output_file_1] [output_file_2] [output_file_3]\n";
    std::cout << "Demonstrates using multiple sinks with different resolutions and frame rates\n";
    std::cout << "to write segments of a single source video to different output files.\n\n";
    std::cout << "Parameters:\n";
    std::cout << "  input_file_path - Path to source video file (required)\n";
    std::cout << "  output_file_n   - Optional output file paths. If not provided,\n";
    std::cout << "                     default names will be used in current directory.\n\n";
    std::cout << "Example:\n";
    std::cout << "  " << program_name << " video.mp4\n";
    std::cout << "  " << program_name << " video.mp4 out1.mp4 out2.mp4 out3.mp4\n\n";
    std::cout << "The sample creates 3 output files with different configurations:\n";
    std::cout << "  1. 640x480 at 30fps (0-5 seconds) - libopenh264 codec\n";
    std::cout << "  2. 1280x720 at 25fps (1-6 seconds) - MPEG2 codec\n";
    std::cout << "  3. 1920x1080 at 30fps (2-7 seconds) - MPEG4 codec\n";
}

} // anonymous namespace

int main(int argc, char* argv[])
{
    if (argc < 2) {
        PrintUsage(argv[0]);
        return -1;
    }

    std::string input_file = argv[1];

    // Output configurations (different resolutions, frame rates, time segments, and codecs)
    struct SinkConfig {
        std::string      filename;
        int              width;
        int              height;
        double           frame_rate;
        double           start_sec;
        double           end_sec;
        std::string_view codec_name;
        std::string      description;
    };

    // Set output file names from command line or use defaults
    std::vector<SinkConfig> sink_configs;

    if (argc >= 5) {
        // User provided all 3 output file names
        sink_configs = {
            {argv[2], 640, 480, 30.0, 0.0, 5.0, av_lib::codec_id::kLibopenh264, "640x480@30fps libopenh264"},
            {argv[3], 1280, 720, 25.0, 1.0, 6.0, av_lib::codec_id::kMpeg2video, "1280x720@25fps MPEG2"},
            {argv[4], 1920, 1080, 30.0, 2.0, 7.0, av_lib::codec_id::kMpeg4, "1920x1080@30fps MPEG4"}};
    }
    else {
        // Use default output file names
        sink_configs = {{"multiple_sinks_640x480.mp4",
                         640,
                         480,
                         30.0,
                         0.0,
                         5.0,
                         av_lib::codec_id::kLibopenh264,
                         "640x480@30fps libopenh264"},
                        {"multiple_sinks_1280x720.mp4",
                         1280,
                         720,
                         25.0,
                         1.0,
                         6.0,
                         av_lib::codec_id::kMpeg2video,
                         "1280x720@25fps MPEG2"},
                        {"multiple_sinks_1920x1080.mp4",
                         1920,
                         1080,
                         30.0,
                         2.0,
                         7.0,
                         av_lib::codec_id::kMpeg4,
                         "1920x1080@30fps MPEG4"}};
    }

    // Check if input file exists
    if (!std::filesystem::exists(input_file)) {
        std::cerr << "Error: Input file not found: " << input_file << std::endl;
        return -1;
    }

    // Remove existing output files
    for (const auto& config : sink_configs) {
        if (std::filesystem::exists(config.filename)) {
            std::cout << "Removing existing file: " << config.filename << std::endl;
            std::filesystem::remove(config.filename);
        }
    }

    // Log configuration
    std::cout << "\nMultiple Sinks Sample Configuration:\n";
    std::cout << "=====================================\n";
    std::cout << "Input file: " << input_file << "\n\n";
    std::cout << "Output sinks:\n";
    for (size_t i = 0; i < sink_configs.size(); ++i) {
        const auto& config = sink_configs[i];
        std::cout << "  " << (i + 1) << ". " << config.filename << " - " << config.description << " ("
                  << config.start_sec << "s - " << config.end_sec << "s)\n";
    }
    std::cout << std::endl;

    // Set log level for visibility
    xmedia::LogLevelSet(xmedia::LogLevel::kInfo);

    // Create serial container scheme
    std::cout << "Creating container scheme..." << std::endl;
    auto scheme_xr = xconfig::CreateContainerScheme(xconfig::DataFlowMode::kSerial, "multiple_sinks_scheme");
    if (!scheme_xr.HasResult()) {
        std::cerr << "Error: Failed to create container scheme: " << scheme_xr.Error().message() << std::endl;
        return -1;
    }

    // Insert demultiplexer into scheme
    auto insert_xr = scheme_xr->ItemInsert(
        IContainerScheme::ItemDesc {xmedia::handlers::kAvDemultiplexer,
                                    input_file,
                                    xnode::CreateMap({{kAvSrcDecodeVid, true}, {kAvSrcDecodeAud, true}})},
        {});
    if (!insert_xr.HasResult()) {
        std::cerr << "Error: Failed to insert demultiplexer into scheme: " << insert_xr.Error().message() << std::endl;
        return -1;
    }
    std::string demux_name = insert_xr->item_name;

    // Insert writer into scheme
    insert_xr = scheme_xr->ItemInsert(IContainerScheme::ItemDesc {xmedia::handlers::kMediaWriter, "", {}}, {});
    if (!insert_xr.HasResult()) {
        std::cerr << "Error: Failed to insert writer into scheme: " << insert_xr.Error().message() << std::endl;
        return -1;
    }
    std::string writer_name = insert_xr->item_name;

    // Create container from scheme
    std::cout << "Creating container..." << std::endl;
    auto container_xr = xmedia::HandlerCreateByProps<IActiveContainer>(IContainerScheme::ItemDesc {scheme_xr.Result()});
    if (!container_xr.HasResult()) {
        std::cerr << "Error: Failed to create container: " << container_xr.Error().message() << std::endl;
        return -1;
    }

    // Initialize container
    auto init_xr = container_xr->Init({});
    if (!init_xr.HasResult()) {
        std::cerr << "Error: Failed to initialize container: " << init_xr.Error().message() << std::endl;
        return -1;
    }

    // Get handlers from container
    auto demux_handler = container_xr->ActiveGetByPath(demux_name);
    if (!demux_handler) {
        std::cerr << "Error: Failed to get demuxer handler from container" << std::endl;
        return -1;
    }

    auto writer_handler = container_xr->ActiveGetByPath(writer_name);
    if (!writer_handler) {
        std::cerr << "Error: Failed to get writer handler from container" << std::endl;
        return -1;
    }

    // Query IMediaWriter interface
    auto writer_sp = xobject::PtrQuery<IMediaWriter>(writer_handler.get());
    if (!writer_sp) {
        std::cerr << "Error: Failed to query IMediaWriter interface" << std::endl;
        return -1;
    }

    // Get source stream UIDs from demuxer
    auto source_uids = xmedia::MediaUnitsVecUids(demux_handler->Outputs());
    std::cout << "Found " << source_uids.size() << " stream(s) in input file" << std::endl;

    // Find audio and video source UIDs
    xbase::Uid audio_source_uid;
    xbase::Uid video_source_uid;
    bool       audio_found = false;
    bool       video_found = false;

    for (const auto& output : demux_handler->Outputs()) {
        if ((output->ObjectType() & XObjectType::Audio) == XObjectType::Audio && !audio_found) {
            audio_source_uid = output->MediaUids().stream_uid.value_or(xbase::kInvalidUid);
            audio_found      = true;
            std::cout << "Audio stream UID: " << audio_source_uid << std::endl;
        }
        else if ((output->ObjectType() & XObjectType::Video) == XObjectType::Video && !video_found) {
            video_source_uid = output->MediaUids().stream_uid.value_or(xbase::kInvalidUid);
            video_found      = true;
            std::cout << "Video stream UID: " << video_source_uid << std::endl;
        }
    }

    if (!audio_found) {
        std::cerr << "Error: Could not find audio stream in input file" << std::endl;
        return -1;
    }
    if (!video_found) {
        std::cerr << "Error: Could not find video stream in input file" << std::endl;
        return -1;
    }

    // Create audio encoder (common for all sinks)
    std::cout << "\nCreating audio encoder..." << std::endl;
    IMediaStreamEncoders::EncoderSpecs audio_encoder_specs;
    audio_encoder_specs.encoder_name      = static_cast<std::string>(av_lib::codec_id::kAac);
    audio_encoder_specs.encoder_props     = xnode::CreateMap({{"bitrate", 128000}, {"sample_rate", 44100}});
    audio_encoder_specs.conversion_format = XFormatA {av_lib::sample_fmt::kFlt, 2, 44100}; // 2 channels, 44100 Hz
    audio_encoder_specs.conversion_props  = {};

    // Add encoded audio stream
    auto audio_encoded_xr = writer_sp->EncodedStreamAdd(audio_source_uid, std::move(audio_encoder_specs), {});
    if (!audio_encoded_xr.HasResult()) {
        std::cerr << "Error: Failed to add encoded audio stream: " << audio_encoded_xr.Error().message() << std::endl;
        return -1;
    }
    auto audio_encoded_uid = audio_encoded_xr->encoded_stream_uid;
    std::cout << "Created encoded audio stream UID: " << audio_encoded_uid << std::endl;

    // Create video encoded streams for each sink with different resolutions
    std::cout << "\nCreating video encoders..." << std::endl;
    std::map<size_t, xbase::Uid> video_encoded_uids;

    for (size_t i = 0; i < sink_configs.size(); ++i) {
        const auto& config = sink_configs[i];

        IMediaStreamEncoders::EncoderSpecs video_encoder_specs;
        video_encoder_specs.encoder_name = config.codec_name;
        // Adjust encoder properties based on codec
        if (config.codec_name == static_cast<std::string>(av_lib::codec_id::kMpeg2video)) {
            video_encoder_specs.encoder_props = xnode::CreateMap({{"bitrate", 2000000}});
        }
        else if (config.codec_name == static_cast<std::string>(av_lib::codec_id::kMpeg4)) {
            video_encoder_specs.encoder_props = xnode::CreateMap({{"bitrate", 2000000}, {"mbd", "simple"}});
        }
        else {
            // Default for libopenh264
            video_encoder_specs.encoder_props = xnode::CreateMap(
                {{"bitrate", 2000000}, {"preset", "medium"}, {"profile", "main"}});
        }
        video_encoder_specs.conversion_format = XFormatV {
            "yuv420p",
            static_cast<int32_t>(config.width),
            static_cast<int32_t>(config.height),
            eXFieldsOrder::Progressive,
            XRational {static_cast<int32_t>(config.frame_rate * 100), 100}};
        video_encoder_specs.conversion_props = xnode::CreateMap({{"resize", true}, {"frame_rate", config.frame_rate}});

        // Add encoded video stream
        auto video_encoded_xr = writer_sp->EncodedStreamAdd(video_source_uid, std::move(video_encoder_specs), {});
        if (!video_encoded_xr.HasResult()) {
            std::cerr << "Error: Failed to add encoded video stream " << i << ": " << video_encoded_xr.Error().message()
                      << std::endl;
            return -1;
        }
        video_encoded_uids[i] = video_encoded_xr->encoded_stream_uid;
        std::cout << "Created encoded video stream UID " << i << ": " << video_encoded_uids[i] << " ("
                  << config.description << ")" << std::endl;
    }

    // Start container processing
    std::cout << "\nStarting container processing..." << std::endl;
    auto err = container_xr->OutputStart();
    if (err) {
        std::cerr << "Error: Failed to start container output: " << err.message() << std::endl;
        return -1;
    }

    // Wait for initial data processing
    std::cout << "Processing initial data (waiting when all necessary data is available)...\n" << std::endl;
    const auto            start_time64 = time64::FromSec(2.5);
    static const uint32_t step_msec    = 200;
    for (int attempt = 0;; ++attempt) {
        std::this_thread::sleep_for(std::chrono::milliseconds(step_msec));
        auto bunch_state = xmedia_stream::ToString(writer_sp->EncodedStreamsBunch());
        auto times_xr    = xmedia_stream::BunchAvailableTimes(writer_sp->EncodedStreamsBunch(), false);
        if (attempt > 5 || times_xr.HasResult()) {
            if (!times_xr.HasResult()) {
                std::cerr << "BunchAvailableTimes() err:" << xerror::ToString(times_xr.Error());
                return -1;
            }

            std::cout << bunch_state << "\tMin Front:" << time64::ToSec(times_xr->first)
                      << " Min Back:" << time64::ToSec(times_xr->second) << std::endl;

            if (times_xr->second >= start_time64)
                break;
        }

        if (attempt <= (start_time64 / time64::FromMsec(step_msec)) * 2 + 1) {
            std::cout << "BUNCH NOT READY\n";
        }
        else {
            std::cout << "BUNCH READY\n";
        }
    }

    // Setup callback to track sink closure
    std::mutex              mtx;
    std::condition_variable sink_done;
    std::atomic<int>        sinks_closed(0);
    std::atomic<int>        sinks_started(0);

    auto on_sink_close = [&](const IWriterSink*             _sink_p,
                             const IWriterSink::CloseReason _close_reason,
                             const std::error_code          _error,
                             IWriterSink::DestSpecs&&       _next_dest_specs) -> std::optional<IWriterSink::DestSpecs> {
        std::unique_lock lck(mtx);
        std::cout << "Sink closed: " << _sink_p->SinkStatus().dest_specs_p->dest_url
                  << ", reason: " << xwriter::ToString(_close_reason) << " (" << static_cast<int>(_close_reason) << ")"
                  << ", error: " << xerror::ToString(_error) << std::endl;
        sinks_closed++;
        sink_done.notify_all();
        return std::nullopt;
    };

    // Add sinks with different configurations
    std::cout << "\nAdding sinks..." << std::endl;
    for (size_t i = 0; i < sink_configs.size(); ++i) {
        const auto& config = sink_configs[i];

        std::set<xbase::Uid> sink_streams_uids = {audio_encoded_uid, video_encoded_uids[i]};

        IWriterSink::DestSpecs dest_specs;
        dest_specs.dest_url = config.filename;

        XSegment segment;
        segment.segment_start = time64::FromSec(config.start_sec);
        segment.segment_end   = time64::FromSec(config.end_sec);

        std::cout << "  Adding sink " << (i + 1) << ": " << config.filename << " (" << config.description
                  << "), segment: " << config.start_sec << "s - " << config.end_sec << "s\n";
        std::cout << "    segment_start (time64): " << segment.segment_start.value_or(-1)
                  << ", segment_end (time64): " << segment.segment_end.value_or(-1) << std::endl;

        auto sink_xr = writer_sp->SinkAdd(sink_streams_uids,
                                          segment,
                                          dest_specs,
                                          IWriterSink::Flags::kNone,
                                          on_sink_close);
        if (!sink_xr.HasResult()) {
            std::cerr << "Error: Failed to add sink " << (i + 1) << ": " << sink_xr.Error().message() << std::endl;
            return -1;
        }

        sinks_started++;
    }

    std::cout << "\nAll " << sinks_started << " sinks added successfully" << std::endl;
    std::cout << "Waiting for sinks to complete (timeout: 60s)..." << std::endl;
    std::cout << "Note: Make sure your input file is long enough to cover all configured segments!" << std::endl;

    // Wait for all sinks to close (or timeout)
    {
        std::unique_lock lck(mtx);
        bool             waited_successfully = sink_done.wait_for(lck, std::chrono::seconds(60), [&] {
            return sinks_closed == sinks_started;
        });
        if (waited_successfully) {
            std::cout << "All sinks closed successfully! Closed: " << sinks_closed << "/" << sinks_started << std::endl;
        }
        else {
            std::cout << "Timeout waiting for sinks to close. Closed: " << sinks_closed << "/" << sinks_started
                      << std::endl;
        }
    }

    // Stop container
    std::cout << "\nStopping container..." << std::endl;
    container_xr->OutputStop(false, true);
    std::cout << "Container statistics:\n" << xnode::ToJson(container_xr->Stat()) << std::endl;
    container_xr->Close();

    // Verify output files
    std::cout << "\nVerifying output files..." << std::endl;
    int success_count = 0;
    for (const auto& config : sink_configs) {
        if (!std::filesystem::exists(config.filename)) {
            std::cout << "  [FAIL] Output file not created: " << config.filename << std::endl;
            continue;
        }

        auto file_size = std::filesystem::file_size(config.filename);
        if (file_size == 0) {
            std::cout << "  [FAIL] Output file is empty: " << config.filename << std::endl;
            continue;
        }

        std::cout << "  [OK] " << config.filename << " (size: " << file_size << " bytes)" << std::endl;
        success_count++;
    }

    std::cout << "\nSummary: " << success_count << " of " << sink_configs.size() << " output files created successfully"
              << std::endl;

    return (success_count == sink_configs.size()) ? 0 : -1;
}
