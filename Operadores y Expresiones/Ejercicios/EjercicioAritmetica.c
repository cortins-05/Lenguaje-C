/*
Ejercicios operaciones aritmeticas
*/

//Pedirle al usuario que digite 2 numeros y 
//tenemos que sumarlos, restarlos, multiplicarlos y dividirlos

#include <stdio.h>

int main(){
	
	float num1, num2, suma, resta, multiplicacion, division;
	
	printf("Digita dos números:\n");
	scanf("%f %f", &num1, &num2);
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	printf("La suma de los numeros es %.2f\nLa resta es %.2f\nLa multiplicacion:%.2f\nLa division:%.2f", suma, resta, multiplicacion, division);
	printf("\nGracias por usar el programa");

	return 0;
}


