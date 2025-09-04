# Build
## Windows
###### Create and change build directory:
```shell
md xmedia
cd xmedia
```
###### Checkout sources:
```shell
git clone https://github.com/Medialooks-LLC/xmedia.git . --branch=<build_version>
git submodule update --init
```
###### Extract binaries from [here](https://github.com/Medialooks-LLC/xmedia/releases/download/<build_version>/xmedia-<build_version>-windows.zip) to `lib` folder.
###### Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -S . -B build
cmake --build build
```

## Linux (Ubuntu 22.04 LTS (jammy))
###### Setup runtime environment:
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
###### Setup build environment:
```shell script
apt-get update
apt-get install -y \
        build-essential \
        cmake \
        wget
```
###### Create and change build directory:
```shell
mkdir -p xmedia && cd xmedia
```
###### Checkout sources:
```shell
git clone https://github.com/Medialooks-LLC/xmedia.git . --branch=<build_version>
git submodule update --init
```
###### Download and extract binaries from [here](https://github.com/Medialooks-LLC/xmedia/releases/download/<build_version>/xmedia-<build_version>-linux.tar.gz) to `lib` folder.
```shell script
wget https://github.com/Medialooks-LLC/xmedia/releases/download/<build_version>/xmedia-<build_version>-linux.tar.gz
tar xvfz xmedia-<build_version>-linux.tar.gz -C lib/
```
###### Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```

## macOS
###### Create and change build directory:
```shell
mkdir -p xmedia && cd xmedia
```
###### Checkout sources:
```shell
git clone https://github.com/Medialooks-LLC/xmedia.git . --branch=<build_version>
git submodule update --init
```
###### Download and extract binaries from [here](https://github.com/Medialooks-LLC/xmedia/releases/download/<build_version>/xmedia-<build_version>-macos.tar.gz) to `lib` folder.
```shell script
wget https://github.com/Medialooks-LLC/xmedia/releases/download/<build_version>/xmedia-<build_version>-macos.tar.gz
tar xvfz xmedia-<build_version>-linux.tar.gz -C lib/
```
###### Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```

# Check Samples

## Windows

Navigate to the `.\build\bin\Debug` folder and run:

```shell
xmedia_sample_put_data.exe
```

After execution, the sample will generate a file named `xmedia_gen_sample.mp4`.

Next, you can run:

```shell
xmedia_sample_get_data.exe
```

This will extract a sequence of images (`captured_xxxx.png`) from the previously generated `xmedia_gen_sample.mp4` file.

## Linux & macOS

Navigate to the `./build/bin/Debug` folder and run:

```shell
./xmedia_sample_put_data
```

After execution, the sample will generate a file named `xmedia_gen_sample.mp4`.

Next, you can run:

```shell
./xmedia_sample_get_data
```

This will extract a sequence of images (`captured_xxxx.png`) from the previously generated `xmedia_gen_sample.mp4` file.

