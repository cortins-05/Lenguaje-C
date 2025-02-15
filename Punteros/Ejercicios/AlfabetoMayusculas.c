#include <stdio.h>

int main(){
	char letra;
	char *apuntador;
	apuntador = &letra;
	
	for( *apuntador='A'; *apuntador<='Z'; (*apuntador)++){
		printf("%c", *apuntador);
	}
	
	
	return 0;
}
