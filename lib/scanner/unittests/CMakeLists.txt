set(LIB_NAME scanner_test_lib)

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
        scanner_lib
)

##################
# Create library #
##################

add_library(${LIB_NAME} ${TEST_FILES})
target_include_directories(${LIB_NAME} PRIVATE ${INCLUDE_DIRS})
target_link_libraries(${LIB_NAME} PRIVATE ${TEST_LINK_LIBRARIES})

# include(GoogleTest)
# gtest_discover_tests(${LIB_NAME})
