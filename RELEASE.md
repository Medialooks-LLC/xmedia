# Get sources
###### Checkout sources:
```shell
git clone https://github.com/Medialooks-LLC/xmedia --branch=v1.0.1.10-beta
git submodule update --init
```
# Windows
###### Extract binaries from `xmedia-1.0.1.10-beta-windows.zip` to `lib/windows` folder.
###### Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -S . -B build
cmake --build build
```
# Linux (Ubuntu 22.04 LTS (jammy))
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
        cmake
```
###### Extract binaries from `xmedia-1.0.1.10-beta-linux.tar.gz` to `lib/linux` folder.
###### Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DWITH_TESTS=OFF -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```