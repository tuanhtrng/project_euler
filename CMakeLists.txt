# This cmake version is shipped by OpenBSD port
cmake_minimum_required(VERSION 3.10.2)

project(PROJECT_EULER_DOT_NET VERSION 0.0.2 LANGUAGES CXX)

# C++17 standard is supported by both clang++ and gcc
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O3")
set(CMAKE_CXX_FLAGS_DEBUG "-g -Og")

message(STATUS "Building with the following flags: ${CMAKE_CXX_FLAGS}")

set(EXECUTABLE_OUTPUT_PATH "./solutions")

add_executable(001_cpp problems/001.cpp)
add_executable(002_cpp problems/002.cpp)
add_executable(003_cpp problems/003.cpp)
add_executable(004_cpp problems/004.cpp)
