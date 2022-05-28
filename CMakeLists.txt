cmake_minimum_required(VERSION 3.16.3)

project(cpplox)

set(CMAKE_CXX_STANDARD 20)

######################
# Install GoogleTest #
######################

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

###################
# Add application #
###################

set(SOURCE_FILES
        src/main.cpp
)

add_executable(cpplox ${SOURCE_FILES})
target_compile_options(cpplox PRIVATE -Wall -Wextra -Werror -pedantic)
set_target_properties(cpplox PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

##################################
# Add other CMakeLists.txt files #
##################################

add_subdirectory(tests)
