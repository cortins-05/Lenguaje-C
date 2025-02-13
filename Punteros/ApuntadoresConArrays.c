#include <stdio.h>

int main(){
	//Declaramos un array con 5 indices
	int array[5]={1,2,3,4,5};
	
	//Ahora apuntador al inicio de la variable
	int *apuntadorArray = &array[0];
	
	//Con esto podemos desplazarnos por el array sin conocer su dimension
	
	while(*apuntadorArray != NULL){
		printf("\n %d", *apuntadorArray);
		apuntadorArray++;
	}
	
	return 0;
}
