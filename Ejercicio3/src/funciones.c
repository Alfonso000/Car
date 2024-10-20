#include "../include/funciones.h"

void* buscarnumero(void* arg){
     struct {
        struct datos* d;
        int incremento;
    } *args = arg;  // Obtener los argumentos
    struct datos* d = args->d;
    int fin = args->incremento;
    int inicio = fin-5;
   

    int cuenta_local = 0;
    for (int i = inicio; i < fin; i++)
    {
        if(d->vector[i] == d->buscar){
            cuenta_local++;
        }
    }
    // Actualizar el contador global de manera segura usando el mutex
    pthread_mutex_lock(&d->mutex);
    d->n += cuenta_local;
    pthread_mutex_unlock(&d->mutex);
}


// void* sumarfila(void* arg){
//     struct { // se utiliza esto para poder acceder a diferentes filas
//         struct datos* d;
//         int fila;
//     } *args = arg;  // Obtener los argumentos
//     struct datos* d = args->d;
//     int fila = args->fila;

//         // Sumar la fila indicada de matriz1 y matriz2 y almacenar el resultado en matriz3
//     printf("Sumando fila %d:\n", fila);
//     for (int j = 0; j < d->columnas; j++) {
//         d->matriz3[fila][j] = d->matriz1[fila][j] + d->matriz2[fila][j];
//         // Imprimir el resultado de la suma
//         printf("%d  ", d->matriz3[fila][j]);
//     }
//     printf("\n");
    
// }


// void introducir_matriz(int filas, int columnas, int matriz[filas][columnas]){
//     printf("Introduce los valores para una matriz de 3x3:\n");
//     for (int i = 0; i < filas; i++) {
//         for (int j = 0; j < columnas; j++) {
//             printf("Elemento [%d][%d]: ", i, j);
//             scanf("%d", &matriz[i][j]);  // Leer los valores de la matriz
//         }
//     }
// }



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

