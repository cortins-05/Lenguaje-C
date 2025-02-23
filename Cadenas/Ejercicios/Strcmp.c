#include <stdio.h>
#include <string.h>

int main(){
	char palabra1[]="Lucas";
	char palabra2[]="Lucas";
	if(strcmp(palabra1,palabra2)==0){
		printf("Ambas palabras son iguales");
	}else{
		printf("Son diferentes");
	}
	return 0;
}
