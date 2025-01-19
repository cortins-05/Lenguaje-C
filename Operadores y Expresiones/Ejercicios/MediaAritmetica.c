/* Calcule la media aritmetica de 3 numeros cualesquiera dados por el usuario*/

#include <stdio.h>

int main(){
    float num1,num2,num3;
    float media_aritmetica;

	printf("Introduce el primer, segundo y tercer numero para calcular la media aritmetica:\n");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	media_aritmetica = (num1+num2+num3)/3;
	
	printf("La media de las tres notas es de: %.2f", media_aritmetica);

    return 0;
}
