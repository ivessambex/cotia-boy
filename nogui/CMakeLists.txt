cmake_minimum_required(VERSION 3.18)

project(cotia-boy VERSION 0.1.0 LANGUAGES CXX)

set(COTIA_SRC

    main.cpp
)

add_executable(cotia-boy ${COTIA_SRC})

target_include_directories(cotia-boy PRIVATE "${COTIA_DIR}")

target_link_libraries(

    cotia-boy

    libgameboy
)