//Arreglos de estructuras en C

#include <stdio.h>

struct persona{
	char nombre[20];
	int edad;
}personas[5]; //persona1, persona2,...persona5;

int main(){
	int i;
	for(i=0; i<5; i++){
		fflush(stdin);
		printf("%i. Escribe tu nombre:\n", i+1);
		gets(personas[i].nombre);
		printf("%i. Escribe tu edad:\n", i+1);
		scanf("%i", &personas[i].edad);
	}
	
	for(i=0;i<5;i++){
		printf("\n\n%i. Su nombre es %s\n", i+1, personas[i].nombre);
		printf("%i. Su edad es %i", i+1, personas[i].edad);
	}
	return 0;
}
