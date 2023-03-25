cmake_minimum_required(VERSION 3.24.1)
project("StasG4Project" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(StasG4Project myprogram.cpp)

target_link_libraries(StasG4Project PRIVATE nlohmann_json::nlohmann_json)
