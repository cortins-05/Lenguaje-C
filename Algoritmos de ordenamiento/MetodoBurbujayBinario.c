#include <stdio.h>

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int i, j, aux, dato, inf, sup, mitad;
    int band = 0;  // Usamos un entero en vez de 'F' y 'V'

    // M�todo burbuja optimizado
    for (i = 0; i < 9; i++) {  // Solo hasta 9 iteraciones
        for (j = 0; j < 9 - i; j++) {  // Evita acceder fuera del array
            if (a[j] > a[j + 1]) {  
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    // Mostrar el array ordenado
    printf("Array ordenado: ");
    for (i = 0; i < 10; i++) {
        printf("%i ", a[i]);
    }
    printf("\n");

    // Entrada del usuario
    printf("Escribe un numero:\n");
    scanf("%i", &dato);

    // B�squeda binaria
    inf = 0;
    sup = 9;  // �ltimo �ndice del array

    while (inf <= sup) {
        mitad = (inf + sup) / 2;
        if (a[mitad] == dato) {
            band = 1;  // Se marca como encontrado
            break;
        }
        if (a[mitad] > dato) {
            sup = mitad - 1;
        } else {
            inf = mitad + 1;
        }
    }

    // Mostrar el resultado
    if (band == 0) {
        printf("El n�mero no existe.\n");
    } else {
        printf("El n�mero existe en la posici�n %i\n", mitad);
    }

    return 0;
}

