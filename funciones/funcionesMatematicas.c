/*
	FUNCIONES MATEMÁTICAS:
ceil(x) -> Redondea al entero mayor más cercano
fabs(x) -> Devuelve el valor absoluto de x
floor(x) -> Redondea al entero menor más cercano
sqrt(x) -> Saca la raíz cuadrada de x
fmod(x, y) -> Calcula el resto de la división de x entre y
pow(x, y) -> Calcula x elevado a la potencia de y
*/

#include <stdio.h>
//#include <math.h>

int main(){
	
	funcionMate();
	return 0;	
}

void funcionMate(){
	float x,y,cambio = 0;
	printf("Escribe dos numeros: ");
	scanf("%f %f", &x, &y);
	cambio=ceil(x);
	printf("%.2f\n", cambio);
	printf("%.2f\n", fabs(x));
	printf("%.2f\n", floor(x));
	printf("%.2f\n", sqrt(x));
	printf("%.2f\n", fmod(x,y));
	printf("%.2f\n", pow(x, y));
}
