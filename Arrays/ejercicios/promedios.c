#include <string.h>
#include <stdio.h>

struct promedio{
	float nota1, nota2, nota3;
};

struct alumuno{
	char nombre[50];
	char sexo;
	int edad;
	struct promedio prom;
} alumno1;

int main(){
	printf("Introduce el nombre del alumno:\n");
	fgets(alumno1.nombre, 50, stdin);
	strtok(alumno1.nombre,"\n");
	printf("Introduce el sexo:\n");
	scanf("%c", &alumno1.sexo);
	printf("Introduce la edad:\n");
	scanf("%i", &alumno1.edad);
	printf("Introduce la 3 notas para el promedio:\n");
	scanf("%f %f %f", &alumno1.prom.nota1, &alumno1.prom.nota2, &alumno1.prom.nota3);
	
	float promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;
	
	printf("\n\nNombre:%s\n", alumno1.nombre);
	printf("Sexo:%c\n", alumno1.sexo);
	printf("Edad:%i\n", alumno1.edad);
	printf("Promedio:%.2f\n", promedio);
	
	return 0;
}
