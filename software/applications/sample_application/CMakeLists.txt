cmake_minimum_required(VERSION 3.23)

set(TARGET sample_application) # TODO: Rename

add_executable(${TARGET})

set(SRC_DIR src/${TARGET})

target_sources(
    ${TARGET}
    PUBLIC
    FILE_SET HEADERS
    FILES
        # TODO: Add header files here

    PRIVATE
        ${SRC_DIR}/main.cpp
        # TODO: Add further source files here
)

target_include_directories(${TARGET} PUBLIC ${SRC_DIR})

target_link_libraries(
    ${TARGET}

    PRIVATE
        sample_component # TODO: Set to component name.
)
