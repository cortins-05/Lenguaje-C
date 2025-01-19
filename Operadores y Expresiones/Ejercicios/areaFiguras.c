/*
areas de figuras trigonometricas
*/

#include <stdio.h>

int main(){
	
	float base, altura, area, perimetro;
	
	printf("Este programa calcula el area  de un triangulo\nInserta la base y la altura\n");
	scanf("%f %f", &base, &altura);
	
	area = (base * altura)/2;
	printf("El area del triangulo es %.2f", area);
	
	float lado, area2;
	
	printf("Calcula el area de un cuadrado\nInserta el lado\n");
	scanf("%f", &lado);
	
	area2 = pow(lado, 2);
	printf("El area del cuadrado es %.0f", area2);
	
	return 0;
}
