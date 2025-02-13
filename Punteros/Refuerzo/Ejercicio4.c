#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void MulMatriz(int *arr) {
    int i, j;
    for(i = 0; i < 5; i++) {  // Iteramos sobre las filas (5 filas)
        for(j = 0; j < 4; j++) {  // Iteramos sobre las columnas (4 columnas)
            // Acceder al valor de la fila i, columna j usando punteros
            int *p = arr + i * 4 + j;  // Esto nos da la dirección de la posición [i][j]

            // Si la fila es par (i == 0, 2, 4), multiplicamos por 2
            if(i % 2 == 0) {
                *p *= 2;
            } else {  // Si la fila es impar (i == 1, 3), multiplicamos por 3
                *p *= 3;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int arr[5][4], i, j;

    // Llenamos la matriz con datos aleatorios
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            arr[i][j] = rand() % (20 + 1);  // Valores aleatorios entre 0 y 20
        }
    }

    // Mostrar la matriz original
    printf("Matriz Original:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Pasamos la matriz como puntero
    MulMatriz((int *)arr);  // Convertimos la matriz de 2D a un puntero unidimensional

    // Mostrar la matriz modificada
    printf("\nMatriz Modificada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

