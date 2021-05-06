cmake_minimum_required(VERSION 3.7)
project(Cpp_Tutorial)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

# for static libraries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

add_executable("default" "main.cpp")

# Chapter 1
# add_subdirectory("tutorial/syntax")
