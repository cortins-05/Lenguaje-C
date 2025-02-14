#include <stdio.h>

int cuentaVocales(char *nombre){
	int contador = 0;
	while(*nombre!='\0'){
		switch(*nombre){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':contador ++;
		}
		nombre++;
	}
	
	return contador;
}

int main(){
	char nombre[50];
	
	printf("Introduce tu nombre:\n");
	fgets(nombre, 50, stdin);
	strtok(nombre, "\n");
	
	printf("El numero de vocales es %i", cuentaVocales(&nombre));
	
}
