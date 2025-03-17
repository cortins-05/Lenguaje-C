#include <stdio.h>

float ecobici(float *ptrSueldo, int *ptrAcuEco){

    int viaje;
    
    if (*ptrSueldo<13)
    {
        printf("No puedes usar la ecobici con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 13;
        *ptrAcuEco += 1;
        printf("Ya se desconto tu viaje\nQuieres descontar otro?\n\n");
        printf("1)Si\n2)No\n");
        scanf("%d", &viaje);
        switch (viaje)
        {
        case 1:
            if (*ptrSueldo<13)
            {
                printf("No puedes usar la EcoBici con tu sueldo actual\n");
            }else{
                *ptrSueldo -= 13;
                *ptrAcuEco += 1;
                printf("Se desconto otro viaje de EcoBici\n");
            }
            break;
        case 2:
            printf("Gracias por viajar en la EcoBici\n");
            break;
        default:
            printf("NO ES UN CASO VALIDO\n");
            break;
        }
    }
    return *ptrSueldo, *ptrAcuEco;
}
