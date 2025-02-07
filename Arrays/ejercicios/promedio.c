#include <stdio.h>

int main(){
	
	int datos[8],x;
	float promedio=0;
	
	for(x=0;x<=7;x++){
		printf("Introduce un numero: ");
		scanf("%d", &datos[x]);
	}
	
	for(x=0;x<=7;x++){
		promedio += datos[x];
	}
	printf("El promedio es %.2f", promedio/8);
	
	
	return 0;
}
