#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

struct datos
{
    int buscar;
    int vector[20];
    int n;
    pthread_mutex_t mutex; // Mutex para proteger el acceso a 'n'
};

void* buscarnumero(void* arg);