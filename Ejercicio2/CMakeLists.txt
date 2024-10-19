cmake_minimum_required(VERSION 3.12)
project(practica1)
# Configuración del estándar de C++
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)


# Incluir el directorio que contiene Ejercicio1.h
# include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCE prueba.c )

add_executable(casa ${SOURCE})


# Añadir biblioteca de hilos
find_package(Threads REQUIRED)
target_link_libraries(casa PRIVATE Threads::Threads) 