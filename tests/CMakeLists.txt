enable_testing()

add_executable(
        cpplox_unittests
        hello_test.cpp
)

target_link_libraries(
        cpplox_unittests
        PRIVATE
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(cpplox_unittests)
