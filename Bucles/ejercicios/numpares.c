//Suma los n primeros numeros pares desde 1 hasta n y diga cuantos hay
#include <stdio.h>
int main(){
	int n, i=1, suma=0, numeros=0;
	printf("Introduce un numero:\n");
	scanf("%i", &n);
	while(i<n){
		if(i%2==0){
			suma+=i;
			numeros +=1;
		}
		i++;
	}
	printf("La suma es %i y son %i numeros", suma, numeros);
	return 0;
}
