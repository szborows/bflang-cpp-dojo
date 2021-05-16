cmake_minimum_required(VERSION 2.8)
project(ParoDojo)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall") # -fsanitize=address -std=c++14
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

add_subdirectory(src)
add_subdirectory(test)
