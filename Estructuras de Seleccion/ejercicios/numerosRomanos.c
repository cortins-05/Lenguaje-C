//Numeros enteros a Romanos 

#include <stdio.h>

int main(){
	
	int numero,millar,centenas,decenas,unidades;
	
	printf("Digita un numero:\n");
	scanf("%i", &numero);
	
	unidades = numero%10; numero = numero/10;
	decenas = numero%10; numero = numero/10;
	centenas = numero%10; numero = numero/10;
	millar = numero%10; numero = numero/10;
	
	switch(millar){
		case 1: printf("M"); break;
		case 2: printf("MM"); break;
		case 3: printf("MMM"); break;
	}
	switch(centenas){
		case 1: printf("C"); break;
		case 2: printf("CC"); break;
		case 3: printf("CCC"); break;
		case 4: printf("CD"); break;
		case 5: printf("D"); break;
		case 6: printf("DC"); break;
		case 7: printf("DCC"); break;
		case 8: printf("DCCC"); break;
		case 9: printf("CM"); break;
	}
	
	
	return 0;
}
