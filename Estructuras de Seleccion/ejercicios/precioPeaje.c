#include <stdio.h>

int main(){
	
	char vehiculo;
	printf("Introduce el tipo de vehiculo:\n1)Autobus\n2)Coche\n3)Motocicleta\n4)Otro\n");
	scanf("%i", &vehiculo);	
	switch (vehiculo){
		case 1:
			printf("Tendras que pagar $3000");
			break;
		case 2:
			printf("Tendras que pagar $500");
			break;
		case 3:
			printf("Tendras que pagar $300");
			break;
		defaultc:
			printf("Vehiculo no autorizado");
			break;
	}
	return 0;
}
