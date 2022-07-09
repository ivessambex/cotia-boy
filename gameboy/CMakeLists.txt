cmake_minimum_required(VERSION 3.18)

project(libgameboy VERSION 0.1.0 LANGUAGES CXX)

set(GB_SRC

    cartridge.hpp
    cartridge.cpp

)

add_library(libgameboy STATIC ${GB_SRC})