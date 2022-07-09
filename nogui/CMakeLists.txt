cmake_minimum_required(VERSION 3.18)

project(cotia-boy VERSION 0.1.0 LANGUAGES CXX)

set(COTIA_SRC

    window.hpp
    window.cpp

    main.cpp
)

add_executable(cotia-boy ${COTIA_SRC})

target_include_directories(cotia-boy PRIVATE "${COTIA_DIR}" "${COTIA_DIR}/vendor/SDL2/include")

target_link_libraries(

    cotia-boy

    libgameboy
    "${COTIA_DIR}/vendor/SDL2/lib/x86/SDL2.lib"
    "${COTIA_DIR}/vendor/SDL2/lib/x86/SDL2main.lib"
)