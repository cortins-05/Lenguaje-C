#include <stdio.h>

double Kelvin(float n1);
double Farenheit(float n1);
float celsius;
int opc;

int main(){
	do
	{
	printf("Este programa convierte grados Celsius a Farenheit y a Kelvin\nDame el valor en Celsius:\n");
	scanf("%f", &celsius);
	printf("Que deseas hacer:\n1)Farenheit\n2)Kelvin\n");
	scanf("%i", &opc);
	switch (opc){
		case 1:
			printf("%.2f\n", Farenheit(celsius));
			break;
		case 2:
			printf("%.2f\n", Kelvin(celsius));
			break;
	}
	}while(opc!=3);
	
}

double Farenheit(float n1){
	float resultado = 0;
	resultado = n1 + 273.15;
	return resultado;
}

double Kelvin(float n1){
	float resultado = 0;
	resultado = (n1*9)/5+32;
	return resultado;
}
