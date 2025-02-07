#include <stdio.h>

int main() {
    int matriz_multidimensional[3][3][3][2][2];

    // Llenamos la matriz con valores de ejemplo
    int valor = 1, j,i,k,l,m;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 2; l++) {
                    for (m = 0; m < 2; m++) {
                        matriz_multidimensional[i][j][k][l][m] = valor++;
                    }
                }
            }
        }
    }

    // Imprimimos la matriz con una estructura clara
    for (i = 0; i < 3; i++) {
        printf("Bloque %d:\n", i);
        for ( j = 0; j < 3; j++) {
            printf("  Matriz %d:\n", j);
            for ( k = 0; k < 3; k++) {
                printf("    ");
                for ( l = 0; l < 2; l++) {
                    printf("(");
                    for ( m = 0; m < 2; m++) {
                        printf("%d", matriz_multidimensional[i][j][k][l][m]);
                        if (m < 1) printf(", ");
                    }
                    printf(")  ");
                }
                printf("\n");
            }
        }
    }

    return 0;
}

