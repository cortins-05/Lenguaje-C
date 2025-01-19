//Aumentar el salario en una empresa el 10%

#include <stdio.h>

int main(){
	
	char nombre[40];
	int salario;
	float aumentoSalario;
	
	printf("Inserte su nombre por favor:\n");
	gets(nombre);
	
	printf("Su nombre es %s\n", nombre);
	printf("Inserte su salario:\n");
	scanf("%i", &salario);
	
	aumentoSalario = (salario*0.1)+salario;
	
	printf("Tu salario paso de ser %i a ser %.2f\n", salario, aumentoSalario);
	
	return 0;
}
