#include <stdio.h>
#include <stdlib.h>

int main(){
	char *cad = "20";
	int valor;
	valor = atoi(cad);
	printf("Numero entero %i", valor+5);
	printf("\nNumero flotante %.2f", atof(cad));
	return 0;
}
