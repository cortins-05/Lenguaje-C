#include "vectors_functions.h"
void vectors(){
    int quantity, option, optionWhile=1;
    printf("Programa que realiza operaciones con vectores de n dimensiones\nDime de cuantas dimensiones seran los vectores\n");
    char input[10];
    if(fgets(input,10,stdin)==NULL){
        printf("Error no se pudo leer la entrada\n");
        exit(1);
    }
    quantity = (int)strtoll(input,NULL,10);
    if(quantity<=0){
        printf("La cantidad debe ser mayor que 0\n");
        exit(1);
    }
    
    float *vector1=(float *)calloc(quantity,sizeof(float));
    float *vector2=(float *)calloc(quantity,sizeof(float));
    float *resultVector = (float *)calloc(quantity, sizeof(float));

    fillVectors(vector1,vector2,quantity);

    do{
        printf("Que operacion te gustaria realizar?\n");
        printf("0)Salir\n1)Suma\n2)Resta\n3)Producto por un escalar\n4)Norma\n5)Angulo entre dos vectores\n");
        if(fgets(input,10,stdin)==NULL){
            printf("Error no se pudo leer la entrada\n");
            exit(1);
        }
        option=(int)strtol(input,NULL,10);
        if(option==0){
            optionWhile=option;
        }else if(option<0||option>5){
            printf("Numero fuera de rango\n");
            exit(1);
        }
        switch (option)
        {
        case 0:
            printf("Gracias por usar el programa\n");
            break;
        case 1:
            printVectors(vector1,vector2,quantity);
            printf("Seleccionaste suma\n");
            sumVectors(resultVector,vector1,vector2,quantity);
            break;
        case 2:
            printVectors(vector1,vector2,quantity);
            printf("Seleccionaste resta\n");
            substractVectors(resultVector,vector1,vector2,quantity);
            break;
        case 3:
            printVectors(vector1,vector2,quantity);
            printf("Seleccionaste producto por un escalar\n");
            scalarMultiplication(resultVector,vector1,vector2,quantity);
            break;
        case 4:
            printVectors(vector1,vector2,quantity);
            printf("Seleccionaste Norma\n");
            normOfVector(resultVector,vector1,vector2,quantity);
            break;
        case 5:
            printVectors(vector1,vector2,quantity);
            printf("Seleccionaste Angulo entre 2 vectores\n");
            angleBetweenVectors(resultVector,vector1,vector2,quantity);
            break;
        default:
            printf("Opcion no disponible\n");
            break;
        }
    }while(option!=0);
}