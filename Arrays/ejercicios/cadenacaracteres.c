#include <stdio.h>
#include <string.h>

int main(){
	int i, suma=0;
	char cadena[100]="Hola que tal como andamios";
	for(i=0;i<strlen(cadena);i++){
		if(cadena[i]!=' ' && cadena[i]!='\0'){
			suma +=1;
		}
	}
	printf("El numero de caracteres de la cadena es %i", suma);
	strrev(cadena);
	printf("\n%s", cadena);
	return 0;
}
