//strlwr(Cadena)
//Convierte a minúsculas todas las letras de la cadena de texto

#include <stdio.h>
#include <string.h>

int main(){
	char texto[100];
	
	printf("Escribe un texto con mayusculas y minusculas: ");
	fflush(stdin);
	scanf("%s", &texto);
	printf("El nuevo texto es el siguiente: %s",strlwr(texto));
	
	return 0;
}
