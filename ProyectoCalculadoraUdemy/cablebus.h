#include <stdio.h>

float cablebus(float *ptrSueldo, int *ptrAcuCable){

    int viaje;
    
    if (*ptrSueldo<5)
    {
        printf("No puedes usar el cablebus con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 5;
        *ptrAcuCable += 1;
        printf("Ya se desconto tu viaje\nQuieres descontar otro?\n\n");
        printf("1)Si\n2)No\n");
        scanf("%d", &viaje);
        switch (viaje)
        {
        case 1:
            if (*ptrSueldo<5)
            {
                printf("No puedes usar el cablebus con tu sueldo actual\n");
            }else{
                *ptrSueldo -= 5;
                *ptrAcuCable += 1;
                printf("Se desconto otro viaje de CableBus\n");
            }
            break;
        case 2:
            printf("Gracias por viajar en el CableBus\n");
            break;
        default:
            printf("NO ES UN CASO VALIDO\n");
            break;
        }
    }
    return *ptrSueldo, *ptrAcuCable;
}