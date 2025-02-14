#include <stdio.h>

int main(){
	char caracter;
	char *apuntadorCaracter;
	apuntadorCaracter = &caracter;
	
	for(caracter='A';caracter<='Z';caracter++){
		printf("%c", *apuntadorCaracter);
	}
	printf("\n");
	
	for(caracter='a';caracter<='z';caracter++){
		printf("%c",*apuntadorCaracter);
	}
	
}
