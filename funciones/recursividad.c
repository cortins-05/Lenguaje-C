/*
Funcion Recursiva
Recursividad: Una función que se llama a si misma
1) Caso Base
2) Caso Recursivo


a(x){
	if(n=1){
		return n;
	}else{
		a(x); //Se vuelve a llamar a si misma dentro de la misma función
	}
}

*/

//Factorial con método recursivo
#include <stdio.h>
long factorial(int n);

int main(){
	int n;
	printf("Escribe un numero: ");
	scanf("%i", &n);
	
	printf("El factorial del numero %i es : %li\n", n, factorial(n));
	return 0;
}

long factorial(int n){
	if(n<=1){
		return 1;
	}else{
		return(n*factorial(n-1));
	}
}
