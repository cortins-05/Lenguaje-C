#include <stdio.h>
#include <stdlib.h>

int main(){
	int cadena,longitudE=0;
	while('\n'!=(cadena=getchar())){
		if(cadena == ' '){
			longitudE++;
		}
	}
	printf("Tiene %i espacios", longitudE);
	return 0;
}
