//*Suma de 20 primeros numeros pares
#include <stdio.h>
int main(){
	int i, suma=0;
	
	for(i=1;i<=20;i++){
		if(i%2==0){
			suma +=i;
			printf("La suma va por %i\n", suma);
		}
	}
	
	return 0;
}
