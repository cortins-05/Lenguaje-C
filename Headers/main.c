#include "funciones.h"

int main(){
	
	int *p_a, *p_b, a=1, b=2;
	
	p_a=&a;
	p_b=&b;
	
	int sum;
	sum=suma(p_a,p_b);
	
	printf("%i",sum);
	
	printf("\n%i", resta(p_a,p_b));
	printf("\n%i", multiplicacion(p_a,p_b));
	printf("\n%i", division(p_a,p_b));
	
	return 0;
}
