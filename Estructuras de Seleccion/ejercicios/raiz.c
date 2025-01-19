#include <stdio.h>
#include <math.h>

int main(){
	
	int numero;
	float raiz;
	
	printf("Ingrese un numero: ");
	scanf("%i", &numero);
	if (numero >= 0){
		raiz = sqrt(numero);
		printf("La raiz de %i es %.2f", numero, raiz);
	}else{
		printf("Tiene raiz imaginaria");
	}
	
	return 0;
}
