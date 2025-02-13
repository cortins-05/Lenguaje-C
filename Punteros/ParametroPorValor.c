//Parametro por valor
//Es el que usamos casi siempre, cuando pasamos una variable determinada a una funcion,
//sólo se copia el valor que esta contiene en una memoria temporal la cual desaparece
//luego que la ejecución de la función termina y la variable original no es 
//modificada

#include <stdio.h>

void agregar(int a){
	a += 10;
}

int main(){
	int numero;
	printf("Escribe un numero:\n");
	scanf("%d", &numero);
	printf("Valor antes de la funcion: %d", numero);
	agregar(numero);
	printf("\nValor despues de la funcion: %d", numero);
	
	return 0;
}
