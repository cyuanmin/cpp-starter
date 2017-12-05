cmake_minimum_required(VERSION 3.6.2)
project(cpp-starter)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

add_subdirectory(src/model_lib)
add_subdirectory(src/app)
add_dependencies(app model_lib)

file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")