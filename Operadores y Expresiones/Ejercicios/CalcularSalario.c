/* Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo */

#include <stdio.h>

int main(){
    
    char nombre[40];
	int horas,salario_hora,salario_total;

	printf("Introduce tu nombre:\n");
	gets(nombre);
	printf("Bienvenido %s\n", nombre);

	printf("Introduce las horas trabajadas:\n");
	scanf("%i", &horas);
	printf("Introduce el salario por hora:\n");
	scanf("%i", &salario_hora);
	
	salario_total = horas * salario_hora;
	
	printf("Tu salario total es de: %i", salario_total);
	
    return 0;
}
