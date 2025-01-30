cmake_minimum_required(VERSION 3.27)
set(MODULE_PATH ${CMAKE_MODULE_PATH})

cmake_policy(SET CMP0091 NEW)
cmake_policy(SET CMP0087 NEW)
cmake_policy(SET CMP0148 NEW)

option(WITH_FFMPEG_GPL "Link with GPL ffmpeg / LGPL otherwise" ON)
option(WITH_STATIC_ANALYSIS "Perform static analysis via clang-tidy" OFF)
option(WITH_ADDRESS_SANITIZER "Add additional memory checks" OFF)
option(WITH_PYTHON_BINDINGS "Add python bindings support" OFF)
option(WITH_OPENCV_LIBRARY "Add OpenCV library to the build" ON)
option(WITH_XSDK_CI_BUILD "Guard for non CI code build" OFF)
option(WITH_PATCHED_BAICALP7 "Use patched version of baical-p7 logging library" ON)
option(WITH_TESTS "Build test projects" OFF)
option(USE_PREBUILD "Use pre build version of xmedia library" OFF)
option(PREPARE_PREBUILD "Preapare pre build version of xmedia dependency library" OFF)
option(WITH_CODE_COVERAGE "Set ON when do linux build on CI" OFF)
option(DYNAMIC_RUNTIME "Set ON when want to use dynamic runtime" OFF)
option(DYNAMIC_BUILD "Set ON when want to use dynamic build" OFF)

if(WIN32 OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    if(DYNAMIC_RUNTIME)
        message(STATUS "Runtime: Dynamic")
        set(CONAN_ARGS "-s;compiler.runtime=dynamic;")
    else()
        message(STATUS "Runtime: Static")
        set(CONAN_ARGS "-s;compiler.runtime=static;")
    endif()
endif()
if(DYNAMIC_BUILD)
    message(STATUS "Configuration type: Dynamic (dll/so)")
else()
    message(STATUS "Configuration type: Static (lib/a)")
endif()

set(ENV{WITH_FFMPEG_GPL} ${WITH_FFMPEG_GPL})
set(ENV{WITH_PYTHON_BINDINGS} ${WITH_PYTHON_BINDINGS})
set(ENV{WITH_OPENCV_LIBRARY} ${WITH_OPENCV_LIBRARY})
set(ENV{WITH_PATCHED_BAICALP7} ${WITH_PATCHED_BAICALP7})

if(WIN32)
    set(MSVC_TOOLSET_VERSION "143" CACHE STRING MSVC_TOOLSET_VERSION)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    set(CMAKE_SYSTEM_VERSION "10.0" CACHE STRING INTERNAL FORCE)
    set(CMAKE_CXX_FLAGS "/GR /EHsc /DWIN32 /nologo /Zi /Gm- /GS /Gy- /Zc:wchar_t /Zc:inline /fp:precise /W3 /WX /Zc:forScope /utf-8 /D_CRT_RAND_S /Zc:__cplusplus /MP" CACHE STRING CMAKE_CXX_FLAGS)
    set(CMAKE_C_FLAGS "/DWIN32 /GR /EHsc /nologo /Zi /Gm- /GS /Gy- /Zc:wchar_t /Zc:inline /fp:precise /W3 /WX /Zc:forScope /utf-8 /MP" CACHE STRING CMAKE_C_FLAGS)

    set(CMAKE_CXX_FLAGS_DEBUG "/Zi /Ob0 /Od /RTC1" CACHE STRING CMAKE_CXX_FLAGS_DEBUG)
    set(CMAKE_C_FLAGS_DEBUG "/Zi /Ob0 /Od /RTC1" CACHE STRING CMAKE_C_FLAGS_DEBUG)

    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/Zi /O2 /Ob1 /DNDEBUG" CACHE STRING CMAKE_CXX_FLAGS_RelWithDebInfo)
    set(CMAKE_C_FLAGS_RELWITHDEBINFO "/Zi /O2 /Ob1 /DNDEBUG" CACHE STRING CMAKE_C_FLAGS_RelWithDebInfo)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS _CRT_SECURE_NO_DEPRECATE WIN32_LEAN_AND_MEAN _SILENCE_ALL_CXX20_DEPRECATION_WARNINGS NOMINMAX)
    if(DYNAMIC_RUNTIME)
        set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
    else()
        set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    endif()
