#include <stdio.h>

int contarVocales(char *cadena){
	int contador=0;
	while(*cadena){
		switch(*cadena){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':contador++;				
		}
		*cadena++;
	}
	return contador;
}

int main(){
	char cadena[50];
	printf("Introduce una cadena:\n");
	gets(cadena);
	
	printf("El numero de vocales en minuscula en la cadena es: %i", contarVocales(&cadena));
	
	return 0;
}
