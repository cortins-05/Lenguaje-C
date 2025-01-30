/*
Array Unidimensional:
Es una secuencia de datos

Array o arreglos unidimensionales

Arrays Enteros
Arrays Flotantes
Arrays de Caracter
Arrays de String (conjunto de caracteres)

EMPIEZAN EN EL 0
*/

#include <stdio.h>
int main(){
	int a[5]={1,2,3,4,5}, i;
	
	printf("%i\n", a[0]);
	for(i=0;i<=4;i++){
		printf("%i", a[i]);
	}
	
	printf("\n\n");
	int b[5];
	for (i=0;i<=4;i++){
		printf("Digite un numero:\n");
		scanf("%i",&b[i]);
	}
	for(i=0;i<=4;i++){
		printf("%i", b[i]);
	}
	
	char nombre[20];
	printf("\nEscribe tu nombre:\n");
	fflush(stdin);
	gets(&nombre);
	printf("%s", nombre);
	
	return 0;
}
