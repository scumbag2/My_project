cmake_minimum_required(VERSION 3.10)

project(88)

set(HEADER_FILE
    ./
    ./test
)
include_directories(${HEADER_FILE})

aux_source_directory(./ src)
aux_source_directory(./test test)
LINK_DIRECTORIES(/usr/lib/gtest) 

add_executable(${PROJECT_NAME} ${src} ${test}) 

TARGET_LINK_LIBRARIES(${PROJECT_NAME} libgtest.so)  