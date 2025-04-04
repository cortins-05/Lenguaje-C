#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char *apuntador_nombre, *nombre_completo, apellidos[30];

    apuntador_nombre = calloc(10, sizeof(char));
    
    printf("Introduce tu nombre: \n");
    fgets(apuntador_nombre, 10, stdin);
    strtok(apuntador_nombre,"\n");

    nombre_completo = realloc(apuntador_nombre,40*sizeof(char));

    printf("Introduce tus apellidos:\n");
    gets(apellidos);
    strcat(nombre_completo,apellidos);
    printf("Tu nombre: %s\n", apuntador_nombre);
    printf("Tu nombre completo: %s", nombre_completo);

    printf("\nTu nombre: %p\n", apuntador_nombre);
    printf("Tu nombre completo: %p", nombre_completo);

    free(apuntador_nombre);
    free(nombre_completo);

    return 0;
}