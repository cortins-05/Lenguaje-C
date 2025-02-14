#include <stdio.h>

int main(){
	int vector[10]={1,2,3,4,5,6,7,8,9,10}, i;
	int *puntero;
	puntero = &vector;
	for(i=0;i<10;i++){
		printf("Direccion %i:\n", i+1);
		printf("%p", puntero+i);
		printf("\n\n");
	}
}
