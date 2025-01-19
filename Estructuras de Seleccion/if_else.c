//Setencia If/Else o Doble

/*
if(algo){
	accion1
}else{
	accion2
}
*/

int main(){
	
	float a, b, c;
	
	printf("Digite el numero 1:\n");
	scanf("%f", &a);
	printf("Digite el numero 2:\n");
	scanf("%f", &b);

	c = a+b;
	
	if (a+b>=200){
		printf("El resultado es mayor a 200 y es %.2f\n", c);
	}else{
		printf("El resultado es menor a 200 y es %.2f\n", c);
	}
	
	
	float calificacion;
	
	printf("Escribe tu calificacion:\n");
	scanf("%f", &calificacion);
	
	if (calificacion >= 6){
		printf("Felicidades aprobaste.\n");
	}else{
		printf("Mierda, suspendiste con %.2f", calificacion);
	}
	
	return 0;	
}
