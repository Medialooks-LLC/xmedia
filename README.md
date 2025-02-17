# XMedia Library by Medialooks LLC

The **XMedia** library, developed by **Medialooks LLC**, is a professional multimedia toolkit designed for developers who need to integrate advanced audio and video processing, capturing, encoding, decoding, and streaming capabilities into their applications. It provides a powerful API for working with multimedia on various platforms.

## Key Features of XMedia

### 1. Video and Audio Capture
   - Supports capturing from various sources, such as webcams, microphones, and video capture devices (e.g., HDMI, SDI).
   - Works with professional-grade equipment for high-quality video capture.

### 2. Media Processing
   - Encoding and decoding of video and audio in various formats.
   - Supports high resolutions, including 4K and beyond.
   - Allows overlaying graphics, text, watermarks, and other elements onto video streams.

### 3. Streaming
   - Real-time streaming support for protocols like RTMP, RTSP, HLS, SRT, and more.
   - Enables the creation of custom media servers or integration with existing platforms.

### 4. Recording and Playback
   - Records video and audio to various file formats (e.g., MP4, MKV, AVI).
   - Playback of multimedia with synchronized audio and video. _(planned)_

### 5. Professional Standards Support
   - Works with professional standards like NDI (Network Device Interface) for video-over-IP.
   - Integrates with broadcasting and video production equipment and software.

### 6. Cross-Platform Compatibility
   - Supports multiple operating systems, including Windows and Linux.
   - Can be integrated into applications written in C++. _(planned support more programming languages)_

### 7. Flexibility and Performance
   - Optimized for high-performance tasks, making it suitable for professional video production, broadcasting, and streaming applications.

## Build
### Get sources
To get the source code along with submodules, run one of the following commands:
```shell
git clone https://github.com/Medialooks-LLC/xmedia
cd xmedia
git submodule update --init --recursive
```
or
```shell
git clone --recurse-submodules https://github.com/Medialooks-LLC/xmedia
```

### Prepare prebuilt libraries
Download the archive containing the necessary prebuilt libraries for your platform and extract it to the appropriate folder.
#### Windows
- Extract the contents of `xmedia-beta-0.0.1-windows.zip` to the `lib/windows` folder.
#### Linux
- Extract the contents of `xmedia-beta-0.0.1-linux.tar.gz` to the `lib/linux` folder.

### Build project

> Note for Linux Users: Before building, ensure the `copy_deps.py` script is executable:
```shell
chmod +x copy_deps.py
```

To build the project, run the following commands:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```
This will configure and build the project in the build directory.

## Licensing
XMedia is a commercial library, and using it in your projects may require purchasing a license from **Medialooks LLC**.
