//Entradas y Salidas en C

#include <stdio.h>

int main(){
	
	int q;
	float w;
	char e[40];
	
	printf("Escribe el valor de la variable (int)\n");
	scanf("%i", &q);
	printf("\nEl valor que escribiste es %i\n", q);
	
	printf("Escribe el valor de la variable (float)\n");
	scanf("%f", &w);
	printf("\nEl valor que escribiste es %.3f\n", w);
	
	return 0;
	
}
