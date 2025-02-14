#include <stdio.h>

int main(){
	int numero,*apuntadorNumero;
	apuntadorNumero=&numero;
	
	printf("Introduce un numero:\n");
	scanf("%d", apuntadorNumero);
	
	if(*apuntadorNumero%2==0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
	
	printf("\nEl numero en memoria esta %p", apuntadorNumero);
	
	return 0;
}
