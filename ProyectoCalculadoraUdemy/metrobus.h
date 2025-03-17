#include <stdio.h>

float metroBus(float *ptrSueldo, int *ptrAcuMBus){

    int viaje;
    
    if (*ptrSueldo<6)
    {
        printf("No puedes usar el MetroBus con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 6;
        *ptrAcuMBus += 1;
        printf("Ya se desconto tu viaje\nQuieres descontar otro?\n\n");
        printf("1)Si\n2)No\n");
        scanf("%d", &viaje);
        switch (viaje)
        {
        case 1:
            if (*ptrSueldo<6)
            {
                printf("No puedes usar el MetroBus con tu sueldo actual\n");
            }else{
                *ptrSueldo -= 6;
                *ptrAcuMBus += 1;
                printf("Se desconto otro viaje de MetroBus\n");
            }
            break;
        case 2:
            printf("Gracias por viajar en el MetroBus\n");
            break;
        default:
            printf("NO ES UN CASO VALIDO\n");
            break;
        }
    }
    return *ptrSueldo, *ptrAcuMBus;
}