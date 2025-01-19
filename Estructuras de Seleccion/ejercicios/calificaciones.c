//Decirle al alumno algo con base en sus calificaciones 
/*9-10 -> Excelente, sigue así
8-9 -> Muy bien, puedes mejorar
7-8 -> Eres un estudiante regular
0-6.9 -> Puedes mejorar */
#include <stdio.h>
int main(){
	
	float calificacion;
	
	printf("Introduce tu calificacion (0-10)\n");
	scanf("%f", &calificacion);
	
	if (calificacion>=0&&calificacion<=6.9){
		printf("Puedes mejorar.");
	}
	if(calificacion>=7&&calificacion<=7.9){
		printf("Eres un estudiante regular");
	}
	if(calificacion>=8&&calificacion<=8.9){
		printf("Muy bien, puedes mejorar");
	}
	if(calificacion>=9&&calificacion<=10){
		printf("Excelente");
	}
	
	return 0;
}



