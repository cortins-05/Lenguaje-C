//Arbol de *

#include <stdio.h>
int main(){
	int filas, i, j;
	printf("Digite el num de filas:\n");
	scanf("%i", &filas);
	
	for(i=1; i<=filas; i+=1){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
