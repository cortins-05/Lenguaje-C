//Estructuras en C

#include <stdio.h>

struct persona{
	char nombre[20];
	int edad;
}
persona1 = {"Jorge", 19},
persona2 = {"Ricardo", 18},
persona3;

int main(){
	
	printf("Escribe tu nombre:\n");
	gets(persona3.nombre);
	printf("Escribe tu edad:\n");
	fflush(stdin);
	scanf("%i", &persona3.edad);
	
	printf("El nombre es %s y la edad %i", persona1.nombre, persona1.edad);
	printf("\nEl nombre es %s y la edad %i", persona2.nombre, persona2.edad);
	printf("\nEl nombre es %s y la edad %i", persona3.nombre, persona3.edad);
	
	return 0;
}
