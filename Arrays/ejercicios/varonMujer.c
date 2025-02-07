#include <stdio.h>
#include <string.h>

int main(){
	int x, i, varon=0, mujer=0, numero;
	char alumnos[30];
	
	printf("Digite el numero de estudiantes del curso: ");
	scanf("%i", &numero);
	for(x=1;x<=numero;x++){
		printf("Digite el sexo del %iº estudiante: ", x);
		fflush(stdin);
		gets(&alumnos);
		if(strcmp(alumnos,"varon")==0){
			varon += 1;
		}else if(strcmp(alumnos, "mujer")==0){
			mujer += 1;
		}
	}
	printf("Hay %i varones y %i mujeres", varon, mujer);
	
	return 0;
}
