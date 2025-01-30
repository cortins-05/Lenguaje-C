#include <stdio.h>

void TablaMultiplicar(int n){
	int x;
	for(x=1; x<=20; x++){
		printf("\n%i * %i es %i", n, x, n*x);
	}
}

int main(){
	int numero;
	printf("Introduce un numero para ver su tabla de multiplicar hasta el 20: ");
	scanf("%i", &numero);
	TablaMultiplicar(numero);
	return 0;
}
