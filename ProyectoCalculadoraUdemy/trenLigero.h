#include <stdio.h>

float trenLigero(float *ptrSueldo, int *ptrAcuTren){

    int viaje;
    
    if (*ptrSueldo<3)
    {
        printf("No puedes usar el tren ligero con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 3;
        *ptrAcuTren += 1;
        printf("Ya se desconto tu viaje\nQuieres descontar otro?\n\n");
        printf("1)Si\n2)No\n");
        scanf("%d", &viaje);
        switch (viaje)
        {
        case 1:
            if (*ptrSueldo<3)
            {
                printf("No puedes usar el tren ligero con tu sueldo actual\n");
            }else{
                *ptrSueldo -= 3;
                *ptrAcuTren += 1;
                printf("Se desconto otro viaje de tren ligero\n");
            }
            break;
        case 2:
            printf("Gracias por viajar en el tren ligero\n");
            break;
        default:
            printf("NO ES UN CASO VALIDO\n");
            break;
        }
    }
    return *ptrSueldo, *ptrAcuTren;
}