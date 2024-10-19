cmake_minimum_required(VERSION 3.10)
project(practica1 C)
# Configuración del estándar de C++
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

set(SOURCE src/Ejercicio1.c)

add_executable(casa ${SOURCE})


# Añadir biblioteca de hilos
find_package(Threads REQUIRED)
target_link_libraries(casa PRIVATE Threads::Threads) 