#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[20], frase2[20];
	gets(frase);
	strlwr(frase);
	strcpy(frase2,frase);
	if(strcmp(frase,strrev(frase2))==0){
		printf("La frase/palabra es capicua");
	}else{
		printf("La frase/palabra no es capicua");
	}
	
	return 0;
}
