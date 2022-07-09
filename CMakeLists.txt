cmake_minimum_required(VERSION 3.18)

project(CotiaBoy)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_FLAGS "-m32")
set(CMAKE_CXX_FLAGS "-m32")

set(COTIA_DIR "${CMAKE_SOURCE_DIR}")

add_subdirectory(gameboy)

if(WIN32)
add_subdirectory(nogui)
endif()

enable_testing()