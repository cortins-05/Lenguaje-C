//strupr(Cadena)
//Convierte a may�sculas todas las letras de la cadena

#include <stdio.h>
#include <string.h>

int main(){
	
	char texto[100];
	printf("Escribe un texto: ");
	scanf("%s", &texto);
	printf("El nuevo texto es: %s", strupr(texto));
	return 0;
}
