/*Hacer un puntero array de tipo float, pedir el usuario el numero de 
elementos,luego reservar memoria dinamica con calloc, luego llenar 
el array, imprimir todos los elementos, y por ultimo liberar el espacio 
de memoria dinamica utilizado.*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    srand(time(NULL));

    float *p;
    int numeroE, i;
    
    printf("Digite el numero de elementos:\n");
    scanf("%i", &numeroE);

    p = calloc(numeroE, sizeof(float));

    for(i=0;i<numeroE;i++){
        p[i] = ((float)rand() / RAND_MAX) * 100;
    }
    for(i=0;i<numeroE;i++){
        printf("Numero %i:  %.2f\n", i+1, p[i]);
    }
    printf("%.2f\n",*p);
    free(p);
    printf("%.2f",*p);
    return 0;
}