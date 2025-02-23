#include <stdio.h>
#include <string.h>

int main(){
	
	char palabra[20];
	gets(palabra);
	printf("%s", strlwr(palabra));
	
	return 0;
}
