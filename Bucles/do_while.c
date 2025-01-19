/*
Do-While

Sintaxis:
do{
	algo(Instrucciones)
}while(condicion)

*/

#include <stdio.h>
int main(){
	
	int i=1;
	
	do{
		printf("%i. \n", i);
		i++;
	}while(i<=20);
	
	return 0;
	
}
