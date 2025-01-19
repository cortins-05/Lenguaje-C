//Suma factoriales
#include <stdio.h>
int main(){
	int fact=1, suma=0, cantidadFactorial, i;
	printf("Digite un numero:\n");
	scanf("%d", &cantidadFactorial);
	
	for(i=1;i<=cantidadFactorial;i++){
		fact*=i;
		suma+=fact;
	}
	printf("La suma de los factoriales de %d es %d", cantidadFactorial, suma);
	
	return 0;
}
