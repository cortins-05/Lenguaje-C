#include <stdio.h>
#include <string.h>

int main(){
	char palabra1[20], palabra2[20];
	printf("Introduce la 1º palabra:\n");
	gets(palabra1);
	printf("\nEscribe la segunda palabra:\n");
	gets(palabra2);
	
	if(strcmp(palabra1,palabra2)>0){
		printf("%s , %s", palabra2, palabra1);
	}else{
		printf("%s , %s", palabra1, palabra2);
	}
	return 0;
}
