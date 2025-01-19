#include <stdio.h>
#include <stdbool.h>
int main(){
	int num, cont;
	bool primo=true;
	
	printf("Escribe un num para determinar si es primo:\n");
	scanf("%i", &num);
	for( cont=2;cont!=(num-1); cont++ ){
		if(num%cont==0){
			primo=false;
			break;
		}
	}
	if (primo){
		printf("El numero %i es primo.", num);
	}else{
		printf("El numero %i no es primo.", num);
	}
	
	return 0;
}
