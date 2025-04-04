#include <stdio.h>
#include <stdlib.h>

int main(){

    int *apuntador_arreglo,numeros_array, i;

    printf("Ingrese el numero de elementos del arreglo: \n");
    scanf("%i", &numeros_array);

    apuntador_arreglo=malloc(numeros_array*sizeof(int));

    if(apuntador_arreglo==NULL){
        printf("Error en la asignacion de memoria\n");
        return -1;
    }else{
        srand(time(NULL));
        for(i=0;i<numeros_array;i++){
            apuntador_arreglo[i]=rand()%100;
            printf("%d\n", apuntador_arreglo[i]);
        }
    }

    return 0;
}