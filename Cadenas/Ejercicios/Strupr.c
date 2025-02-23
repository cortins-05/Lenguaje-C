#include <stdio.h>
#include <string.h>

int main(){
	char palabra[20];
	printf("Introduce una palabra:\n");
	gets(palabra);
	printf("%s", strupr(palabra));
	return 0;
}
