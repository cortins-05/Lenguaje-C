//Simular una Tienda con entradas y salidas de capital

#include <stdio.h>

int main(){
	
	int opcion;
	float agregar,retirar,saldo=3000;
	
	printf("\t*****************************************\n");
	printf("\t*Este es un Simulador de Tienda o Cajero*\n");
	printf("\t*****************************************\n\n");
	printf("\tSelecciona una Opcion\n");
	printf("\t1) Depositar Dinero\n");
	printf("\t2) Retirar Dinero\n");
	printf("\t3) Salir del Cajero\n");
	printf("\t\nOpcion Seleccionada: ");
	scanf("%i",&opcion);
	
	switch(opcion){
		
		case 1: printf("Cuanto dinero quieres agregar?\n"); 
		scanf("%f", &agregar); 
		saldo += agregar; 
		printf("Tu saldo es de %.2f", saldo);
		break;
		
		case 2: printf("Cuanto dinero quiere retirar?\n");
		scanf("%f", &retirar);
		if (retirar>saldo){
			printf("Tu saldo disponible es de %.2f", saldo);
		}else{
			saldo -= retirar;
			printf("Tu saldo es de %.2f", saldo);
		}
		break;
		
		case 3: printf("Gracias por usar la aplicacion.\n"); break;
	}
	
	
	
	return 0;
}

