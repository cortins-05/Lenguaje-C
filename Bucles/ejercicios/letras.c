#include <stdio.h>
int main(){
	char letra='A';
	
	do{
		printf("%c.\n", letra);
		letra++;
	}while(letra <= 'z');
	
	return 0;
}
