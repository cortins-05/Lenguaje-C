#include <stdio.h>

int main(){
	
	char nombre[30], sexo[20];
	int edad;
	
	printf("Introduce el nombre de la persona:\n");
	fgets(nombre, 30, stdin);
	strtok(nombre, "\n");
	
	printf("Escribe la edad:\n");
	scanf("%i", &edad);
	fflush(stdin);
	
	printf("Escribe el sexo:\n");
	fgets(sexo, 30, stdin);
	strtok(sexo, "\n");
	
	if(strcmp(sexo, "femenino") == 0 && edad>=18){
		printf("Cumple con los requisitos");
	}else{
		printf("No cumple con los requisitos");
	}
	
	return 0;
}
