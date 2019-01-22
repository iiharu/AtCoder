# CMakeLists.txt

cmake_minimum_required(VERSION 3.1)                                        # set cmake min version as 3.1
enable_language(CXX)                                                       # set C++
set(CMAKE_CXX_STANDARD 14)                                                 # set C++ standard as 14
set(CMAKE_CXX_STANDARD_REQUIRED ON)                                        # C++ 14 is required.
set(CMAKE_CXX_EXTENSIONS OFF)                                              # enable GNU Extensions
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall -Wextra -Wc++14-compat") # set CXX_FLAGS
include_directories(${PROJECT_SOURCE_DIR}/include)                         # add include to incude directories
add_executable(main main.cpp)                                              # add main.cpp to executable 
