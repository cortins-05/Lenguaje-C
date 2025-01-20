//Invertir una cadena con la funcion strrev().

#include <stdio.h>
#include <string.h>

int main(){
	char cadena[]="Hola";
	strrev(cadena);
	printf("Cadena invertida:\n%s", cadena);
	return 0;
}
