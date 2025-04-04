#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char cadena[50], *p_cadena;

    gets(cadena);

    p_cadena = calloc(strlen(cadena),sizeof(char));

    strcpy(p_cadena,cadena);
    printf("%s", p_cadena);

    return 0;
}