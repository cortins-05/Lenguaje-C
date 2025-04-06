#include <stdio.h>
#include <stdlib.h>
void fillVectors(float *vector1, float *vector2, int quantity){
    char input[10];
    int i;
    for(i=0;i<quantity;i++){
        printf("Ingresa el valor del vector 1 en el indice [%d]\n", i+1);
        if(fgets(input,10,stdin)==NULL){
            printf("No se pudo leer la entrada\n");
            exit(1);
        }
        vector1[i]=strtof(input,NULL);
        vector2[i]=strtof(input,NULL);
    }
}

void printVectors(float *vector1, float *vector2, int quantity){
    int i;
    printf("\nVector 1:\n");
    for(i=0;i<quantity;i++){
        printf("%.2f ", vector1[i]);
    }
    printf("\n");
    printf("\nVector 2:\n");
    for(i=0;i<quantity;i++){
        printf("%.2f ", vector2[i]);
    }
    printf("\n");
}

void sumVectors(float *resultantVector, float *vector1, float *vector2,int quantity){
    int i;
    for(i=0;i<quantity;i++){
        resultantVector[i]=vector1[i]+vector2[i];
    }
    printf("\nEl resultado de tu vector es:\n");
    for(i=0;i<quantity;i++){
        printf("%.2f ", resultantVector[i]);
    }
    printf("\n");
}

void substractVectors(float *resultantVector, float *vector1, float *vector2,int quantity){
    int i;
    for(i=0;i<quantity;i++){
        resultantVector[i]=vector1[i]-vector2[i];
    }
    printf("\nEl resultado de tu vector es:\n");
    for(i=0;i<quantity;i++){
        printf("%.2f ", resultantVector[i]);
    }
    printf("\n");
}