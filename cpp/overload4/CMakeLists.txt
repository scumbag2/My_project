cmake_minimum_required(VERSION 3.10)
project(overlaod)

aux_source_directory(./ src)
add_executable(${PROJECT_NAME} ${src})