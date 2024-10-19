#include "include/funciones.h"


int main() {

    pthread_t hilo1, hilo2;
    // struct datos d;

    int filas = 3;
    int columnas = 3;
    int matriz[filas][columnas];  // Declarar una matriz de 3x3
    // while (1)
    // {
    // pthread_create(&hilo1, NULL, introducir_datos, (void*)&d);
    // pthread_join(hilo1, NULL); 

    // pthread_create(&hilo1, NULL, imprimir_string1, (void*)&d);
    // pthread_create(&hilo2, NULL, imprimir_string2, (void*)&d);
    
    // pthread_join(hilo1, NULL);
    // pthread_join(hilo2, NULL);
    // }


    introducir_matriz(filas, columnas, matriz);
    // // Imprimir la matriz
    printf("\nLa matriz es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  // Para pasar a la siguiente fila
    }   


    return 0;
}

void introducir_matriz(int filas, int columnas, int matriz[filas][columnas]){
     printf("Introduce los valores para una matriz de 3x3:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", matriz[i][j]);  // Leer los valores de la matriz
        }
    }
}