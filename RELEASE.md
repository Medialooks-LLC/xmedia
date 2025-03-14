# Get sources

- checkout sources:
```shell
git clone https://github.com/Medialooks-LLC/xmedia
git submodule update --init --recursive
```
or
```shell
git clone --recurse-submodules https://github.com/Medialooks-LLC/xmedia
```

# Windows
- Extract binaries from `xmedia-1.0.1.2-beta-windows.zip` to `lib/windows` folder.
- Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -S . -B build
cmake --build build
```

# Linux (Ubuntu 22.04 LTS (jammy))
- Extract binaries from `xmedia-1.0.1.2-beta-linux.tar.gz` to `lib/linux` folder.
- Build project:
```shell
cmake -DDYNAMIC_RUNTIME=ON -DDYNAMIC_BUILD=ON -DUSE_PREBUILD=ON -DCMAKE_BUILD_TYPE=Debug -S . -B build
cmake --build build
```