set(EXE_NAME scanner_tests)

###################
# Unit test files #
###################

set(TEST_FILES
        ${PROJECT_SOURCE_DIR}/unittests/utilities_test.cpp
)

###############################
# Statically linked libraries #
###############################

set(TEST_LINK_LIBRARIES
        gmock
        gtest
        gtest_main
        scanner_lib
)

#####################
# Create executable #
#####################

add_executable(${EXE_NAME} ${TEST_FILES})
target_include_directories(${EXE_NAME} PRIVATE ${INCLUDE_DIRS})
target_link_libraries(${EXE_NAME} PRIVATE ${TEST_LINK_LIBRARIES})

##################
# Discover tests #
##################

include(GoogleTest)
gtest_discover_tests(${EXE_NAME})
