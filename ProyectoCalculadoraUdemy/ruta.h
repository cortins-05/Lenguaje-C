#include <stdio.h>

float ruta(float *ptrSueldo, int *ptrAcuRuta){

    int viaje;
    
    if (*ptrSueldo<5.5)
    {
        printf("No puedes usar la ruta con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 5.5;
        *ptrAcuRuta += 1;
        printf("Ya se desconto tu viaje\nQuieres descontar otro?\n\n");
        printf("1)Si\n2)No\n");
        scanf("%d", &viaje);
        switch (viaje)
        {
        case 1:
            if (*ptrSueldo<5.5)
            {
                printf("No puedes usar la ruta con tu sueldo actual\n");
            }else{
                *ptrSueldo -= 5.5;
                *ptrAcuRuta += 1;
                printf("Se desconto otro viaje de ruta\n");
            }
            break;
        case 2:
            printf("Gracias por viajar en la ruta\n");
            break;
        default:
            printf("NO ES UN CASO VALIDO\n");
            break;
        }
    }
    return *ptrSueldo, *ptrAcuRuta;
}