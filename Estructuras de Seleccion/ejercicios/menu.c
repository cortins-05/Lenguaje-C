#include <stdio.h>
#include <math.h>

int main(){
	int numero, opcion;
	printf("MENU\n1)Cubo de numero\n2)Numero par o impar\n3)Salir\nOpcion:");
	scanf("%i", &opcion);
	switch (opcion){
		case 1:
			printf("Introduce un numero para saber su cubo:\n");
			scanf("%i", &numero);
			cubo = pow(numero,3);
			printf("El cubo de %i es %i", numero, cubo);
	}
	
	return 0;	
}
