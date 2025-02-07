#include <stdio.h>

int main(){
	int filas,columnas,x ,i;
	printf("Introduce el numero de filas y de columnas:\n");
	scanf("%i %i", &filas, &columnas);
	int matriz[filas][columnas];
	printf("Ahora introduce los datos...\n");
	for(x=0;x<filas;x++){
		for(i=0;i<columnas;i++){
			printf("Valor:");
			scanf("%i", &matriz[x][i]);
		}
	}
	for(x=0;x<filas;x++){
		for(i=0;i<columnas;i++){
			printf("%i", matriz[x][i]);
		}
		printf("\n");
	}
	
	return 0;
}
