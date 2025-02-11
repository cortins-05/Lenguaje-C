#include <stdio.h>
#include <string.h>

typedef struct Alumno{
	char Nombre[50];
	int Edad;
	float promedio;
}Alumnos[3];

int main(){
	
	int i, posicion, mejorCalificacion = 0;
	
	for(i=0;i<3;i++){
		printf("Nombre: ");
		fflush(stdin);
		gets(Alumnos[i].Nombre);
		printf("Edad: ");
		scanf("%i", &Alumnos[i].Edad);
		printf("Promedio: ");
		scanf("%f", &Alumnos[i].promedio);
	}
	
	for(i=0;i<3;i++){
		if(Alumnos[i].promedio>mejorCalificacion){
			mejorCalificacion = Alumnos[i].promedio;
			posicion = i;
		}
	}
	
	printf("El alumno con mejor promedio es %s\nCon una edad de %i\nUn promedio de %.2f", Alumnos[posicion].Nombre, Alumnos[posicion].Edad, Alumnos[posicion].promedio);
	
	return 0;
}
