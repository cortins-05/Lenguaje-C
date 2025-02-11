#include <stdio.h>

int main(){
	int a[10]={2,4,6,8,0,1,3,5,7,9};
	int i, dato;
	char band = 'F';
	
	printf("Escribe un numero:\n");
	scanf("%i", &dato);
	
	i=0;
	while((band=='F')&&(i<10)){
		if(a[i]==dato){
			band='V';
		}
		i++;
	}
	if(band=='F'){
		printf("El dato no esta en el array");
	}else if(band=='V'){
		printf("El numero existe en la posicion %i", i-1);
	}
	
	return 0;
}
