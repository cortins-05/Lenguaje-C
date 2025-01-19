#include <stdio.h>
int main(){
	
	int cont=0, num, suma=0;
	printf("Introduce un numero:\n");
	scanf("%i", &num);
	
	while(cont!=num){
		cont++;
		suma += cont;
	}
	
	printf("La suma es %i", suma);
	
	return 0;
	
}
