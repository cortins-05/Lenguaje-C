//ver si un alumno va a pasar de a�o o no
//Un alumno solo tiene derecho a reprobar 3 materias para poder pasar de a�o
//si reprueba 4 materias no puede pasar de a�o y recursa

#include <stdio.h>

int main(){
	
	int materiasR;
	
	printf("Cuantas materias has reprobado?\n");
	scanf("%i", &materiasR);
	
	if(materiasR>3){
		printf("Tienes que repetir anio, la cagaste\n");
	}else{
		printf("Has aprobado el anio pero debes %i materias.\n", materiasR);
	}
	
	return 0;
}
