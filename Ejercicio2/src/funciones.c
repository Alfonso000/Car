#include "../include/funciones.h"

// void* introducir_datos(void* arg){
//     struct datos* d = (struct datos*)arg; // Convertir arg a un puntero a datos

//     printf("Input a number:");
//     scanf("%d", &d->numero);

//  // Limpiar el buffer de entrada
//     while (getchar() != '\n'); // Limpiar el buffer después de scanf

//     printf("Input first string:");
//     fgets(d->string1, 1000, stdin);  // Leemos la primera cadena

//     printf("Input second string:");
//     fgets(d->string2, 1000, stdin);  // Leemos la segunda cadena

// }


// void* imprimir_string1(void* arg) {
//     struct datos* d = (struct datos*)arg; // Convertir arg a un puntero a datos
//     int n = d->numero; // Obtener el número de repeticiones

//     // Imprimir el ID del hilo y string1
//     for (int i = 0; i < n; i++) {
//         printf("thread (%ld): %d %s\n", pthread_self(), i + 1, d->string1);
//     }
// }

