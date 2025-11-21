#include <fstream>
#include <iostream>
#include <string>
#include "functions/factory_functions.h"
#include "xmedia.h"
#include "xnode_functions.h"

using namespace xsdk;

int main(int argc, char** argv)
{
    xmedia::LogLevelSet(xmedia::LogLevel::kDebug);
    // Parse command line arguments
    std::string input_file  = "./input.mp4";  // Default input file
    std::string output_file = "./output.mp4"; // Default output file

    if (argc == 2) {
        // One argument: set input file
        input_file = argv[1];
    }
    else if (argc == 3) {
        // Two arguments: set input and output files
        input_file  = argv[1];
        output_file = argv[2];
    }
    else if (argc > 3) {
        std::cerr << "Usage: " << argv[0] << " [input_file] [output_file]" << std::endl;
        return -1;
    }

    // 1. Set our JSON schema
    std::string json_scheme = R"(
        {
          "subtype": "serial_container",
          "name": "transcode_scheme",
          "container_items": [
            {
              "subtype": "av_demultiplexer",
              "name": "my_demuxer"
            },
            {
              "subtype": "av_decoder",
              "name": "my_decoder",
              "wrappers": [
                {
                  "wrapper_type": "multistream"
                }
              ]
            },
            {
              "subtype": "av_encoder",
              "name": "my_encoder",
              "init_props": {
                "video": {
                  "av_codec_name": "mpeg4",
                  "av_options": {
                    "b": "10M"
                  }
                },
                "audio": {
                  "av_codec_name": "libmp3lame",
                  "av_options": {
                    "b": "192K"
                  }
                }
              },
              "wrappers": [
                {
                  "wrapper_type": "multistream"
                }
              ]
            },
            {
              "subtype": "av_multiplexer",
              "name": "my_muxer"
            }
          ]
        }
    )";

    // Create event handler
    std::mutex              mtx;
    std::condition_variable transcoding_finished;
    bool                    is_finished = false;
    bool                    has_error   = false;
    std::string             error_message;
    auto                    events_handler = xsdk::xevents::CreateEventsHandler(
        [&](const IMediaHandler::SPtrC& event_source, const MediaEvent event_type, const INode::SPtrC& event_details) {
            // Your event handler
            std::unique_lock<std::mutex> lock(mtx);

            std::cout << "Event: " << xsdk::xenum::ToString(event_type) << " from: " << event_source->Props()->NameGet()
                      << std::endl;

            // We are interested in EOF (End of File) event from the multiplexer
            // This means that the entire transcoding is complete
            if (event_type == xsdk::MediaEvent::kEOFReached) {
                std::string handler_name = event_source->Props()->NameGet();
                if (handler_name == "my_muxer") {
                    std::cout << "Transcoding completed successfully!" << std::endl;
                    is_finished = true;
                    transcoding_finished.notify_all();
                }
            }

            // Error handling
            if (event_type == xsdk::MediaEvent::kMediaGetError) {
                has_error     = true;
                error_message = xsdk::xnode::ToJson(event_details);
                std::cout << "Transcoding error: " << error_message << std::endl;
                is_finished = true;
                transcoding_finished.notify_all();
            }

            return false; // Continue the event handler chain
        });

    // 2. Create and initialize container based on JSON
    // HandlerCreateAndInit is a universal factory for creating any handlers, including containers
    auto handler_result = xsdk::xmedia::HandlerCreateFromJson(json_scheme,
                                                              xsdk::xdata::CreateInterfacesCollection(events_handler));

    if (handler_result.HasError()) {
        std::cerr << "Failed to create handler: " << xsdk::xerror::ToString(handler_result.Error()) << std::endl;
        return -1;
    }

    auto container = xsdk::xobject::PtrQuery<xsdk::IActiveContainer>(handler_result.GetPtr());

    // 2.1. Initialize container with parameters for demuxer and muxer
    // Use "handler_name::property" syntax to pass parameters to specific handlers
    auto init_props = xsdk::xnode::CreateMap({});
    xnode::Set(init_props, "my_demuxer::open_url", input_file);
    xnode::Set(init_props, "my_muxer::open_url", output_file);
    auto init_result = container->Init({}, // first parameter - InitParamsVariant, std::monostate for container
                                       init_props);

    if (init_result.HasError()) {
        std::cerr << "Failed to initialize container: " << xsdk::xerror::ToString(init_result.Error()) << std::endl;
        return -1;
    }

    std::cout << "Container created and initialized successfully." << std::endl;

    // 3. Start processing and wait for completion
    auto start_err = container->OutputStart();
    if (start_err.value()) {
        std::cerr << "Failed to start transcoding: " << xsdk::xerror::ToString(start_err) << std::endl;
        return -1;
    }
    std::cout << "Transcoding is in progress..." << std::endl;
    // 5. Wait for completion via events
    std::unique_lock<std::mutex> lock(mtx);

    // Wait for either completion or timeout (e.g., 10 minutes)
    bool wait_result = transcoding_finished.wait_for(lock, std::chrono::minutes(10), [&]() { return is_finished; });

    lock.unlock();

    if (!wait_result) {
        std::cerr << "Transcoding timeout!" << std::endl;
        container->Close();
        return -1;
    }

    if (has_error) {
        std::cerr << "Transcoding finished with error: " << error_message << std::endl;
    }
    else {
        std::cout << "Transcoding finished successfully!" << std::endl;
    }

    container->Close();

    return 0;
}
