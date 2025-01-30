#include <stdio.h>

int Factorial(int n){
	int resultado;
	if(n < 2) return 1;
	resultado = Factorial(n-1)*n;
	return resultado;
}

int main(){
	int n;
	printf("Introduce un numero:\n");
	scanf("%i", &n);
	printf("El factorial de %i es %i", n, Factorial(n));
	return 0;
}
