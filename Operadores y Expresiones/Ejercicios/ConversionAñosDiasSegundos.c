/*
Transformar años a meses
Meses a Semanas
Semanas a dias
y dias a horas

1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas
*/

//Pedirle al usuario que digite la cantidad de años con las que se hará la conversión

#include <stdio.h>
int main(){
	
	int edad, horas, dias, semanas, meses;
	
	printf("Digita tu edad:\n");
	scanf("%i", &edad);
	
	meses = edad*12;
	semanas = meses * 4;
	dias = semanas * 7;
	horas = dias * 24;
	
	printf("Tienes %i años por lo que tienes %i meses, %i semanas, %i dias, %i horas", edad, meses, semanas, dias, horas);
	
	
	
	return 0;
}

