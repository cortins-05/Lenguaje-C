#include <stdio.h>
#include <stdlib.h>

int main(){
	char cad1[]="Hola Mundo", cad2[20];
	strcpy(cad1+5,"y bienvenido al lenguaje C");
	printf("%s", cad1);
	return 0;
}
