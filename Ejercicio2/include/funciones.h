#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// struct datos
//     {
//         int numero; 
//         char string1[1000]; 
//         char string2 [1000];
//     };


// void* introducir_datos(void* arg);
// void* imprimir_string1(void* arg);
// void* imprimir_string2(void* arg);
//*(matriz + i * columnas + j)

void introducir_matriz(int filas, int columnas, int matriz[filas][columnas]);