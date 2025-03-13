from conan import ConanFile
from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain
from conan.tools.files import copy
from conan.errors import ConanInvalidConfiguration
import os
import glob

required_conan_version = ">=2.0.14"

def get_files(directories:list, output_file:str, patterns:list=["*"]):
    with open(output_file, 'w') as f:
        for directory in directories:
            for pattern in patterns:
                path = os.path.join(directory, pattern)
                for filename in glob.glob(path):
                    f.write(filename + '\n')                    

class xMedia(ConanFile):
    settings = "os", "arch", "compiler", "build_type"

    def _get_opt(self, optname, defval):
        return os.environ.get(optname, defval) == "ON"

    def configure(self):
        self.options["srt"].with_boring = True
        self.options["opencv"].with_protobuf = False # conflict with webrtc protobuf

        if self._get_opt("WITH_FFMPEG_GPL", "ON"):
            self.options["ffmpeg"].use_msvc_clang = (self.settings.os == "Windows")
            self.options["ffmpeg"].with_decklink = True
            self.options["ffmpeg"].with_nvidia = (self.settings.os != "Macos") # not supported on Mac
            self.options["ffmpeg"].with_vpl = (self.settings.os == "Windows") # not supported on Mac and Linux
            self.options["ffmpeg"].with_libx264 = True
            self.options["ffmpeg"].with_libx265 = True
            self.options["ffmpeg"].with_ssl = "boringssl"
            self.options["ffmpeg"].with_vulkan = False
            self.options["ffmpeg"].with_placebo = False
            self.options["ffmpeg"].with_libass = False
        else:
            self.options["ffmpeg"].use_msvc_clang = (self.settings.os == "Windows")
            self.options["ffmpeg"].with_nvidia = (self.settings.os != "Macos") # not supported on Mac
            self.options["ffmpeg"].with_vpl = (self.settings.os == "Windows") # not supported on Mac and Linux
            self.options["ffmpeg"].with_ssl = "boringssl"
            self.options["ffmpeg"].with_vulkan = False
            self.options["ffmpeg"].with_placebo = False
            self.options["ffmpeg"].with_libass = False

    def requirements(self):
        self.requires("gtest/1.14.0")
        self.requires("srt/1.5.4@ml/release")
        self.requires("ffmpeg/7.1@ml/release")
        # self.requires("google-webrtc/120@ml/release")
        self.requires("ndi/6.0@ml/release")
        self.requires("rapidjson/cci.20230929")
        self.requires("xerces-c/3.2.5")
        self.requires("xlogger/stable@ml/release")
        if self._get_opt("WITH_PYTHON_BINDINGS", "OFF"):
            self.requires("pybind11/2.11.1")
        if self._get_opt("WITH_OPENCV_LIBRARY", "ON"):
            self.requires("opencv/4.10.0@ml/release")
        
    def generate(self):
        tc = CMakeDeps(self)
        tc.generate()

        # Copy dependency binaries
        deps_file = os.path.join(self.build_folder, os.path.pardir, f"{self.settings.build_type}.deps")
        dirs = []

        if self.settings.os == "Windows":
            xsdk_build_folder = os.path.join(os.environ.get("XSDK_BUILD_FOLDER", "."), str(self.settings.build_type))
            self.output.info("current build folder: {}".format(xsdk_build_folder))

            ffmpeg_bin_folder = os.path.join(self.dependencies["ffmpeg"].package_folder, "bin")
            self.output.info("ffmpeg bin folder: {}".format(ffmpeg_bin_folder))
            dirs.append(ffmpeg_bin_folder)

            ffmpeg_lib_folder = os.path.join(self.dependencies["ffmpeg"].package_folder, "lib")
            self.output.info("ffmpeg lib folder: {}".format(ffmpeg_lib_folder))
            dirs.append(ffmpeg_lib_folder)

            ndi_bin_folder = os.path.join(self.dependencies["ndi"].package_folder, "bin")
            self.output.info("ndi bin folder: {}".format(ndi_bin_folder))
            dirs.append(ndi_bin_folder)

            xlogger_bin_folder = os.path.join(self.dependencies["xlogger"].package_folder, "bin")
            self.output.info("xlogger bin folder: {}".format(xlogger_bin_folder))
            dirs.append(xlogger_bin_folder)

            get_files(dirs, deps_file, ["*.dll","[!f]*.pdb", "*.json"])

            if os.environ.get("XSDK_PREBUILD_FOLDER"): #need copy dependensies
                xsdk_prebuild_folder = os.path.join(os.environ.get("XSDK_PREBUILD_FOLDER"), "windows", "3rd_party", str(self.settings.build_type))
                self.output.info(f"prebuild folder was set: {xsdk_prebuild_folder}")
                copy(self, pattern="*.dll", dst=xsdk_prebuild_folder, src=ffmpeg_bin_folder, keep_path=False)
                copy(self, pattern="*.lib", excludes="ff*.lib", dst=xsdk_prebuild_folder, src=ffmpeg_lib_folder, keep_path=False)
                copy(self, pattern="*.pdb", excludes="ff*.pdb", dst=xsdk_prebuild_folder, src=ffmpeg_lib_folder, keep_path=False)
                copy(self, pattern="*.dll", dst=xsdk_prebuild_folder, src=ndi_bin_folder, keep_path=False)
                ndi_lib_folder = os.path.join(self.dependencies["ndi"].package_folder, "lib")
                self.output.info("ndi lib folder: {}".format(ndi_lib_folder))
                copy(self, pattern="*.lib", dst=xsdk_prebuild_folder, src=ndi_lib_folder, keep_path=False)
                copy(self, pattern="*.json", dst=xsdk_prebuild_folder, src=xlogger_bin_folder, keep_path=False)
                copy(self, pattern="*.dll", dst=xsdk_prebuild_folder, src=xlogger_bin_folder, keep_path=False)
                copy(self, pattern="*.pdb", dst=xsdk_prebuild_folder, src=xlogger_bin_folder, keep_path=False)
                xerces_lib_folder = self.dependencies["xerces-c"].cpp_info.libdir
                self.output.info("xerces-c lib folder: {}".format(xerces_lib_folder))
                copy(self, pattern="*.lib", dst=xsdk_prebuild_folder, src=xerces_lib_folder, keep_path=False)

        elif self.settings.os in ("Linux", "Macos"):
            xsdk_build_folder = os.environ.get("XSDK_BUILD_FOLDER", ".")
            self.output.info("current build folder: {}".format(xsdk_build_folder))

            ffmpeg_lib_folder = os.path.join(self.dependencies["ffmpeg"].package_folder, "lib")
            self.output.info("ffmpeg lib folder: {}".format(ffmpeg_lib_folder))
            dirs.append(ffmpeg_lib_folder)

            ndi_lib_folder = os.path.join(self.dependencies["ndi"].package_folder, "lib")
            self.output.info("ndi lib folder: {}".format(ndi_lib_folder))
            dirs.append(ndi_lib_folder)

            xlogger_bin_folder = os.path.join(self.dependencies["xlogger"].package_folder, "bin")
            self.output.info("xlogger bin folder: {}".format(xlogger_bin_folder))
            dirs.append(xlogger_bin_folder)

            get_files(dirs, deps_file, ["lib*", "*.json"])

            if os.environ.get("XSDK_PREBUILD_FOLDER"): #need copy dependensies
                xsdk_prebuild_folder = os.path.join(os.environ.get("XSDK_PREBUILD_FOLDER"), str(self.settings.os).lower(), "3rd_party", str(self.settings.build_type))
                self.output.info(f"prebuild folder was set: {xsdk_prebuild_folder}")
                copy(self, pattern="lib*", dst=xsdk_prebuild_folder, src=ffmpeg_lib_folder, keep_path=False)
                copy(self, pattern="lib*", dst=xsdk_prebuild_folder, src=ndi_lib_folder, keep_path=False)
                copy(self, pattern="*.json", dst=xsdk_prebuild_folder, src=xlogger_bin_folder, keep_path=False)
                copy(self, pattern="lib*", dst=xsdk_prebuild_folder, src=xlogger_bin_folder, keep_path=False)
                xerces_lib_folder = self.dependencies["xerces-c"].cpp_info.libdir
                self.output.info("xerces-c lib folder: {}".format(xerces_lib_folder))
                copy(self, pattern="lib*", dst=xsdk_prebuild_folder, src=xerces_lib_folder, keep_path=False)

        else:
            raise ConanInvalidConfiguration("Unsupported OS")
