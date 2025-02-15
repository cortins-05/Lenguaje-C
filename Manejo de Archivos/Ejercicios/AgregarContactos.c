#include <stdio.h>
#include <stdlib.h>

FILE *fd;

struct datosPersona{
	char nombre[20];
	char apellidos[20];
	char email[30];
}datos;

int main(){
	char direccion[]="AgregarContactos.txt";
	char rpt;
	fd = fopen(direccion, "at");
	//at = add text;
	if(fd==NULL){
		printf("Error al intentar localizar el archivo");
		return 1;
	}else{
		printf("\nAgregando mas contacto de email:\n");
		do{
			fflush(stdin);
			printf("\nNombre: ");gets(datos.nombre);
			printf("Apellidos: ");gets(datos.apellidos);
			printf("Email: ");gets(datos.email);
			
			fprintf(fd,"\n\nNombre: ");
			fwrite(datos.nombre,1,strlen(datos.nombre), fd);
			fprintf(fd, "\n\nApellidos: ");
			fwrite(datos.apellidos,1,strlen(datos.apellidos), fd);
			fprintf(fd,"\n\nEmail: ");
			fwrite(datos.email, 1, strlen(datos.email), fd);
			printf("Desea seguir agregando mas contactos?\n");
			scanf("%c",&rpt);
		}while(rpt=='s');
	}
	fclose(fd);
	return 0;
}
