#include <stdio.h>

int main(){
	
	int n=10,*p_n=&n;
	float n2=10.5,*p_n2=&n2;
	char n3='a',*p_n3=&n3;
	
	printf("Variable entera:\n");
	printf("Dato: %i\n", *p_n);
	printf("Posicion: %p\n", p_n);
	printf("\n");
	printf("Variable flotante:\n");
	printf("Dato: %f\n", *p_n2);
	printf("Posicion: %p\n", p_n2);
	printf("\n");
	printf("Variable Caracter:\n");
	printf("Dato: %c\n", *p_n3);
	printf("Posicion: %p", p_n3);
	
	return 0;
}
