# CMakeLists.txt

cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "-std=c++14 -O2 -Wall -Wextra -Wc++14-compat -pedantic")
add_executable(main main.cpp)
