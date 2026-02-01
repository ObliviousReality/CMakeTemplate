set(TARGET sample_component) # TODO: Rename

add_library(${TARGET} STATIC)

# target_link_libraries(
#     ${TARGET}
#     PUBLIC
#         things i include
# )

add_subdirectory(src)

add_subdirectory(test)
