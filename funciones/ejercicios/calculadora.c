//Sumar, Restar, Multiplicar, Dividir

#include <stdio.h>

void Sumar(float x, float y);
void Restar(float x, float y);
void Multiplicar(float x, float y);
void Dividir(float x, float y);
void Menu();

int main(){
	Menu();
	return 0;
}

void Menu(){
	float x, y;
	int num;
	do{
		printf("1)Sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n99)Salir\n");
		scanf("%d", &num);
		printf("Introduce el primer y el segundo numero:\n");
		scanf("%f %f", &x, &y);
		switch(num){
			case 1: Sumar(x,y); break;
			case 2: Restar(x,y); break;
			case 3: Multiplicar(x,y); break;
			case 4: Dividir(x,y); break;
			default:printf("\nIntroduce una opción válida."); break;
		}
	}while(num!=99);
}

void Sumar(float x, float y){
	printf("El resultado de la suma de %.2f + %.2f es: %.2f\n", x, y, x+y);
}
void Restar(float x, float y){
	printf("El resultado de la resta de %.2f - %.2f es: %.2f\n", x, y, x-y);
}
void Multiplicar(float x, float y){
	printf("El resultado de la multiplicacion de %.2f * %.2f es: %.2f\n", x, y, x*y);
}
void Dividir(float x, float y){
	if(y == 0){
		printf("No se puede dividir por 0\n");
	}else{
		printf("El resultado de la division de %.2f / %.2f es: %.2f\n", x, y, x/y);
	}
}
