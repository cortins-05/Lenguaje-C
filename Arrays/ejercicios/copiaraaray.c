#include <stdio.h>

#define TAMANIO 5

void CopiarArray(int array[],int array2[]){
	int i;
	for(i=0;i<TAMANIO;i++){
		array2[i]=array[i];
	}
	for(i=0;i<TAMANIO;i++){
		printf("%i", array2[i]);
	}
}

int main(){
	int Array[TAMANIO] = {1,2,3,4,5};
	int Array2[TAMANIO];
	CopiarArray(Array, Array2);
	return 0;
}
