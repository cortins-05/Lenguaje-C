//Directivas de Preprocesador y Variables

#include <stdio.h> //Libreria
#define PI 3.1416 //Macro

int y = 5; //Variable Global

int main(){
	
	int x = 10; //Variable Local
		float Suma = 0;
		Suma = PI + x;
	
	printf("La Suma es: %.4f", Suma);
	
	return 0;
}
