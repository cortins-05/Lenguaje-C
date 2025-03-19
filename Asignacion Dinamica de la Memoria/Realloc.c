#include <stdio.h>

int main(){

    int *vector, *vectorConvertido;
    int i;
    vector = malloc(3*sizeof(int));

    //Primer vector
    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    for(i=0;i<3;i++){
        printf("%i ", vector[i]);
    }
    //Realloc
    vectorConvertido = realloc(vector, 5*sizeof(int));
    //Ampliando el arreglo a 5

    //Agregamos los demas valores
    vector[3] = 4;
    vector[4] = 5;

    printf("\n\n");

    for(i=0;i<5;i++){
        printf("%i ", vectorConvertido[i]);
    }

    free(vectorConvertido);
    
    return 0;
}