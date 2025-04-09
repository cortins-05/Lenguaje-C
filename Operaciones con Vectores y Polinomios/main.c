#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"

int main() {
    int opcion;
    char input[10];

    do{
    printf("Programa que realiza  operaciones con vectores y polinomios:\n");
    printf("Selecciona el tipo de operacion que quieres realizar\n");
    printf("0)Salir\n1)Vectores\n2)Polinomios\n");
    if (fgets(input, 10, stdin) == NULL) {
        printf("Error no se pudo leer la entrada.\n");
        exit(1);
    }
    opcion = (int)strtol(input, NULL, 10);
    switch (opcion) {
        case 0:
            printf("Seleccionaste salir\n");
            break;
        case 1:
            printf("Vectores\n");
            vectors();
            break;
        case 2:
            printf("Polinomios\n");
            break;
        default:
            printf("Opcion no valida");
            break;
    }
    }while (opcion != 0);

    return 0;
}