cmake_minimum_required(VERSION 3.10)

project(xmedia_sample_transwraping)

FILE(GLOB FILES
        *.cpp
        *.hpp
        *.h
)

include_directories(
    ../../include
)

if(MSVC)
    add_compile_options(/bigobj)
endif()

add_executable(${PROJECT_NAME}
               ${FILES}
)

target_link_libraries(${PROJECT_NAME}
        xmedia
        xutils
        xnode
        xbase
)
if(USE_PREBUILD)
target_link_libraries(${PROJECT_NAME}
                        ${AVCODEC}
                        ${AVDEVICE}
                        ${AVFORMAT}
                        ${AVFILTER}
                        ${AVUTIL}
                        ${XERCES}
                        ${NDI}
)
endif()

add_dependencies(${PROJECT_NAME}
    copy_deps
    copy_libs
)

source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${FILES})
