# CMakeLists.txt

cmake_minimum_required(VERSION 3.1)

if (CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wc++14-compat")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(main main.cpp)
