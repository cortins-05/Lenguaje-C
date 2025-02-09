#include <stdio.h>

int main(){
	int numeroE, i, hombres=0, mujeres=0, desconocido=0;
	printf("Introduce el numero de estudiantes en el curso:\n");
	scanf("%i", &numeroE);
	char estudiantes[numeroE];
	for(i=0;i<numeroE;i++){
		printf("Introduce el sexo del estudiante:\n");
		scanf(" %c", &estudiantes[i]);
	}
	for(i=0;i<numeroE;i++){
		if(estudiantes[i]=='h'){
			hombres++;
		}else if(estudiantes[i]=='m'){
			mujeres++;
		}else{
			desconocido++;
		}
	}
	
	printf("El numero de hombres es %i, el de mujeres %i y desconocidos %i", hombres, mujeres, desconocido);
	
	
	
	return 0;
}
