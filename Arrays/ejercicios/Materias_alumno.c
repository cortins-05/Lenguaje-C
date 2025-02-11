/*Creacion de un arreglo de estructuras*/
#include <stdio.h>
#include <string.h>
char alumnoNuevo[50];
typedef struct Asignatura{
	char Materia[50];
}Asignatura;

typedef struct Alumno{
	Asignatura Asignaturas[5];
}Alumno;

Alumno Nuevo;

void modMateria(Alumno *ejemplo){
	int materia;
	char materiaN[50];
	printf("\nIntroduce la materia a modificar por numero:\n");
	scanf("%i", &materia);
	printf("Ahora introduce el nuevo nombre de la materia\n");
	fflush(stdin);
	gets(materiaN);
	strcpy(ejemplo->Asignaturas[materia-1].Materia, materiaN);
	printf("\nMateria Cambiada con exito\n");
}

void imprimirMaterias(Alumno AlumnoImpresion){
	printf("Sus materias son:\n1.%s\n2.%s\n3.%s", AlumnoImpresion.Asignaturas[0].Materia,AlumnoImpresion.Asignaturas[1].Materia,AlumnoImpresion.Asignaturas[2].Materia);
}

void CrearAlumno(){
	
	printf("Introduce el nombre del alumno nuevo\n");
	scanf("%s", &alumnoNuevo);
	printf("Escribe las materias de %s:\n", alumnoNuevo);
	scanf("%s", &Nuevo.Asignaturas[0].Materia);
	scanf("%s", &Nuevo.Asignaturas[1].Materia);
	scanf("%s", &Nuevo.Asignaturas[2].Materia);
	printf("El alumno nuevo tiene las siguientes materias:\n1.%s\n2.%s\n3.%s", Nuevo.Asignaturas[0].Materia,Nuevo.Asignaturas[1].Materia,Nuevo.Asignaturas[2].Materia);
}

int main(){
	Alumno Lucas, Juan;
	
	strcpy(Lucas.Asignaturas[0].Materia,"Matematicas");
	strcpy(Lucas.Asignaturas[1].Materia,"Fisica");
	strcpy(Lucas.Asignaturas[2].Materia,"Quimica");
	
	strcpy(Juan.Asignaturas[0].Materia,"Musica");
	strcpy(Juan.Asignaturas[1].Materia,"Ingles");
	strcpy(Juan.Asignaturas[2].Materia,"Programacion");
	
	int opc, true=1;
	while(true==1){
	int alumno;
	printf("\n\n\n1)Ver las materias\n2)Modificarlas\n3)Crear alumnos\n0)Salir\n");
	scanf("%i", &opc);
	switch(opc){
		case 1:
			printf("Seleccionaste ver las materias");
			printf("\nDe que alumno quieres ver las materias?\n1)Lucas\n2)Juan\n3)%s\n", alumnoNuevo);
			scanf("%i", &alumno);
			switch(alumno){
				case 1:
					imprimirMaterias(Lucas);
					break;
				case 2:
					imprimirMaterias(Juan);
					break;
				case 3:
					imprimirMaterias(Nuevo);
					break;
			}
			break;
		case 2:
			printf("De que alumno quieres modificar las materias?\n1)Lucas\n2)Juan\n3)%s\n", alumnoNuevo);
			scanf("%i", &alumno);
			switch(alumno){
				case 1:
					imprimirMaterias(Lucas);
					modMateria(&Lucas);
					break;
				case 2:
					imprimirMaterias(Juan);
					modMateria(&Juan);
					break;
				case 3:
					imprimirMaterias(Nuevo);
					modMateria(&Nuevo);
					break;
			}
			break;
		case 3:
			CrearAlumno();
			break;
		default:
			printf("\nOpcion invalida\n");
			break;
		case 0:
			true=0;
			break;
			
	}
	
	}
	
	
	return 0;
}
