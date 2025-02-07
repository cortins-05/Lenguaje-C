#include <stdio.h>
#include <string.h>

char* pregunta(){
	char cadena[20];
	printf("Introduce una cadena: ");
	fgets(cadena, 20, stdin);
	cadena[strcspn(cadena, "\n")] = '\0';
	return cadena;
}

int main(){
	char array1[20],array2[20], auxiliar[20];
	strcpy(array1, pregunta());
	strcpy(array2, pregunta());
	strcpy(auxiliar, array1);
	strcpy(array1, array2);
	strcpy(array2, auxiliar);
	printf("%s\n", array1);
	printf("%s", array2);
	return 0;
}
