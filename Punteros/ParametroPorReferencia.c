//Parametros por Referencia
//En este tipo de funciones el valor de la variable si se modifica, ya que se pasa
//como parámetro la dirección de memoria de esta, usando el operador & y en la función
//el argumento se recibe como valor que alberga esta dirección de memoria usando el operador
// *.

#include <stdio.h>

void Agregar(int *a){
	*a += 10;
}

int main(){
	int numero;
	printf("Ingrese un numero:\n");
	scanf("%d", &numero);
	printf("\nValor antes de la funcion: %d", numero);
	Agregar(&numero);
	printf("\nValor despues de la funcion: %d", numero);
	
	return 0;
}
