#include <stdio.h>

int main(){
	char cad[]="ABC";
	printf("%c", *cad);
	printf("%c", *cad+1);
	printf("%c", cad[2]);
	printf("%c", cad[3]); //Imprime caracter vac�o \0
	return 0;
}
