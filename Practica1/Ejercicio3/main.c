#include "include/funciones.h"

int main() {

    pthread_t hilo1, hilo2, hilo3, hilo4;
    struct datos d;

    d.buscar = 6;
    d.n = 0;
    
      // Inicializar la semilla para la generación de números aleatorios
    srand(time(0));

    // Generar números aleatorios entre 0 y 9 y almacenarlos en el vector
    for (int i = 0; i < 20; i++) {
        d.vector[i] = rand() % 10;  // Generar un número entre 0 y 9
    }

    // Imprimir el vector generado
    printf("Vector aleatorio:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", d.vector[i]);
    }
    printf("\n");

 
    pthread_create(&hilo1, NULL, buscarnumero, (void*)&(struct {struct datos* d; int incremento;}){&d, 5});
    pthread_create(&hilo2, NULL, buscarnumero, (void*)&(struct {struct datos* d; int incremento;}){&d, 10});
    pthread_create(&hilo3, NULL, buscarnumero, (void*)&(struct {struct datos* d; int incremento;}){&d, 15});
    pthread_create(&hilo4, NULL, buscarnumero, (void*)&(struct {struct datos* d; int incremento;}){&d, 20});

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    pthread_join(hilo3, NULL);
    pthread_join(hilo4, NULL);


      // Imprimir el resultado final
    printf("El número %d se repite %d veces.\n", d.buscar, d.n);

    
    pthread_mutex_destroy(&d.mutex);

    return 0;
}










