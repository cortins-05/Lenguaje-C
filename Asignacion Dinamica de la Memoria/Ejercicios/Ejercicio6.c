#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Automovil
{
    char Marca[30];
    char Modelo[30];
    char Color[30];
    char TipoDeAuto[30];
}Automovil;

void llenarAutomovil(Automovil *carros, int cantidadAutos){
    //Llenamos los datos de las estructuras
    int i;
    for(i=0;i<cantidadAutos;i++){
        printf("Escribe la marca del Auto [%d]\n",i+1);
        fflush(stdin);
        gets(carros[i].Marca);
        printf("Escribe el modelo del Auto [%d]\n",i+1);
        fflush(stdin);
        gets(carros[i].Modelo);
        printf("Escribe el color del Auto [%d]\n",i+1);
        fflush(stdin);
        gets(carros[i].Color);
        printf("Escribe el tipo del Auto [%d]\n",i+1);
        fflush(stdin);
        gets(carros[i].TipoDeAuto);
        printf("\n\n");
    }
}

void ImprimirDatos(Automovil *carros, int cantidadAutos){
    int i;
    for(i=0;i<cantidadAutos;i++){
        printf("Marca del Auto: [%d]\n%s\n",i+1,carros[i].Marca);
        printf("Modelo del Auto: [%d]\n%s\n",i+1,carros[i].Modelo);
        printf("Color del Auto: [%d]\n%s\n",i+1,carros[i].Color);
        printf("Tipo del Auto: [%d]\n%s\n",i+1,carros[i].TipoDeAuto);
        printf("\n\n");
    }
}

int main(){

    int cantidadAutos;

    printf("Cuantos autos quieres crear:\n");
    fflush(stdin);
    scanf("%d", &cantidadAutos);

    Automovil *carrosCreados = (Automovil *)calloc(cantidadAutos, sizeof(Automovil));

    llenarAutomovil(carrosCreados,cantidadAutos);

    ImprimirDatos(carrosCreados,cantidadAutos);

    free(carrosCreados);
    return 0;
}
