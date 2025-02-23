#include <stdio.h>
#include <string.h>

#define tamano 20

int main(){
	
	char nombre1[tamano],nombre2[tamano];
	gets(nombre1);
	gets(nombre2);
	
	if(strcmp(nombre1,nombre2)==0){
		printf("Los nombres son iguales");
	}else{
		printf("Los nombres son diferentes");
	}
	
	
	return 0;
}
