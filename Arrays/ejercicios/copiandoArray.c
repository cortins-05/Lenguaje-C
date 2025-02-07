#include <stdio.h>
void CopiandoArrays(int a[], int b[], int tamano){
	int i;
	for(i=0; i<tamano;i++){
		b[i]=a[i];
		printf("%i", b[i]);
	}
}

int main(){
	int arrayUno[5]={2,3,4,5,6};
	int arrayDos[5];
	printf("Copiando de un array a otro...\n");
	CopiandoArrays(arrayUno, arrayDos, 5);
	return 0;
}
