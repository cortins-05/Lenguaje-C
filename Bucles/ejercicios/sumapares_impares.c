#include <stdio.h>

int main(){
	int sumapares, sumaimpares, n, i, neg, sumagral;
	printf("Hasta que numero quieres sumar:\n");
	scanf("%i", &n);
	
	while(i<=n){
		if(i%2==0){
			neg=i*(-1);
			sumapares += neg;
		}else{
			sumaimpares += i;
		}
		i++;
	}
	sumagral = sumapares + sumaimpares;
	printf("El resultado de la suma es %i", sumagral);
}
