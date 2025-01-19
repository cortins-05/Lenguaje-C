#include <stdio.h>

int main(){
	int numero;
	printf("Introduce un numero para ver si es positivo o negativo:\n");
	scanf("%d", &numero);
	if (numero >= 0){
		printf("El numero %d es positivo\n", numero);
	}else{
		printf("El numero %d es negativo\n", numero);
	}
}
