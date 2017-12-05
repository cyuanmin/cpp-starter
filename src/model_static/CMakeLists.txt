cmake_minimum_required(VERSION 3.6.2)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(model_static STATIC src/helper.cpp)