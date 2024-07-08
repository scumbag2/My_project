cmake_minimum_required(VERSION 3.10)
project(lock)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./ src)

add_executable(${PROJECT_NAME} ${src})