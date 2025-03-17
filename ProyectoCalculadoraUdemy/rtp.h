#include <stdio.h>

float rtp(float *ptrSueldo, int *ptrAcuRTP){

    int viaje;
    
    if (*ptrSueldo<3)
    {
        printf("No puedes usar el RTP con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 3;
        *ptrAcuRTP += 1;
        printf("Ya se desconto tu viaje\nQuieres descontar otro?\n\n");
        printf("1)Si\n2)No\n");
        scanf("%d", &viaje);
        switch (viaje)
        {
        case 1:
            if (*ptrSueldo<3)
            {
                printf("No puedes usar el RTP con tu sueldo actual\n");
            }else{
                *ptrSueldo -= 3;
                *ptrAcuRTP += 1;
                printf("Se desconto otro viaje de RTP\n");
            }
            break;
        case 2:
            printf("Gracias por viajar en el RTP\n");
            break;
        default:
            printf("NO ES UN CASO VALIDO\n");
            break;
        }
    }
    return *ptrSueldo, *ptrAcuRTP;
}