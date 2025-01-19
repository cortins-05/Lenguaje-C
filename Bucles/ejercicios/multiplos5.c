#include <stdio.h>

int main(){
	int cont, numero;
	
	printf("Introduce un numero:\n");
	scanf("%i", &numero);
	
	for (cont=1; cont!=numero; cont++){
		if (cont%5==0){
			printf("%i\n", cont);
		}
	}
	
	return 0;
}
