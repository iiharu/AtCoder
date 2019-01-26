# CMakeLists.txt

cmake_minimum_required(VERSION 3.1)
enable_language(CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall -Wextra")
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(main main.cpp)
