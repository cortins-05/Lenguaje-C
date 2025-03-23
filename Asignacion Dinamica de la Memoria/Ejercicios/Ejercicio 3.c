#include <stdio.h>
#include <stdlib.h>

int cantidadDatos(){

    int datos;
    printf("Introduce la cantidad de datos para el arreglo:\n");
    scanf("%i", &datos);

    return datos;
}

void llenarArreglo(int *arreglo, int tamano){
    int i;
    for(i=0;i<tamano;i++){
        printf("Introduce el dato para la posicion %i del arreglo:  ", i+1);
        scanf("%i", arreglo+i);
    }
}

void imprimirArreglo(int *arreglo, int tamano){
    int i;
    for(i=0;i<tamano;i++){
        printf("%i, ", arreglo[i]);
    }
}

int main(){

    int datos = cantidadDatos();
    int *arreglo;

    arreglo = calloc(datos, sizeof(int));

    llenarArreglo(arreglo,datos);

    imprimirArreglo(arreglo,datos);

    free(arreglo);
    
    return 0;
}