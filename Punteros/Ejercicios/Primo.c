#include <stdio.h>

int main(){
    int numero, i, *puntero;
    puntero = &numero;
    int primo = 1; // Asumimos que el n�mero es primo al principio
    
    printf("Introduce un numero:\n");
    scanf("%d", puntero);
    
    if (*puntero <= 1) {
        primo = 0;  // Los n�meros menores o iguales a 1 no son primos
    } else {
        // Verificamos divisibilidad desde 2 hasta la ra�z cuadrada de *puntero
        for(i = 2; i * i <= *puntero; i++) {
            if (*puntero % i == 0) {
                primo = 0; // Si encuentra un divisor, no es primo
                break;
            }
        }
    }
    
    if(primo == 0) {
        printf("El numero %i no es primo\n", *puntero);
    } else {
        printf("El numero %i es primo\n", *puntero);
    }
    
    return 0;    
}

