cmake_minimum_required(VERSION 3.10)
project(JardinProyectoProgra2)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(JardinProyectoProgra2
        main.cpp
        Figura.cpp
        Arbol.cpp
        Flor.cpp
        Jardin.cpp
        CImg.h
)
target_link_libraries(JardinProyectoProgra2 gdi32)
