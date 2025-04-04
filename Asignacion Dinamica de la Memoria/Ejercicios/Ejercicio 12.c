#include <stdio.h>
#include <stdlib.h>

int main(){

    int *arreglo, *arreglo_resultante, i;

    arreglo = (int*)malloc(5*sizeof(int));

    for(i=0;i<5;i++){
        printf("Introduce el numero %i\n", i+1);
        fflush(stdin);
        scanf("%i",&arreglo[i]);
        //scanf("%i", (arreglo+i));
    }

    arreglo_resultante = realloc(arreglo,10*sizeof(int));

    for(i=4;i<10;i++){
        printf("Introduce el numero %i\n", i+1);
        fflush(stdin);
        scanf("%i",&arreglo[i]);
        //scanf("%i", (arreglo+i));
    }

    for(i=0;i<10;i++){
        printf("%i ", arreglo[i]);
    }

    free(arreglo);
    free(arreglo_resultante);

    return 0;
}
