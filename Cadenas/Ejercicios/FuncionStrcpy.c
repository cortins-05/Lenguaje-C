#include <stdio.h>
#include <string.h>

int main(){
	char cad1[]="Hola Mundo";
	char cad2[30];
	
	strcpy(cad2,cad1); //Copia el contenido de cad1 a cad2
	
	strcpy(cad2+5, "y aprende C con Chochy");
	
	printf("%s", cad2);
	
	return 0;
}
