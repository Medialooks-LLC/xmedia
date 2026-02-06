# CopyDeps.cmake

# Arguments:
# 1. Path to .deps file
# 2. Output directory fior copying
# 3. Done file name
set(DEPS_FILE "${CMAKE_ARGV3}")
set(OUTPUT_DIR "${CMAKE_ARGV4}")
set(DEPS_DONE_FILE "${CMAKE_ARGV5}")

if (NOT EXISTS ${DEPS_FILE})
    message(WARNING "Dependencies file ${DEPS_FILE} not found. Skipping library files copying.")
    return()
endif()

file(READ ${DEPS_FILE} DEPS_CONTENT)
string(REGEX MATCHALL "[^\n]+" LIBS_FILES "${DEPS_CONTENT}")

if (NOT LIBS_FILES)
    message(WARNING "No library files found in ${DEPS_FILE}. Skipping copying.")
    return()
endif()

foreach(LIBS_FILE IN LISTS LIBS_FILES)
    get_filename_component(FILE_NAME ${LIBS_FILE} NAME)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E copy ${LIBS_FILE} ${OUTPUT_DIR}/${FILE_NAME}
    )
endforeach()

file(WRITE ${OUTPUT_DIR}/${DEPS_DONE_FILE} "Copying done")
