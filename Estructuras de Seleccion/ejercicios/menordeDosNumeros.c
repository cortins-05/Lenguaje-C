//CALCULAR EL MENOR DE DOS NUMEROS 

#include <stdio.h>

int main(){
	
	float num1, num2;
	
	printf("Introduce dos numeros:\n");
	scanf("%f %f", &num1, &num2);
	
	if(num1==num2){
		printf("Los numeros son iguales\n");
	}
	
	if (num1<num2){
		printf("El %.2f es menor que %.2f", num1, num2);
	}if(num1>num2){
		printf("El %.2f es mayor que %.2f", num1, num2);
	}
	
	return 0;
}
