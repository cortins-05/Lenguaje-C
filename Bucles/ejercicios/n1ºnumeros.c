//Suma de los n primeros numeros

#include <stdio.h>
int main(){
	int num, i=1, suma=0;
	printf("Introduce un numero:\n");
	scanf("%i", &num);
	
	while(i<=num){
		suma += i;
		i++;
	}
	
	printf("La suma de los %i primeros numeros es %i", num, suma);
	
	return 0;
}
