# Multiple Sinks Sample

This sample demonstrates how to use the XMedia MediaWriterHandler with dynamically added sinks to write multiple output files from a single input source, each with different encoder configurations, resolutions, frame rates, and video codecs.

## Description

This application demonstrates the multiple sink capability of MediaWriterHandler, showing how to:

- Create a single writer handler that manages multiple encoded streams
- Dynamically add sinks during runtime to write segments of the same input to different output files
- Configure each sink with different parameters (resolution, frame rate, time segment, video codec)
- Use different video encoders (libopenh264, MPEG2, MPEG4) for each output stream
- Track sink completion with callbacks

The sample processes a single input video file and creates three output files with different video codecs:
1. **640x480 at 30fps** - libopenh264 codec, capturing segments from 0-5 seconds
2. **1280x720 at 25fps** - MPEG2 codec, capturing segments from 1-6 seconds  
3. **1920x1080 at 30fps** - MPEG4 codec, capturing segments from 2-7 seconds

Each output file uses:
- **Audio**: AAC codec at 128 kbps, 44.1 kHz, 2 channels (shared across all sinks)
- **Video**: Different codecs as specified above with appropriate encoder properties

## Usage

### Build the sample

Use usual build commands for xmedia project.

### Run the sample

```bash
./xmedia_sample_multiple_sinks <input_file_path> [output_file_1] [output_file_2] [output_file_3]
```

### Parameters

- **input_file_path**: Path to the source video file (required). Must contain both audio and video streams.
- **output_file_1..3**: Optional custom output file names. If not provided, default names will be used:
  - `multiple_sinks_640x480.mp4`
  - `multiple_sinks_1280x720.mp4`
  - `multiple_sinks_1920x1080.mp4`

### Example

```bash
# Using default output file names
./xmedia_sample_multiple_sinks /path/to/input.mp4

# Using custom output file names
./xmedia_sample_multiple_sinks /path/to/input.mp4 out1.mp4 out2.mp4 out3.mp4
```

## Output

The sample creates three MP4 files in the current directory (or in the specified output paths):

1. **First output** (640x480 @ 30fps, libopenh264 codec)
   - Resolution: 640x480
   - Frame rate: 30 fps
   - Video codec: libopenh264
   - Segment: 0-5 seconds from input
   - Default name: `multiple_sinks_640x480.mp4`

2. **Second output** (1280x720 @ 25fps, MPEG2 codec)
   - Resolution: 1280x720
   - Frame rate: 25 fps
   - Video codec: MPEG2
   - Segment: 1-6 seconds from input
   - Default name: `multiple_sinks_1280x720.mp4`

3. **Third output** (1920x1080 @ 30fps, MPEG4 codec)
   - Resolution: 1920x1080
   - Frame rate: 30 fps
   - Video codec: MPEG4
   - Segment: 2-7 seconds from input
   - Default name: `multiple_sinks_1920x1080.mp4`

## Key Features

### Dynamic Sink Addition

The sample demonstrates adding sinks to a running writer handler:
- Create encoder specifications for both audio and video streams
- Add encoded streams to the writer handler
- Start the container 
- Dynamically add sinks during runtime with different time segments
- Use callbacks to track when each sink completes

### Multiple Encoder Configurations

Each sink uses video encoder configuration tailored to its output:
- Different resolutions (640x480, 1280x720, 1920x1080)
- Different frame rates (25 and 30 fps)
- Different video codecs (libopenh264, MPEG2, MPEG4)
- Codec-specific encoder properties (presets, profiles, etc.)
- Automatic resize and frame rate conversion via encoder properties

### Multiple Video Codecs

The sample demonstrates using different video encoders simultaneously:
- **libopenh264**: Open source H.264 codec with good compression and compatibility
- **MPEG2**: Video codec with good compatibility and widely supported
- **MPEG4**: Legacy codec with broad compatibility

Each codec uses appropriate encoder properties optimized for its characteristics.

### Audio Stream Reuse

The encoded audio stream is shared among all sinks, demonstrating efficient resource usage when writing multiple outputs from the same source.

## Implementation Details

- **Container scheme**: Serial flow with demultiplexer and media writer
- **Data flow**: Serial processing of input streams
- **Log level**: Info level for visibility during processing
- **Sink callbacks**: Used to track completion of each sink
- **Timeout**: 60 seconds for all sinks to complete (adjustable in code)
- **Video codecs**: Uses `av_lib::codec_id` constants from `constants/av_codec_ids.h`

## Troubleshooting

If the sample fails:
1. Ensure the input file contains both audio and video streams
2. Verify the input file path is correct and the file is accessible
3. Check that output file paths are writable
4. Ensure the directory exists if specifying custom output paths
5. For timeouts, verify the input file has sufficient data for all time segments
6. Check that required video codecs (libopenh264, mpeg2, mpeg4) are available in your FFmpeg build
