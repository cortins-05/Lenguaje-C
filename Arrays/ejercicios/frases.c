#include <stdio.h>
#include <string.h>

int main(){
	char frase[100], copia[100];
	printf("Introduce la frase:\n");
	fflush(stdin);
	gets(&frase);
	strcpy(copia, frase);
	printf("%s", copia);
	return 0;
}
