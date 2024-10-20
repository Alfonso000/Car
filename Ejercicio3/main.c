#include "include/funciones.h"

int main() {

    pthread_t hilo1, hilo2, hilo3;
    struct datos d,t,m;

    d.filas = 3;
    d.columnas = 3;

    introducir_matriz(d.filas, d.columnas, d.matriz1);
    introducir_matriz(d.filas, d.columnas, d.matriz2);

    int filas[3] = {0, 1, 2};  // Índices de las filas para seleccionar que fila se lee

    pthread_create(&hilo1, NULL, sumarfila, (void*)&(struct {struct datos* d; int fila;}){&d, filas[0]});
    pthread_create(&hilo2, NULL, sumarfila, (void*)&(struct {struct datos* d; int fila;}){&d, filas[1]});
    pthread_create(&hilo3, NULL, sumarfila, (void*)&(struct {struct datos* d; int fila;}){&d, filas[2]});

    
    
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    pthread_join(hilo3, NULL);


    // Imprimir la matriz
    printf("\nLa matriz es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", d.matriz3[i][j]);
        }
        printf("\n");  // Para pasar a la siguiente fila
    }   


    return 0;
}






