#include <stdio.h>
#include <stdlib.h>

int main(){
	char cadena[20];
	gets(cadena);
	float valor = atof(cadena);
	printf("%.2f", valor);
	return 0;
}
