cmake_minimum_required(VERSION 3.6.2)
add_executable(app main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../model_lib/include)
target_link_libraries(app model_lib)