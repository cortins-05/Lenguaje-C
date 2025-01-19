/* Un alumno desea saber cual sera su calificacion final en la
materia de Algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:

55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final.
15% de la calificación de un trabajo final.*/

#include <stdio.h>

int main(){
    
    char nombre[40];
    float p1, p2, p3, promedio_p, examen_final, trabajo_final, calificacion;
    
	printf("Dime tu nombre:\n");
    gets(nombre);
    
    printf("Dime la nota del primer parcial, del segundo y del tercero:\n");
    scanf("%f %f %f", &p1, &p2, &p3);
    
    promedio_p = (p1+p2+p3)/3;
    
    printf("Dime la nota del examen final:\n");
    scanf("%f", &examen_final);
    printf("Dime la nota del trabajo final:\n");
    scanf("%f", &trabajo_final);
    
    calificacion = promedio_p*.55 + examen_final*.3 + trabajo_final*.15;
    
    printf("%s, tu calificacion es de %.2f", nombre, calificacion);

    return 0;
}
