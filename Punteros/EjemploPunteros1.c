#include <stdio.h>

int main(){
	//Declaramos la varible
	int a = 19;
	int b = 20;
	
	//Declaramos el apuntador de referencia a las variables
	int *apuntadorA = &a;
	int *apuntadorB = &b;
	
	printf("El valor de a es %d\n", a);
	printf("La ubicacion de memoria de a es %p\n", &a);
	printf("%d\n", *apuntadorA);
	
	
	//Le cambiamos el valor al apuntador
	*apuntadorA = 123;
	//Aqui se notara el cambio de la variable a la que apuntaba
	printf("%d", a);
	
	
	return 0;
}
