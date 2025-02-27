#include <stdio.h>

int suma(int *p_a, int *p_b){
	int a;
	a = *p_a + *p_b;
	return a;
}
int resta(int *p_a, int *p_b){
	
	int a = *p_a - *p_b;
	
	return a;
	
}
int multiplicacion(int *p_a, int *p_b){
	return *p_a * *p_b;
}
int division(int *p_a, int *p_b){
	return *p_a / *p_b;
}
