#include <stdio.h>
#include <string.h>

int main(){
	char hola[20]="Hola que tal";
	char copiada[20];
	strcpy(copiada,hola);
	printf("%s", copiada);
	return 0;
}
