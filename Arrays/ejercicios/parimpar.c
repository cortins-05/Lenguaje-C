#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int arreglo[100], i, sp=0, si=0;
	srand(time(NULL));
	
	for(i=0; i<100; i++){
		arreglo[i] = rand() % 1000 + 1; 
	}
	for(i=0; i<100; i++){
		if(arreglo[i]%2==0){
			sp += 1;
		}else{
			si += 1;
		}
	}
	int pares[sp], impares[si], np=0,ni=0;
	for(i=0; i<100; i++){
		if(arreglo[i]%2==0){
			pares[np]= arreglo[i];
			np += 1;
		}else{
			impares[ni]=arreglo[i];
			ni += 1;
		}
	}
	
	printf("los numeros pares son:\n");
	for(i=0; i<sp; i++){
		printf("%i ", pares[i]);
	}
	printf("\nlos impares son:\n");
	for(i=0; i<si; i++){
		printf("%i ", impares[i]);
	}
}
