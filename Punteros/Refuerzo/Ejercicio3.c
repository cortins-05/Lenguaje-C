#include <stdio.h>
#include <math.h>

void Calculo(int *valor1, int *valor2){
	int potencia=pow(*valor1, *valor2);
	*valor2 = potencia / *valor1;
	*valor1 = potencia;
}

int main(){
	int valor1, valor2;
	
	printf("Introduce dos valores:\n");
	scanf("%d %d", &valor1, &valor2);
	Calculo(&valor1, &valor2);
	
	printf("Los resultados son %d y %d", valor1, valor2);
	
	return 0;
}
