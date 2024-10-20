#include "include/Ejercicio1.h"

int main() {

    pthread_t hilo1, hilo2;
    struct datos d;

    while (1)
    {
    pthread_create(&hilo1, NULL, introducir_datos, (void*)&d);
    pthread_join(hilo1, NULL); 

    pthread_create(&hilo1, NULL, imprimir_string1, (void*)&d);
    pthread_create(&hilo2, NULL, imprimir_string2, (void*)&d);
    
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    }

    return 0;
}