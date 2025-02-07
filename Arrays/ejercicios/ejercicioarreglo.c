#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

int menu(){
	int opc;
	printf("\n1)Modificar elementos del arreglo\n2)Suma de los elementos del arreglo\n3)Multiplicacion de los elementos\n4)Suma de los elementos divisibles entre 0\n5)Multiplicar por 3 cada elemento del arreglo\n\n");
	scanf("%i", &opc);
	return opc;
}

int numero_aleatorio(){
	return (rand() % 30) + 1;
}

int main(){
	srand(time(NULL));
	int arreglo[5][2], i, x, elemento, suma;
	long long int multi;
	bool pregunta = true;
	
	for(i=0;i<5;i++){
		for(x=0;x<2;x++){
			arreglo[i][x] = numero_aleatorio();
		}
	}
	
	printf("Esta es la matriz:\n");
	
	for(i=0;i<5;i++){
		for(x=0;x<2;x++){
			printf("%i ", arreglo[i][x]);
		}
		printf("\n");
	}
	
	while(pregunta){
		switch(menu()){
			case 1:
				printf("Introduce la fila y la columna del elemento a modificar:\n");
				scanf("%i %i", &i, &x);
				if(arreglo[i-1][x-1]){
					printf("Introduce el elemento a cambiar:\n");
					scanf("%i", &elemento);
					arreglo[i-1][x-1]=elemento;
					printf("Elemento cambiado");
				}else{
					printf("No existe la posicion");
				}
				break;
			case 2:
				suma = 0;
				for(i=0;i<5;i++){
					for(x=0;x<2;x++){
						suma += arreglo[i][x];
					}
				}
				printf("La suma es %i", suma);
				break;
			case 3:
				multi = 1;
				for(i=0;i<5;i++){
					for(x=0;x<2;x++){
						multi *= arreglo[i][x];
					}
				}
				printf("La multiplicacion es %lld", multi);
				break;
			case 4:
				suma = 0;
				for(i=0;i<5;i++){
					for(x=0;x<2;x++){
						if(arreglo[i][x]%3==0){
							suma += arreglo[i][x];
						}
					}
				}
				printf("La suma es %i", suma);
				break;
			case 5:
				for(i=0;i<5;i++){
					for(x=0;x<2;x++){
						printf("%i ", arreglo[i][x]*3);
					}
					printf("\n");
				}
				
				break;
				
		}
	}
	
	return 0;
}
