#include <stdio.h>

//Esta funcion recibe un array y lo llena

void Llenar(int Array[], int dimension){
	int i;
	for(i=0; i<dimension; i++){
		printf("Dame el valor [%d] del array:", i);
		scanf("%d", &Array[i]);
	}
}

int main(){
	int miVector[5], i;
	Llenar(miVector, 5);
	for(i=0;i<5;i++){
		printf("%d ",miVector[i]);
	}
	return 0;
}
