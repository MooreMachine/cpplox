set(LIB_NAME scanner_lib)

################
# Source files #
################

set(SOURCE_FILES
        utilities.cpp
)

##################
# Create library #
##################

add_library(${LIB_NAME} ${SOURCE_FILES})
target_include_directories(${LIB_NAME} PRIVATE ${INCLUDE_DIRS})
