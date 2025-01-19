/*
Calcular tarifas de saldo en celulares
y poner precios
De 1000 a 1500 Premium
De 500 a 999 Intermedia
De 100 a 499 Basica
*/

//SOLO CON IF ANIDADOS

#define Tarifa3 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa1 "Basica"

#include <stdio.h>

int main(){
	
	float precio;
	
	printf("Digite la cantidad que esta dispuesto a pagar:\n");
	scanf("%f", &precio);
	
	if (precio<=499&&precio>=99){
		printf("El plan que se adapta al precio es %s", Tarifa1);
	}
	if(precio>=500&&precio<=999){
		printf("El plan que se adapta al precio es %s", Tarifa2);
	}
	if (precio>=1000&&precio<=1500){
		printf("El plan que se adapta al precio es %s", Tarifa3);
	}
	
	return 0;
}
