#include "xbase.h"
#include "xmedia.h"
#include "xmedia_errors.h"
#include "xnode.h"

#include <chrono>
#include <filesystem>
#include <iostream>
#include <string>
#include <thread>

using namespace xsdk;

namespace {

void PrintUsage(const char* _program_name)
{
    std::cout << "Usage: " << _program_name << " <background_video_path> <image_path> <overlay_video_path>\n";
    std::cout << "  <background_video_path> - Path to main video file (background)\n";
    std::cout << "  image_path              - Path to image file for overlay\n";
    std::cout << "  overlay_video_path      - Path to overlay video file (use short video to check look and show last "
                 "frame feature)\n";
    std::cout << "\nExample: " << _program_name << " ori.mp4 ARGB.png city_trial.mp4\n";
}

} // anonymous namespace

int main(int argc, char* argv[])
{
    if (argc != 4) {
        PrintUsage(argv[0]);
        return -1;
    }

    auto NormalizePath = [](const std::filesystem::path& _path) {
        std::string normalized = _path.lexically_normal().string();
        // Convert backslashes to forward slashes for consistency (related windows platform only)
        std::replace(normalized.begin(), normalized.end(), '\\', '/');
        return normalized;
    };

    std::string background_video_path = NormalizePath(argv[1]);
    std::string image_path            = NormalizePath(argv[2]);
    std::string overlay_video_path    = NormalizePath(argv[3]);

    // Check if files exist
    if (!std::filesystem::exists(image_path)) {
        std::cerr << "Error: Image file not found: " << image_path << std::endl;
        return -1;
    }
    if (!std::filesystem::exists(background_video_path)) {
        std::cerr << "Error: Main video file not found: " << background_video_path << std::endl;
        return -1;
    }
    if (!std::filesystem::exists(overlay_video_path)) {
        std::cerr << "Error: Overlay video file not found: " << overlay_video_path << std::endl;
        return -1;
    }

    std::cout << "Starting video mixer with the following files:\n";
    std::cout << "  Main video: " << background_video_path << "\n";
    std::cout << "  Overlay image: " << image_path << "\n";
    std::cout << "  Overlay video: " << overlay_video_path << "\n\n";

    // Set log level
    xmedia::LogLevelSet(xmedia::LogLevel::kInfo);

    // Load image frame
    std::cout << "Loading image frame...\n";
    auto argb_frames_xr = xframe::LoadFromFile(image_path);
    if (!argb_frames_xr.HasResult() || argb_frames_xr->empty()) {
        std::cerr << "Error: Failed to load image from " << image_path
                  << "Reason: " << xerror::ToString(argb_frames_xr.Error()) << std::endl;
        return -1;
    }
    std::cout << "Image loaded successfully.\n";

    // Create mixer configuration JSON
    std::cout << "Creating mixer configuration...\n";
    std::string scheme_json = R"(
        {
        "container_items": [{
                "init_props": {
                    "mixer_config": {
                        "background": {
                            "current_media": {
                                "open_hints": {
                                    "user_metadata": {
                                        "loop_offset_sec": 0.0
                                    }
                                },
                                "open_url": ")" +
                              background_video_path + R"("
                            },
                            "source_flags": {
                                        "background": true
                                    },
                            "source_type": "background",
                            "source_uid": 1104
                        },
                        "output_format": {
                            "audio_format": {
                                "channels": 2,
                                "sample_format": "s32",
                                "sample_rate": 48000
                            },
                            "video_format": {
                                "frame_rate": 30.0,
                                "height": 720,
                                "pixel_format": "yuv420p",
                                "width": 1280
                            }
                        },
                        "overlays": [{
                            "audio_level": {
                                "base_level": 1.0,
                                "gain_mode": "auto"
                            },
                            "block_name": "",
                            "blocks": [{
                                    "block_name": "image_block",
                                    "media_source_uid": 3000,
                                    "display_frame": null,
                                    "overlay_props": {
                                        "alpha_blending": {
                                            "alpha_value": 1.0,
                                            "flags": "kDefault"
                                        },
                                        "dst_rect": {
                                            "anchor": "kBottomLeft",
                                            "units": "kRatio",
                                            "width": 0.25,
                                            "x": 0.05,
                                            "y": 0.05
                                        },
                                        "src_rect": {
                                            "anchor": "kTopLeft",
                                            "units": "kRatio",
                                            "width": 0.25,
                                            "x": 0.0,
                                            "y": 0.0
                                        }
                                    },
                                    "props": {},
                                    "state": "enabled",
                                    "type": "regular"
                                },
                                {
                                        "audio_level": {
                                            "base_level": 1.0,
                                            "gain_mode": "auto"
                                        },
                                        "block_name": "regular_video_block",
                                        "media_source_uid": 2000,
                                        "display_frame": null,
                                        "overlay_props": {
                                            "alpha_blending": {
                                                "alpha_value": 0.8,
                                                "flags": "kDefault"
                                            },
                                            "dst_rect": {
                                                "anchor": "kTopRight",
                                                "units": "kRatio",
                                                "width": 0.4,
                                                "x": 0.05,
                                                "y": 0.05
                                            },
                                            "src_rect": {
                                                "anchor": "kMiddle",
                                                "units": "kRatio",
                                                "width": 0.8,
                                                "x": 0.0,
                                                "y": 0.0
                                            }
                                        },
                                        "props": {},
                                        "state": "enabled",
                                        "type": "regular"
                                },
                                {
                                        "audio_level": {
                                            "base_level": 1.0,
                                            "gain_mode": "auto"
                                        },
                                        "block_name": "show_last_frame_video_block",
                                        "media_source_uid": 2001,
                                        "display_frame": null,
                                        "overlay_props": {
                                            "alpha_blending": {
                                                "alpha_value": 0.8,
                                                "flags": "kDefault"
                                            },
                                            "dst_rect": {
                                                "anchor": "kTopLeft",
                                                "units": "kRatio",
                                                "width": 0.4,
                                                "x": 0.05,
                                                "y": 0.05
                                            },
                                            "src_rect": {
                                                "anchor": "kMiddle",
                                                "units": "kRatio",
                                                "width": 0.8,
                                                "x": 0.0,
                                                "y": 0.0
                                            }
                                        },
                                        "props": {},
                                        "state": "enabled",
                                        "type": "regular"
                                },
                                {
                                        "audio_level": {
                                            "base_level": 1.0,
                                            "gain_mode": "auto"
                                        },
                                        "block_name": "loop_video_block",
                                        "media_source_uid": 2002,
                                        "display_frame": null,
                                        "overlay_props": {
                                            "alpha_blending": {
                                                "alpha_value": 0.8,
                                                "flags": "kDefault"
                                            },
                                            "dst_rect": {
                                                "anchor": "kBottomRight",
                                                "units": "kRatio",
                                                "width": 0.4,
                                                "x": 0.05,
                                                "y": 0.05
                                            },
                                            "src_rect": {
                                                "anchor": "kMiddle",
                                                "units": "kRatio",
                                                "width": 0.8,
                                                "x": 0.0,
                                                "y": 0.0
                                            }
                                        },
                                        "props": {},
                                        "state": "enabled",
                                        "type": "regular"
                                }],
                            "display_frame": null,
                            "overlay_props": {
                                "alpha_blending": {
                                    "flags": "kDefault"
                                },
                                "dst_rect": {
                                    "anchor": "kTopLeft",
                                    "units": "kRatio",
                                    "x": 0.0,
                                    "y": 0.0
                                },
                                "src_rect": {
                                    "anchor": "kTopLeft",
                                    "units": "kRatio",
                                    "x": 0.0,
                                    "y": 0.0
                                }
                            },
                            "props": {},
                            "state": "enabled",
                            "type": "group"
                        }],
                        "sources": [
                            {
                                "current_media": {
                                    "open_url": ")" +
                              overlay_video_path + R"("
                                },
                                "source_flags": {},
                                "source_type": "regular",
                                "source_uid": 2000
                            },
                            {
                                "current_media": {
                                    "open_url": ")" +
                              overlay_video_path + R"("
                                },
                                "source_flags": {
                                    "show_last_frame": true
                                },
                                "source_type": "regular",
                                "source_uid": 2001
                            },
                            {
                                "current_media": {
                                    "open_url": ")" +
                              overlay_video_path + R"("
                                },
                                "source_flags": {
                                    "loop": true
                                },
                                "source_type": "regular",
                                "source_uid": 2002
                            },
                            {
                                "current_media": {
                                    "open_url": ")" +
                              image_path + R"("
                                },
                                "source_flags": {
                                    "show_last_frame": true
                                },
                                "source_type": "regular",
                                "source_uid": 3000
                            }
                        ]
                    }
                },
                "name": "mixer_handler",
                "subtype": "media_mixer"
            }, {
                "name": "ndi_out",
                "open_url": "ndi://video_mixer_sample",
                "subtype": "ndi_renderer"
            }],
        "subtype": "serial_container"
    })";

    // Create handler from JSON
    std::cout << "Creating mixer handler...\n";
    auto handler_xr = xmedia::HandlerCreateFromJson(scheme_json);
    if (!handler_xr.HasResult()) {
        std::cerr << "Error: Failed to create mixer handler. Reason: " << xerror::ToString(handler_xr.Error())
                  << std::endl;
        return -1;
    }

    // Get container interface
    auto container_sp = xsdk::xobject::PtrQuery<xsdk::IActiveContainer>(handler_xr.GetPtr());
    if (!container_sp) {
        std::cerr << "Error: Failed to get IActiveContainer interface\n";
        return -1;
    }

    // Initialize container
    container_sp->Init("");

    // Get mixer handler
    auto mixer_handler_sp = container_sp->ActiveGetByPath("mixer_handler");
    if (!mixer_handler_sp) {
        std::cerr << "Error: Failed to get mixer handler\n";
        return -1;
    }

    std::cout << "Setting up overlay blocks...\n";

    // Also you can get overlays interface and configure overlays manually:
    // Get overlays interface
    // auto mixer_overlays = xobject::PtrQuery<IMediaMixerOverlays>(mixer_handler_sp.get());
    // if (!mixer_overlays) {
    //     std::cerr << "Error: Failed to get IMediaMixerOverlays interface\n";
    //     return -1;
    // }

    // Get overlay groups and blocks
    // auto groups = mixer_overlays->OverlayGroupsGet();
    // if (groups.empty()) {
    //     std::cerr << "Error: No overlay groups found\n";
    //     return -1;
    // }

    // auto blocks = groups[0].first->BlocksList();
    // if (blocks.size() < 4) {
    //     std::cerr << "Error: Expected at least 4 overlay blocks\n";
    //     return -1;
    // }

    // Also you can get sources interface and add overlay image manually.
    // How to get sources interface and set image frame to first block
    // blocks[0]->BlockStateSet(IOverlayBlock::State::kEnabled);
    // auto frame_p = blocks[0]->DisplayFrameUpdate(argb_frames_xr.Result().front());
    // if (frame_p) {
    //     std::cerr << "Warning: Failed to update image frame\n";
    // }
    // else {
    //     std::cout << "Image frame set successfully.\n";
    // }

    // Configure video source (second block)

    // Also you can get sources interface and add overlay video manually.
    // How to get sources interface and add overlay video is shown below:
    // auto mixer_sources = xobject::PtrQuery<IMediaMixerSources>(mixer_handler_sp.get());
    // if (!mixer_sources) {
    //     std::cerr << "Error: Failed to get IMediaMixerSources interface\n";
    //     return -1;
    // }

    // std::cout << "Adding overlay video source...\n";
    // auto add_xr = mixer_sources->MediaSourceAdd(2000,
    //                                             IMediaMixer::Source::Flags::kManualRemove,
    //                                             {},
    //                                             Media {overlay_video_path});
    // if (!add_xr.HasResult()) {
    //     std::cerr << "Error: Failed to add video source: " << overlay_video_path << std::endl;
    //     return -1;
    // }
    // std::cout << "Overlay video source added successfully.\n";

    // Start processing
    std::cout << "\nStarting mixer output...\n";
    std::cout << "Video mixer is now running and outputting to NDI: ndi://video_mixer_sample\n";
    std::cout << "You can view the output using any NDI receiver application.\n";
    std::cout << "Press Ctrl+C to stop...\n\n";

    auto start_err = container_sp->OutputStart();
    if (start_err.value() != 0) {
        std::cerr << "Error: Failed to start output. Error code: " << xerror::ToString(start_err) << std::endl;
        return -1;
    }

    if (container_sp->HandlerState() != IMediaHandler::State::Running) {
        std::cerr << "Error: Container not in running state\n";
        return -1;
    }

    // Run for demonstration - in real application you might want to run indefinitely
    // or have some other stopping condition
    try {
        // Run for 30 seconds for demonstration
        std::this_thread::sleep_for(std::chrono::seconds(30));

        std::cout << "\nStopping mixer...\n";
        container_sp->Close();
        std::cout << "Mixer stopped successfully.\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Error during processing: " << e.what() << std::endl;
        container_sp->Close();
        return -1;
    }

    return 0;
}
