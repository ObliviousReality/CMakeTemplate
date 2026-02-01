set(TEST_TARGET sample_component_tests) # TODO: Rename

add_executable(${TEST_TARGET})

set(TEST_DIR test_sample_component) # TODO: Rename

target_sources(
    ${TEST_TARGET}
    PRIVATE
        ${TEST_DIR}/test_sample_component.cpp
)

target_link_libraries(
    ${TEST_TARGET}
    PRIVATE
        sample_component
        GTest::gtest_main
        GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(${TEST_TARGET})
