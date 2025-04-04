#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[20], *apuntador_nombre;
    printf("Introduce tu nombre:\n");
    fgets(nombre, 20, stdin);
    strtok(nombre, "\n");

    apuntador_nombre = malloc(strlen(nombre)*sizeof(char));

    strcpy(apuntador_nombre, nombre);

    printf("Tu nombre es: %s", apuntador_nombre);

    free(apuntador_nombre);

    return 0;
}