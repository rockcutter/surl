cmake_minimum_required(VERSION 3.13)

project(surl CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)

add_executable(surl src/main.cpp)

target_link_libraries(surl URLShortenizer)