else()
    if(APPLE)
        # To check: -Wno-nonportable-include-path -Wno-delete-abstract-non-virtual-dtor -Wno-switch
        set(CMAKE_CXX_FLAGS "-fPIC -Wno-multichar -Wno-enum-compare -Wno-nonportable-include-path -Wno-delete-abstract-non-virtual-dtor -Wno-switch -Werror" CACHE STRING CMAKE_CXX_FLAGS)
        set(CMAKE_C_FLAGS "-fPIC -Wno-nonportable-include-path -Wno-delete-abstract-non-virtual-dtor -Wno-switch -Werror" CACHE STRING CMAKE_C_FLAGS)
        set(CMAKE_INSTALL_RPATH "@loader_path")
    else()
        set(CMAKE_CXX_FLAGS "-fPIC -Wno-multichar -Wno-enum-compare -Werror" CACHE STRING CMAKE_CXX_FLAGS)
        set(CMAKE_C_FLAGS "-fPIC -Werror" CACHE STRING CMAKE_C_FLAGS)
        set(CMAKE_INSTALL_RPATH "$ORIGIN")
    endif()

    set(CMAKE_BUILD_WITH_INSTALL_RPATH ON)

    set(CMAKE_CXX_FLAGS_DEBUG "-g -D_DEBUG" CACHE STRING CMAKE_CXX_FLAGS_DEBUG)
    set(CMAKE_C_FLAGS_DEBUG "-g -D_DEBUG" CACHE STRING CMAKE_C_FLAGS_DEBUG)

    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-g -O2 -DNDEBUG" CACHE STRING CMAKE_CXX_FLAGS_RELWITHDEBINFO)
    set(CMAKE_C_FLAGS_RELWITHDEBINFO "-g -O2 -DNDEBUG" CACHE STRING CMAKE_C_FLAGS_RELWITHDEBINFO)
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Build type")
    set(CMAKE_CONFIGURATION_TYPES "RelWithDebInfo;Debug" CACHE STRING CMAKE_CONFIGURATION_TYPES)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS ${CMAKE_CONFIGURATION_TYPES})
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
if(WIN32)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
else()
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>)
endif()
if(NOT WIN32 AND DYNAMIC_BUILD)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
else()
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
endif()
set(CMAKE_PDB_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(ENV{XSDK_BUILD_FOLDER} ${CMAKE_BINARY_DIR}/bin)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(WIN32)
    add_custom_command(
        OUTPUT
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/avcodec-61.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/avdevice-61.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/avfilter-10.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/avformat-61.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/avutil-59.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/swresample-5.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/Processing.NDI.Lib.DirectShow.x64.dll"
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/Processing.NDI.Lib.x64.dll"
        #TODO change it to some universal file
        COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/copy_deps.py" -i ${CMAKE_BINARY_DIR}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>.deps -o ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
        DEPENDS
        copy_deps.py
        ${CMAKE_BINARY_DIR}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>.deps
        WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    )
    add_custom_target(copy_deps
        DEPENDS "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/avcodec-61.dll"
    )
elseif(APPLE)
    add_custom_command(
        OUTPUT
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/libavcodec.dylib"
        #TODO change it to some universal file
        COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/copy_deps.py" -i ${CMAKE_BINARY_DIR}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>.deps -o ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        DEPENDS
        copy_deps.py
        ${CMAKE_BINARY_DIR}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>.deps
        WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    )
    add_custom_target(copy_deps
        DEPENDS "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/libavcodec.dylib"
    )
else()
    add_custom_command(
        OUTPUT
        "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/libavcodec.so"
        #TODO change it to some universal file
        COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/copy_deps.py" -i ${CMAKE_BINARY_DIR}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>.deps -o ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        DEPENDS
        copy_deps.py
        ${CMAKE_BINARY_DIR}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>.deps
        WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    )
    add_custom_target(copy_deps
        DEPENDS "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/libavcodec.so"
    )
endif()
if(PREPARE_PREBUILD)
    set(ENV{XSDK_PREBUILD_FOLDER} ${CMAKE_CURRENT_SOURCE_DIR}/lib)
endif()

project(xmedia)

if(NOT USE_PREBUILD)
    add_custom_target(copy_libs)
    list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
    list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

    if(WITH_XSDK_CI_BUILD)
        add_compile_definitions("_XSDK_CI_BUILD_")
    endif()

    if(WITH_PATCHED_BAICALP7)
        add_compile_definitions("_PATCHED_BAICALP7_")
    endif()

    if(CMAKE_CONFIGURATION_TYPES)
        message("CMAKE_CONFIGURATION_TYPES=${CMAKE_CONFIGURATION_TYPES}")
        set(TYPES "${CMAKE_CONFIGURATION_TYPES}")
    else()
        set(TYPES "${CMAKE_BUILD_TYPE}")
        message("CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}")
    endif()

    find_package(GTest REQUIRED)
    find_package(srt REQUIRED)
    find_package(ffmpeg REQUIRED)
    # find_package(google-webrtc REQUIRED)
    find_package(ndi_newtek REQUIRED)
    find_package(RapidJSON REQUIRED)
    find_package(xlogger REQUIRED)
    if(WITH_PYTHON_BINDINGS)
        find_package(pybind11 REQUIRED)
    endif()
    if(WITH_OPENCV_LIBRARY)
        find_package(OpenCV REQUIRED)
        add_compile_definitions("_WITH_OPENCV_LIBRARY_")
    endif()

    if(NOT ${MEDIALOOKS_BUILD_NUMBER} EQUAL "")
        add_compile_definitions("MEDIALOOKS_BUILD_NUMBER=\"${MEDIALOOKS_BUILD_NUMBER}\"")
    endif()

    if(NOT ${MEDIALOOKS_BUILD_DATE} EQUAL "")
        add_compile_definitions("MEDIALOOKS_BUILD_DATE=\"${MEDIALOOKS_BUILD_DATE}\"")
    endif()

    if(WITH_STATIC_ANALYSIS AND NOT WIN32)
        set(CMAKE_CXX_CLANG_TIDY "clang-tidy" "-header-filter=." "-line-filter=[{'name':'.h'}, {'name':'.hpp'}]")
    endif()

    if(WITH_ADDRESS_SANITIZER AND NOT WIN32)
        add_compile_options(-fsanitize=address)
        add_link_options(-fsanitize=address)
    endif()

    if(WITH_CODE_COVERAGE AND NOT WIN32)
        add_compile_options(-fprofile-arcs -ftest-coverage -fprofile-update=atomic)
        add_link_options(-lgcov --coverage)
    endif()


    add_subdirectory(src)
    add_subdirectory(submodules)

else() # USE_PREBUILD
    if(WIN32)
        set(LIBS_PATH "${CMAKE_SOURCE_DIR}/lib/windows")
    elseif(APPLE)
        set(LIBS_PATH "${CMAKE_SOURCE_DIR}/lib/macos")
    else()
        set(LIBS_PATH "${CMAKE_SOURCE_DIR}/lib/linux")
    endif()

    message(STATUS "Using prebuild libraries from ${LIBS_PATH} folder")

    link_directories("${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>")
    set(3RD_PARTY_LIBS_PATH "${LIBS_PATH}/3rd_party")
    link_directories("${3RD_PARTY_LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>")

    include_directories(
        submodules/xbase/include
        submodules/xnode/include
        #TODO: remove it when include\xmedia\interfaces\obsolete.h will be removed
        submodules/xutils/include
    )

    if(WIN32)
        add_custom_target(copy_libs
            ${CMAKE_COMMAND} -E make_directory ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xbase.dll -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xnode.dll -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xutils.dll -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xmedia.dll -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xbase.pdb -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xnode.pdb -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xutils.pdb -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/xmedia.pdb -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>
        )
    elseif(APPLE)
        add_custom_target(copy_libs
            ${CMAKE_COMMAND} -E make_directory ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxbase.dylib -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxnode.dylib -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxutils.dylib -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxmedia.dylib -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
    else()
        add_custom_target(copy_libs
            ${CMAKE_COMMAND} -E make_directory ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxbase.so -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxnode.so -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxutils.so -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
            COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_PATH}/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/libxmedia.so -t ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
    endif()

    if(CONAN_MINIMUM_VERSION)
        find_package(srt REQUIRED)
        find_package(ffmpeg REQUIRED)
        # find_package(google-webrtc REQUIRED)
        find_package(ndi_newtek REQUIRED)
        find_package(RapidJSON REQUIRED)
        find_package(xlogger REQUIRED)
        find_package(XercesC REQUIRED)

        set(AVCODEC ffmpeg::avcodec)
        set(AVDEVICE ffmpeg::avdevice)
        set(AVFORMAT ffmpeg::avformat)
        set(AVFILTER ffmpeg::avfilter)
        set(AVUTIL ffmpeg::avutil)
        set(NDI ndi::ndi)
        set(XERCES XercesC::XercesC)
    else()
        #TODO: try to rewrite to function or macro
        find_library(AVCODEC_D avcodec "${3RD_PARTY_LIBS_PATH}/Debug")
        find_library(AVCODEC_R avcodec "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        add_library(AVCODEC IMPORTED STATIC)
        set_target_properties(AVCODEC PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${AVCODEC_R}
            IMPORTED_LOCATION_DEBUG ${AVCODEC_D}
        )

        find_library(AVDEVICE_D avdevice "${3RD_PARTY_LIBS_PATH}/Debug")
        find_library(AVDEVICE_R avdevice "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        add_library(AVDEVICE IMPORTED STATIC)
        set_target_properties(AVDEVICE PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${AVDEVICE_R}
            IMPORTED_LOCATION_DEBUG ${AVDEVICE_D}
        )

        find_library(AVFORMAT_D avformat "${3RD_PARTY_LIBS_PATH}/Debug")
        find_library(AVFORMAT_R avformat "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        add_library(AVFORMAT IMPORTED STATIC)
        set_target_properties(AVFORMAT PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${AVFORMAT_R}
            IMPORTED_LOCATION_DEBUG ${AVFORMAT_D}
        )

        find_library(AVFILTER_D avfilter "${3RD_PARTY_LIBS_PATH}/Debug")
        find_library(AVFILTER_R avfilter "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        add_library(AVFILTER IMPORTED STATIC)
        set_target_properties(AVFILTER PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${AVFILTER_R}
            IMPORTED_LOCATION_DEBUG ${AVFILTER_D}
        )

        find_library(AVUTIL_D avutil "${3RD_PARTY_LIBS_PATH}/Debug")
        find_library(AVUTIL_R avutil "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        add_library(AVUTIL IMPORTED STATIC)
        set_target_properties(AVUTIL PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${AVUTIL_R}
            IMPORTED_LOCATION_DEBUG ${AVUTIL_D}
        )

        if(WIN32)
            find_library(NDI_D Processing.NDI.Lib.x64 "${3RD_PARTY_LIBS_PATH}/Debug")
            find_library(NDI_R Processing.NDI.Lib.x64 "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        else()
            find_library(NDI_D ndi "${3RD_PARTY_LIBS_PATH}/Debug")
            find_library(NDI_R ndi "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        endif()
        add_library(NDI IMPORTED STATIC)
        set_target_properties(NDI PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${NDI_R}
            IMPORTED_LOCATION_DEBUG ${NDI_D}
        )

        if(WIN32)
            find_library(XERCES_D xerces-c_3D "${3RD_PARTY_LIBS_PATH}/Debug")
            find_library(XERCES_R xerces-c_3 "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        else()
            find_library(XERCES_D xerces-c "${3RD_PARTY_LIBS_PATH}/Debug")
            find_library(XERCES_R xerces-c "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo")
        endif()
        add_library(XERCES IMPORTED STATIC)
        set_target_properties(XERCES PROPERTIES
            IMPORTED_LOCATION_RELWITHDEBINFO ${XERCES_R}
            IMPORTED_LOCATION_DEBUG ${XERCES_D}
        )

        set(AVCODEC AVCODEC)
        set(AVDEVICE AVDEVICE)
        set(AVFORMAT AVFORMAT)
        set(AVFILTER AVFILTER)
        set(AVUTIL AVUTIL)
        set(NDI NDI)
        set(XERCES XERCES)

        message(STATUS "Prepare to copy prebuild libraries from ${LIBS_PATH} folder to bin folders")
        if(WIN32)
            #Because of multiconfig presents in cmake on Windows
            file(GLOB DEBUG_DLLS
                "${3RD_PARTY_LIBS_PATH}/Debug/*.dll"
                "${3RD_PARTY_LIBS_PATH}/Debug/*.pdb"
                "${3RD_PARTY_LIBS_PATH}/Debug/xlog.config.json"
            )
            list(JOIN DEBUG_DLLS "\n" DLLS_LIST)
            set(OUT_FILE "${CMAKE_BINARY_DIR}/Debug.deps")
            file(WRITE ${OUT_FILE} ${DLLS_LIST})

            file(GLOB RELWITHDEBINFO_DLLS
                "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo/*.dll"
                "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo/*.pdb"
                "${3RD_PARTY_LIBS_PATH}/RelWithDebInfo/xlog.config.json"
            )
            list(JOIN RELWITHDEBINFO_DLLS "\n" DLLS_LIST)
            set(OUT_FILE "${CMAKE_BINARY_DIR}/RelWithDebInfo.deps")
            file(WRITE ${OUT_FILE} ${DLLS_LIST})
        elseif(APPLE)
            file(GLOB DLLS
                "${3RD_PARTY_LIBS_PATH}/${CMAKE_BUILD_TYPE}/*.dylib"
                "${3RD_PARTY_LIBS_PATH}/${CMAKE_BUILD_TYPE}/xlog.config.json"
            )
            list(JOIN DLLS "\n" DLLS_LIST)
            set(OUT_FILE "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}.deps")
            file(WRITE ${OUT_FILE} ${DLLS_LIST})
        else()
            #TODO copy necessary .so-s to bin. Is it necessary?
            file(GLOB DLLS
                "${3RD_PARTY_LIBS_PATH}/${CMAKE_BUILD_TYPE}/*.so*"
                "${3RD_PARTY_LIBS_PATH}/${CMAKE_BUILD_TYPE}/xlog.config.json"
            )
            list(JOIN DLLS "\n" DLLS_LIST)
            set(OUT_FILE "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}.deps")
            file(WRITE ${OUT_FILE} ${DLLS_LIST})
        endif()
    endif()
endif()

add_subdirectory(samples)

if(WITH_TESTS)
    find_package(GTest REQUIRED)

    add_subdirectory(tests)
endif()

#post processing info
if(WIN32 OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    if(DYNAMIC_RUNTIME)
        message(STATUS "Runtime: Dynamic")
    else()
        message(STATUS "Runtime: Static")
    endif()
endif()
if(DYNAMIC_BUILD)
    message(STATUS "Configuration type: Dynamic (dll/so)")
else()
    message(STATUS "Configuration type: Static (lib/a)")
endif()
