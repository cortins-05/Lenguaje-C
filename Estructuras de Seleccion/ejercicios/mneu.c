#include <stdio.h>
#include <math.h>

int main(){
	
	int numero, opcion, cubo;
	
	printf("Que quieres hacer:\n1)Cubo de un numero\n2)Numero par o impar\n3)Salir\n");
	scanf("%i", &opcion);
	if(opcion != 3){
		printf("Introduce un numero:\n");
		scanf("%i", &numero);
		switch (opcion){
			case 1:
				cubo = pow(numero, 3);
				printf("El cubo de %i es %i", numero, cubo);
			case 2:
				if (numero%2==0){
					printf("El numero %i es par", numero);
				}else{
					printf("El numero %i es impar", numero);
				}
		}
	}else{
		printf("Adios");
	}
	
	return 0;
}
