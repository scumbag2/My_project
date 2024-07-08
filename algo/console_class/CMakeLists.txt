cmake_minimum_required(VERSION 3.10)

project(console)

set(HEADER_FILE
    ./
)
include_directories(${HEADER_FILE})

aux_source_directory(./ src)
LINK_DIRECTORIES(/usr/lib/gtest) 

add_executable(${PROJECT_NAME} ${src} ${test}) 

TARGET_LINK_LIBRARIES(${PROJECT_NAME} libgtest.so)  