# CMakeLists.txt

cmake_minimum_required(VERSION 3.1)

project(AtCoder LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

include_directories(../include)

add_executable(a a.cpp)
add_executable(b b.cpp)
add_executable(c c.cpp)
add_executable(d d.cpp)
add_executable(e e.cpp)
add_executable(f f.cpp)
