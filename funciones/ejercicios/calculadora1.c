//Calculadora

#include <stdio.h>

float Suma(float x, float y){
	return x+y;
}

float Resta(float x, float y){
	return x-y;
}

float Multi(float x, float y){
	return x*y;
}

float Divi(float x, float y){
	if(y==0){
		return -1;
	}else{
		return x/y;
	}
}

int main(){
	int opc;
	float x, y, resultado;
	do{
		printf("\n1)Suma\n2)Resta\n3)Multi\n4)Divi\n");
		scanf("%i", &opc);
		switch(opc){
			case 1:
				printf("Introduce los dos numeros:");
				scanf("%f %f", &x, &y);
				printf("%.2f", Suma(x,y));
				break;
			case 2:
				printf("Introduce los dos numeros:");
				scanf("%f %f", &x, &y);
				printf("%.2f", Resta(x,y));
				break;
			case 3:
				printf("Introduce los dos numeros:");
				scanf("%f %f", &x, &y);
				printf("%.2f", Multi(x,y));
				break;
			case 4:
				printf("Introduce los dos numeros:");
				scanf("%f %f", &x, &y);
				resultado = Divi(x,y);
				if(resultado == -1){
					printf("No se puede dividir por 0\n");
				}else{
					printf("%.2f", Divi(x,y));
				}
				break;
			default:
				printf("Espumeada\n");
				break;
		}
	}while(opc!=99);
	return 0;
}
