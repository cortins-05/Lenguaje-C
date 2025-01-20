//Sumar pares e impares desde n hasta m
#include <stdio.h>
int main(){
	int n, m, suma;
	
	printf("Introduce el numero desde el que sumar: ");
	scanf("%d", &n);
	printf("\nIntroduce el numero hasta el que sumar: ");
	scanf("%d", &m);
	for(n;n<=m;n++){
		suma += n;
	}
	
	printf("El resultado de la suma es %d", suma);
	
	return 0;
}
