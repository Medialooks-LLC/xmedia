cmake_minimum_required(VERSION 3.10)

project(xmedia_sample_server)

FILE(GLOB FILES
    ../include/*.hpp
    *.cpp
    *.hpp
    *.h
)

include_directories(
    ../../include
    ../include
)

if(MSVC)
    add_compile_options(/bigobj)
endif()

add_executable(${PROJECT_NAME}
               ${FILES}
)

target_link_libraries(${PROJECT_NAME}
                        xbase
                        xnode
                        xutils
                        xmedia
)

if(USE_PREBUILD AND (NOT DYNAMIC_BUILD AND WIN32) OR NOT WIN32)
    target_link_libraries(${PROJECT_NAME}
                            ${AVCODEC}
                            ${AVDEVICE}
                            ${AVFORMAT}
                            ${AVFILTER}
                            ${AVUTIL}
                            ${NDI}
    )
endif()

source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${FILES})

#Copy samples
FILE(GLOB JSON_SAMPLES
    schemes_examples/*.json
    ../*.json
)

set(OUTPUT_JSON_FILES)
    foreach(JSON_FILE IN LISTS JSON_SAMPLES)
        get_filename_component(FILE_NAME ${JSON_FILE} NAME)
        list(APPEND OUTPUT_JSON_FILES ${CMAKE_BINARY_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/schemes/${FILE_NAME})
    endforeach()

add_custom_command(
    OUTPUT ${OUTPUT_JSON_FILES}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/schemes
    COMMAND ${CMAKE_COMMAND} -E copy ${JSON_SAMPLES} ${CMAKE_BINARY_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/schemes
    COMMENT "Copying JSON files to ${CMAKE_BINARY_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,RelWithDebInfo>/schemes"
)

add_custom_target(copy_server_schemes ALL
    DEPENDS ${OUTPUT_JSON_FILES}
)
