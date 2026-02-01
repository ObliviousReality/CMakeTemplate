set(SRC_DIR sample_component) # TODO: Rename

target_sources(
    ${TARGET}
    PUBLIC
    FILE_SET HEADERS
    FILES
        ${SRC_DIR}/sample_component.hpp

    PRIVATE
        ${SRC_DIR}/sample_component.cpp
)
