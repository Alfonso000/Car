// #include <stdio.h>

// // Declaración de la función que modifica una matriz
// void modificarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
//     for (int i = 0; i < filas; i++) {
//         for (int j = 0; j < columnas; j++) {
//             matriz[i][j] += 1; // Incrementa cada elemento en 1
//         }
//     }
// }

// int main() {
//     int matriz[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     printf("Matriz antes de modificar:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");
//     }

//     // Llamada a la función pasando la matriz por referencia
//     modificarMatriz(2, 3, matriz);

//     printf("Matriz después de modificar:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", &matriz[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



#include <stdio.h>

// Declaración de la función que introduce valores en una matriz
void introducir_matriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Introduce el valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);  // Usar & para pasar la dirección de la variable
        }
    }
}

int main() {
    int matriz[2][3];

    // Llamada a la función para introducir valores en la matriz
    introducir_matriz(2, 3, matriz);

    printf("Matriz después de introducir valores:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}