#include <stdio.h>

float gasolina(float *ptrSueldo, float *ptrGastoGas, int *ptrAcuGas){

    float gasto = 0;
    printf("Inserta el gasto en Gasolina\n");
    scanf("%f", &gasto);
    if (gasto>*ptrSueldo)
    {
        printf("\nNo puedes gastar esa cantidad en gasolina\n");
    }else{
        *ptrSueldo -= gasto;
        *ptrGastoGas += gasto;
        *ptrAcuGas += 1;
    }
    printf("Gracias por viajar en coche\n");
    return *ptrSueldo, *ptrAcuGas, *ptrGastoGas;
}