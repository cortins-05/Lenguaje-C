//Condicionales

/* Sentencia If

if (algo){
accion
}
*/

int main(){
	
	float a, b, c;
	
	printf("Digite el numero 1:\n");
	scanf("%f", &a);
	printf("Digite el numero 2:\n");
	scanf("%f", &b);

	c = a+b;
	
	if (a+b>200){
		printf("El resultado es mayor a 200 y es %.2f", c);
	}if (a+b<200){
		printf("El resultado es menor a 200 y es %.2f", c);
	}if (a+b==200){
		printf("El resultado es %.0f", c);
	}
	
	return 0;
	
}
