cmake_minimum_required(VERSION 3.16.3)

project(cpplox)

set(CMAKE_CXX_STANDARD 20)

###################
# Add application #
###################

set(SOURCE_FILES
        src/main.cpp
)

add_executable(cpplox ${SOURCE_FILES})
target_compile_options(cpplox PRIVATE -Wall -Wextra -Werror -pedantic)
set_target_properties(cpplox PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
