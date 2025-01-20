//strlen(Cadena)
//Devuelve un entero que representa la longitud de la cadena de texto (incluyendo espacios en blanco)

#include <stdio.h>
#include <string.h>

int main(){
	//La dimension del array es 200 pero el arreglo puede ser menor
	char array[200];
	printf("Escribe cualquier cosa:");
	fflush(stdin);
	scanf("%s", &array);
	printf("\nLa longitud de la cadena es: %i", strlen(array));
	
	return 0;
}
