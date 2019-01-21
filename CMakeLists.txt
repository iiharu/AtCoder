# CMakeLists.txt

cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-O2 -Wall -Wextra -Wc++14-compat -pedantic")

add_executable(main main.cpp)
