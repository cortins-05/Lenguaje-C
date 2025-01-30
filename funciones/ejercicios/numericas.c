#include <stdio.h>

void Numericas(){
	float x;
	printf("Introduce un numero: ");
	scanf("%f", &x);
	printf("\nEl numero redondeado es %.2f", ceil(x));
	printf("\nEl valor absoluto es %.2f", fabs(x));
	printf("\nEl numero redondeado al entero más proximo es %.2f", floor(x));
	printf("\nEl resto de la division entre 3 es, %.2f", fmod(x,3));
	printf("\nEl numero elevado a 3 es %.2f", pow(x,3));
	printf("\nLa raiz del numero es %.2f", sqrt(x));
}

int main(){
	Numericas();
	return 0;
}
