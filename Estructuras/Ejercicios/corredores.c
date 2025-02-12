#include <stdio.h>
#include <string.h>

struct corredores{
	char nombre[50];
	int edad;
	char sexo;
	char club[20];
	char categoria[20];
}corredor[20];

int main(){
	int i;
	
	for(i=0;i<2;i++){
		printf("Corredor %i:\n", i+1);
		printf("Nombre:");
		fflush(stdin);
		gets(corredor[i].nombre);
		printf("Edad:");
		scanf("%i", &corredor[i].edad);
		printf("Sexo(h/m):");
		fflush(stdin);
		scanf("%c", &corredor[i].sexo);
		printf("Club:");
		fflush(stdin);
		gets(corredor[i].club);
		if(corredor[i].edad<=18){
			strcpy(corredor[i].categoria, "Juvenil");
		}else if(corredor[i].edad<=40){
			strcpy(corredor[i].categoria, "Señor");
		}else{
			strcpy(corredor[i].categoria, "Veterano");
		}
		printf("\n\n");
	}
	
	for(i=0;i<2;i++){
		printf("Corredor %i:\n", i+1);
		printf("Nombre:%s\n",corredor[i].nombre);
		printf("Edad:%i\n",corredor[i].edad);
		printf("Sexo:%c\n", corredor[i].sexo);
		printf("Club:%s\n",corredor[i].club);
		printf("Categoria:%s", corredor[i].categoria);
		printf("\n\n");
	}
	
	
	return 0;
}
