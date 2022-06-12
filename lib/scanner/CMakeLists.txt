cmake_minimum_required(VERSION 3.16.3)

project(scanner)

set(INCLUDE_DIRS
        ${PROJECT_SOURCE_DIR}/include
)

add_subdirectory(src)
add_subdirectory(unittests)

############################################
# Add an example on how to use the scanner #
############################################

add_subdirectory(example ${CMAKE_BINARY_DIR}/examples/scanner EXCLUDE_FROM_ALL)
