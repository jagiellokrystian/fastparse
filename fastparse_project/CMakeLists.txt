cmake_minimum_required(VERSION 3.15)
project(fastparse LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(fastparse src/fastparse/fastparse.cpp)
target_include_directories(fastparse PUBLIC include)
