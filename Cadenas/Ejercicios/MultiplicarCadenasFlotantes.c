#include <stdio.h>
#include <stdlib.h>

int main(){
	char cad1[20],cad2[20];
	printf("Introduce dos cadenas:\n");
	gets(cad1);
	gets(cad2);
	float valor1=atof(cad1),valor2=atof(cad2), resultado=valor1*valor2;
	printf("El resultado es: %.2f", resultado);
	return 0;
	
}
