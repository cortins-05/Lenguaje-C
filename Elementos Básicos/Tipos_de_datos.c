//Tipos de datos en C

#include <stdio.h>
#include <stdbool.h> //Es para poder usar los booleanos

int main(){
	
	int a = 1.5; //2 bytes
	char b = 'z'; // 1 byte de 0 a 255
	float c = 1.5; //4 bytes
	double d = 1.555555555555; //Doble del flotante 8 bytes
	long e = 12345; //4 bytes
	short v = 2; //2 bytes Rango desde -128 -> 127
	unsigned int f = 123; //2 bytes de Rango de 0 -> 65535
	
	printf("El valor entero es de %i\n", a);
	printf("El valor de char es de %c\n", b);
	printf("El valor de float es de %f\n", c);
	printf("El valor de double es de %lf\n", d);
	printf("El valor de short es de %i\n", v);
	printf("El valor de long es de %li\n", e);
	printf("El valor del entero unsigned es de %i\n", f);
	
	return 0;
	
}
