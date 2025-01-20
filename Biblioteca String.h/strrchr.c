//strrchr(Cadena, Caracter)
//Regresa el restante de la cadena a partir del primer caracter indicado

#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char Abecedario[27]; // Inicializamos el array con un terminador nulo
    for (i = 'a'; i <= 'z'; i++) {
        char temp[2] = {i, '\0'}; // Convertir el carácter en una cadena terminada en '\0'
        strcat(Abecedario, temp); // Concatenar el carácter al array
    }
    char Corte;
    printf("\nLetra donde se cortará el abecedario: ");
    fflush(stdin);
    scanf("%c", &Corte);
    printf("\n%s", strrchr(Abecedario, Corte));

    return 0;
}

