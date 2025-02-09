#include <stdio.h>

int main(){
	int filas, columnas, i, j;
	printf("Introduce el numero de filas y de columnas:\n");
	scanf("%i %i", &filas, &columnas);
	int matriz[filas][columnas];
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Introduce el dato para la fila %i y la columna %i\n", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
