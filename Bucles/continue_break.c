//* continue sirve para terminar una iteraci�n y pasar a la siguiente
//* break no s�lo termina una iteraci�n, sino con el ciclo completo

#include <stdio.h>

int main(){
	
	int numero,i;
	printf("Escribe el numero que sera ignorado:\n");
	scanf("%i", &numero);
	
	for (i=0; i<100; i++){
		if (i==numero)
			continue;
		printf("%i. \n", i);
		
	}
	printf("\n\n");
	for (fi = 0; i<100; i++){
		if (i==24)
			break;
		printf("%i. \n", i);
	}
}
