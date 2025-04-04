#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char *p_nombre, *p_nombreCompleto;

    p_nombre = malloc(10*sizeof(char));

    strcpy(p_nombre,"Jorge");
    printf("Nombre: %s\n", p_nombre);

    p_nombreCompleto = realloc(p_nombre, 30*sizeof(char));
    strcat(p_nombreCompleto," Chochy Youtube");

    printf("Nombre Completo: %s", p_nombreCompleto);

    return 0;
}