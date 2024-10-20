#include "../include/funciones.h"


void* sumarfila(void* arg){
    struct {
        struct datos* d;
        int fila;
    } *args = arg;  // Obtener los argumentos
    struct datos* d = args->d;
    int fila = args->fila;

    // Sumar la fila indicada de matriz1 y matriz2 y almacenar el resultado en matriz3
    // printf("Sumando fila %d:\n", fila);
    for (int j = 0; j < d->columnas; j++) {
        d->matriz3[fila][j] = d->matriz1[fila][j] + d->matriz2[fila][j];
        // Imprimir el resultado de la suma
        // printf("%d  ", d->matriz3[fila][j]);
    }
    printf("\n");
    
}


void introducir_matriz(int filas, int columnas, int matriz[filas][columnas]){
    printf("Introduce los valores para una matriz de 3x3:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);  // Leer los valores de la matriz
        }
    }
}


