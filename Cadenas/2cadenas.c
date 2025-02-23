#include <stdio.h>

int main(){
	char nombre[20];
	printf("Escribe tu nombre:\n");
	gets(nombre);
	
	printf("Tu nombre es %s", nombre);
	
	char palabra[20];
	do{
		scanf("%s", &palabra);
		if(!feof(stdin)){
			printf("\n%s", palabra);
		}
	}while(!feof(stdin));
	
	return 0;
}
