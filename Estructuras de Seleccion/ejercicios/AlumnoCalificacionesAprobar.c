/* Comprobar a traves de un programa si un
alumno aprobo o no
un examen (Aprueba si su nota es mayor a 5.5)*/

#include <stdio.h>

int main(){
    
    float calificacionesExamen;
    
    printf("Introduce la calificacion que sacaste para ver si aprovaste o no:\n");
    scanf("%f", &calificacionesExamen);
    if(calificacionesExamen<=5.5){
    	printf("Has suspendido el examen");
	}else{
		printf("Has aprobado el examen con una nota de %.2f", calificacionesExamen);
	}
    
    return 0;
}
