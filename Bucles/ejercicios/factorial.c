//Calcular el factorial de un numero dado por el usuario

#include <stdio.h>
int main(){
	int mul, num, factorial=1;
	
	printf("Introduce un numero para calcular su factorial:\n");
	scanf("%i", &num);
	
	for(mul=1; mul<=num; mul++){
		factorial *= mul;
	}
	printf("El factorial es %i", factorial);
	
	return 0;
}
