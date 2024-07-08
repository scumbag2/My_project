cmake_minimum_required(VERSION 3.10)

project(match_num)

add_compile_options(-g)

set(HEADER_FILE
    ./
)
include_directories(${HEADER_FILE})

aux_source_directory(./ src)
LINK_DIRECTORIES(/usr/lib/gtest) 
find_library(Gtest libgtest.so /usr/lib/gtest)

add_executable(${PROJECT_NAME} ${src} ${test}) 

TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${Gtest})  