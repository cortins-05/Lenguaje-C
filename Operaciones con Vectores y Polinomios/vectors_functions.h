#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void scalarMultiplication(float *resultantVector, float *vector1, float *vector2,int quantity){
    char input[10];
    float scalar;
    printf("Dame el valor del scalar:\n");
    if(fgets(input,10,stdin)==NULL){
        printf("Error al leer la entrada\n");
        exit(1);
    }
    scalar=strtof(input,NULL);
    int i;
    for(i=0;i<quantity;i++){
        resultantVector[i]=vector1[i]*scalar;
    }
    printf("El valor del vector 1 multiplicado por el escalar es:\n");
    for(i=0;i<quantity;i++){
        printf("%.2f ",resultantVector[i]);
    }
    printf("\n");
    for(i=0;i<quantity;i++){
        resultantVector[i]=vector2[i]*scalar;
    }
    printf("El valor del vector 2 multiplicado por el escalar es:\n");
    for(i=0;i<quantity;i++){
        printf("%.2f ",resultantVector[i]);
    }
    printf("\n");
}

float sumVectorComponents(float *vector1, int quantity){
    float sum = 0;
    int i;
    for(i=0;i<quantity;i++){
        sum += vector1[i];
    }
    return sum;
}

void normOfVector(float *vector1, float *vector2, int quantity){
    float *newVector1 = (float *)calloc(quantity,sizeof(float));
    float *newVector2 = (float *)calloc(quantity,sizeof(float));
    float sumVector1;
    float sumVector2;
    int i;
    for(i=0;i<quantity;i++){
        newVector1[i]=vector1[i]*vector1[i];
        newVector2[i]=vector2[i]*vector2[i];
    }
    sumVector1 = sumVectorComponents(newVector1,quantity);
    sumVector2 = sumVectorComponents(newVector2,quantity);
    printf("La norma del vector 1 es: %.2f\n", sqrt(sumVector1));
    printf("La norma del vector 2 es: %.2f\n", sqrt(sumVector2));
}

float dotProduct(float *vector1, float *vector2, int quantity){
    float sum = 0;
    int i;
    for(i=0;i<quantity;i++){
        sum += vector1[i]*vector2[i];
    }
    return sum;
}

float normUniqueVector(float *vector1, int quantity){
    float *newVector = (float *)calloc(quantity,sizeof(float));
    float sumVector;
    int i;
    for(i=0;i<quantity;i++){
        newVector[i]=vector1[i]*vector1[i];
    }
    sumVector = sumVectorComponents(newVector,quantity);
    return sqrtf(sumVector);
}

void angleBetweenVectors(float *vector1, float *vector2, int quantity){
    float sum = dotProduct(vector1,vector2,quantity);
    float norm1 = normUniqueVector(vector1,quantity);
    float norm2 = normUniqueVector(vector2,quantity);
    float degree = (sum/(norm1*norm2));
    float result=acosf(degree);
    double resultDegrees = result*180/3.1415;
    printf("El grado entre los vectores es %.2f radianes\n", result);
    printf("El resultado eentre los vectores es %.2f grados\n", resultDegrees);
}