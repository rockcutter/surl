cmake_minimum_required(VERSION 3.13)

project(surl CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)

add_executable(surl src/main.cpp)

#set(CMAKE_CXX_FLAGX "-std=c++20")
#set_property(TARGET surl PROPERTY CMAKE_CXX_STANDARD 20)
#set_property(TARGET surl PROPERTY CMAKE_CXX_STANDARD_REQUIRED ON)
#set_property(TARGET surl PROPERTY CMAKE_CXX_EXTENSIONS OFF)

target_link_libraries(surl URLShortenizer)