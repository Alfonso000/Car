#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

    struct datos
    {
        int numero; 
        char string1[1000]; 
        char string2 [1000];
    };

void* introducir_datos(void* arg);
// void* imprimir_datos(void* arg);
void* imprimir_string1(void* arg);
void* imprimir_string2(void* arg);

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

void* introducir_datos(void* arg){
    struct datos* d = (struct datos*)arg; // Convertir arg a un puntero a datos

    printf("Input a number:");
    scanf("%d", &d->numero);

 // Limpiar el buffer de entrada
    while (getchar() != '\n'); // Limpiar el buffer después de scanf

    printf("Input first string:");
     
      fgets(d->string1, 1000, stdin);  // Leemos la primera cadena

     printf("Input second string:");
   
      fgets(d->string2, 1000, stdin);  // Leemos la primera cadena


     printf("He pasado por aquí: \n");

}

// void* imprimir_datos(void* arg){
//     struct datos* d = (struct datos*)arg; // Convertir arg a un puntero a datos
//     int n = d->numero;
    
//     // Identificar qué string imprimir según el ID del hilo
//     pthread_t hilo_id = pthread_self(); // Obtener el ID del hilo
//     char* string_to_print = (hilo_id % 2 == 0) ? d->string1 : d->string2; // Alternar entre string1 y string2


//     for (int i = 0; i < n; i++) {

//         printf("thread (%ld): %d %s\n", pthread_self(), i + 1, string_to_print);
    
    
//     // printf("\nThread ID: %ld, Iteration: %d\n", pthread_self(), i + 1);
//     // printf("La primera cadena es: %s\n", d->string1);
//     // printf("La segunda cadena es: %s\n", d->string2);
//     }

//     //    for (int i = 0; i < n; i++) {
//     //     printf("thread (%ld): %d %s\n", pthread_self(), i + 1, d->string2);
//     // }

// }

void* imprimir_string1(void* arg) {
    struct datos* d = (struct datos*)arg; // Convertir arg a un puntero a datos
    int n = d->numero; // Obtener el número de repeticiones

    // Imprimir el ID del hilo y string1
    for (int i = 0; i < n; i++) {
        printf("thread (%ld): %d %s\n", pthread_self(), i + 1, d->string1);
    }

    return NULL; // Es buena práctica retornar NULL al final de la función de hilo
}

void* imprimir_string2(void* arg) {
    struct datos* d = (struct datos*)arg; // Convertir arg a un puntero a datos
    int n = d->numero; // Obtener el número de repeticiones

    // Imprimir el ID del hilo y string2
    for (int i = 0; i < n; i++) {
        printf("thread (%ld): %d %s\n", pthread_self(), i + 1, d->string2);
    }

    return NULL; // Es buena práctica retornar NULL al final de la función de hilo
}