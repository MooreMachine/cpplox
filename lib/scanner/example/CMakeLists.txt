set(EXECUTABLE_NAME scanner_example)

################
# Source files #
################

set(SOURCE_FILES
        scanner_main.cpp
)

###############################
# Statically linked libraries #
###############################

set(TEST_LINK_LIBRARIES
        scanner_lib
)

###############
# Add example #
###############

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${INCLUDE_DIRS})
target_link_libraries(${EXECUTABLE_NAME} PRIVATE ${TEST_LINK_LIBRARIES})
