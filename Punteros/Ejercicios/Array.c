#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void RellenarArray(int *n){
	int i;
	for(i=0;i<10;i++){
		n[i]=rand() % (20 + 1);
	}
}

int main(){
	srand(time(NULL));
	int array[10], i;
	int *puntero;
	puntero = &array[0];
	
	RellenarArray(&array);
	
	for(i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	
	for(i=0;i<10;i++){
		if(*puntero%2==0){
			printf("\nEl numero %i es par\n", *puntero);
			printf("Y esta en la posicion de memoria %p", puntero);
		}else{
			printf("\nEl numero %i es impar\n", *puntero);
			printf("Y esta en la posicion de memoria %p", puntero);
		}
		puntero++;
	}
	
	return 0;
}
