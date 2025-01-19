/* Calcular la cantidad de segundos que estan incluidos en el numero de horas,
minutos y segundos ingresados por el usuario.*/

#include <stdio.h>

int main(){

    int horas,minutos,segundos,total;

	printf("Introduce el numero de horas, minutos y segundos en ese orden:\n");
	scanf("%i %i %i", &horas, &minutos, &segundos);
	
	total = horas*3600 + minutos*60 + segundos;
	
	printf("El tiempo introducido en segundos es: %i", total);

    return 0;
}
