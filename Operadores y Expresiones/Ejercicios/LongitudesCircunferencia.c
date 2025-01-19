/* Hacer un Programa que calcule
longitudes de Circunferencia. */

#include <stdio.h>
#define PI 3.1416

int main(){
    float radio,longitud;
    
    printf("Introduce el radio de la circunferencia para saber su longitud:\n");
    scanf("%f", &radio);
    
    longitud = radio*2*PI;
    
    printf("Longitud de una circunferencia de radio: %.2f es de: %.2f", radio, longitud);
    
    return 0;
}
