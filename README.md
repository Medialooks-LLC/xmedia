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

---

## Build

❗**Important**❗: To build the project correctly, you must select which version of **xmedia** you want to build.
In the instructions below, we use the placeholder `<version>` wherever a version number should be specified.
The version corresponds to a tag in the GitHub repository, e.g. `v1.0.1.10-beta`.

---

### Windows

#### Create and enter the build directory:

```shell
md xmedia
cd xmedia
```

#### Clone the sources:

```shell
git clone https://github.com/Medialooks-LLC/xmedia.git . --branch=<version>
git submodule update --init
```

#### Download and extract binaries:

You can find the required binaries on the [Releases](https://github.com/Medialooks-LLC/xmedia/releases) page.

Download them from:
`https://github.com/Medialooks-LLC/xmedia/releases/download/<version>/xmedia-<version>-windows.zip`
and extract them into the `lib` folder.

#### Build the project:

```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -S . -B build
cmake --build build
```

This will configure and build the project inside the `build` directory.

---

### Linux (Ubuntu 22.04 LTS, Jammy)

#### Prerequisites

##### Set up the runtime environment:

```shell script
apt-get update
apt-get install -y \
        libavahi-client3 \
        libavahi-common3 \
        libgl1 \
        libx11-6 \
        libxext6 \
        libxv1 \
        libva2 \
        libva-drm2 \
        libva-x11-2 \
        libvdpau1 \
        libxcb1 \
        libxcb-shape0 \
        libxcb-shm0 \
        libxcb-xfixes0
```

##### Set up the build environment:

```shell script
apt-get update
apt-get install -y \
        build-essential \
        cmake \
        wget
```

#### Create and enter the build directory:

```shell
mkdir -p xmedia && cd xmedia
```

#### Clone the sources:

```shell
git clone https://github.com/Medialooks-LLC/xmedia.git . --branch=<version>
git submodule update --init
```

#### Download and extract binaries:

You can find the required binaries on the [Releases](https://github.com/Medialooks-LLC/xmedia/releases) page.

Download them from:
`https://github.com/Medialooks-LLC/xmedia/releases/download/<version>/xmedia-<version>-linux.tar.gz`
and extract them into the `lib` folder.

```shell script
wget https://github.com/Medialooks-LLC/xmedia/releases/download/<version>/xmedia-<version>-linux.tar.gz
tar xvfz xmedia-<version>-linux.tar.gz -C lib/
```

#### Build the project:

```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```

This will configure and build the project inside the `build` directory.

### macOS
#### Create and enter the build directory:

```shell
mkdir -p xmedia && cd xmedia
```

#### Clone the sources:

```shell
git clone https://github.com/Medialooks-LLC/xmedia.git . --branch=<version>
git submodule update --init
```

#### Download and extract binaries:

You can find the required binaries on the [Releases](https://github.com/Medialooks-LLC/xmedia/releases) page.

Download them from:
`https://github.com/Medialooks-LLC/xmedia/releases/download/<version>/xmedia-<version>-macos.tar.gz`
and extract them into the `lib` folder.

```shell script
wget https://github.com/Medialooks-LLC/xmedia/releases/download/<version>/xmedia-<version>-macos.tar.gz
tar xvfz xmedia-<version>-macos.tar.gz -C lib/
```

#### Build the project:

```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```

This will configure and build the project inside the `build` directory.

---

## Licensing

**XMedia** is a commercial library. Using it in your projects may require purchasing a license from **Medialooks LLC**.
