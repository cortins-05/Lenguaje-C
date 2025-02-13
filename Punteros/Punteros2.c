#include <stdio.h>

int main(){
	int numero = 50;
	int *pNumero;
	printf("Dato:%i\n", numero);
	printf("Posicion:%p\n", &numero);
	
	pNumero = &numero;
	printf("Valor de la variable\n");
	printf("Dato: %i\n", numero);
	printf("Dato: %i\n", *pNumero);
	
	printf("\n\n");
	
	printf("Posicion de la memoria:\n");
	printf("Posicion:%p\n", &numero);
	printf("Posicion:%p", pNumero);
	
	return 0;
}
