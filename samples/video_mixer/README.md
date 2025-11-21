# Video Mixer Sample

This sample demonstrates how to use the XMedia mixer to overlay an image and a video onto a main video background using the media mixer handler.

## Description

The application creates a video mixer that:
- Uses a main video as background
- Overlays a static image in the bottom-left corner
- Overlays a second video in the top-right corner
- Outputs the mixed result via NDI (Network Device Interface)

## Usage

```bash
./xmedia_sample_video_mixer <main_video_path> <image_path> <overlay_video_path>
```

### Parameters

- `main_video_path`: Path to the main video file used as background
- `image_path`: Path to an image file (PNG, JPG, etc.) that will be overlaid
- `overlay_video_path`: Path to a video file that will be overlaid on top

### Example

```bash
./xmedia_sample_video_mixer ori.mp4 ARGB.png city_trial.mp4
```

## Output

The mixed video is output via NDI to the URL: `ndi://video_mixer_sample`

You can view the output using any NDI-compatible receiver application such as:
- NDI Studio Monitor
- OBS Studio with NDI plugin
- VLC with NDI plugin
- Any other NDI receiver

## Configuration

The mixer configuration is defined in the JSON structure within the source code. Key settings:

- **Output format**: 1280x720, 30fps, YUV420P
- **Image overlay**: Bottom-left corner, 25% of video width
- **Video overlay**: Top-right corner, 40% of video width with 80% opacity
- **Duration**: The sample runs for 30 seconds for demonstration
