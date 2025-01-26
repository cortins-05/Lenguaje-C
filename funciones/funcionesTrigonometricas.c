/*
	FUNCIONES TRIGONOMÉTRICAS:
	(Si requiere la libreria math.h)

acos(x) -> Calcula el arco coseno de x
asin(x) -> Calcula el arco seno de x
atan(x) -> Calcula el arco tangente de x
cos(x) -> Calcula el coseno de x
sin(x) -> Calcula el seno de x
tan(x) -> Calcula la tangente de x
*/
#include <stdio.h>
#include <math.h>

int main(){
	funcionTrigonometrica();
	return 0;
}

void funcionTrigonometrica(){
	float x;
	printf("Escribe un numero: ");
	scanf("%f", &x);
	printf("El arco coseno de x es: %f\n", acos(x));
	printf("El arco seno de x es: %f\n", asin(x));
	printf("El arco tangente de x es: %f\n", atan(x));
	printf("El coseno de x es: %f\n", cos(x));
	printf("El seno de x es: %f\n", sin(x));
	printf("La tangente de x es: %f\n", tan(x));
}
