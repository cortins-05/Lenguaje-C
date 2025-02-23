#include <stdlib.h>
#include <stdio.h>

FILE *fd;

struct datosPersonales{
	char nombre[20];
	char apellidos[20];
	char celular[20];
}datos;

void Crear(){
	char direccion[]="Celular.txt";
	char rpt;
	fd = fopen(direccion, "w+");
	if(fd==NULL){
		printf("Error al crear el archivo");
		return 1;
	}
	printf("\n\t:Creando Directorio de Contactos.\n");
	fprintf(fd,"\t:Directorio Telefonico\n");
	do{
		fflush(stdin);
		printf("Introduce el nombre:\n");gets(datos.nombre);
		printf("Apellidos:\n");gets(datos.apellidos);
		printf("Celular:\n");gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nCelular: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos:\n");
		scanf("%c", &rpt);
	}while(rpt=='s');
	fclose(fd);
}

void Agregar(){
	char direccion[]="Celular.txt";
	char rpt;
	fd = fopen(direccion, "a");
	if(fd==NULL){
		printf("Error al crear el archivo");
		return 1;
	}
	printf("\n\t:Creando Directorio de Contactos.\n");
	do{
		fflush(stdin);
		printf("Introduce el nombre:\n");gets(datos.nombre);
		printf("Apellidos:\n");gets(datos.apellidos);
		printf("Celular:\n");gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nCelular: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos:\n");
		scanf("%c", &rpt);
	}while(rpt=='s');
	fclose(fd);
}

void Vaciar(){
	char direccion[]="Celular.txt";
	fd = fopen(direccion, "w");
	fclose(fd);
}

void Visualizar(){
	int c;
	char direccion[]="Celular.txt";
	fd=fopen(direccion, "r");
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	while((c=fgetc(fd))!=EOF){
		if(c =='\n'){
			printf("\n");
		}else{
			putchar(c);
		}
	}
	printf("\n\n");
	fclose(fd);
}

int main(){
	int opc=0;
	
	do{
		printf("1)Crear contactos\n2)Agregar contactos\n3)Borrar contactos\n4)Ver contactos\n");
		scanf("%i", &opc);
		switch(opc){
			case 1:
				Crear();
				break;
			case 2:
				Agregar();
				break;
			case 3:
				Vaciar();
				break;
			case 4:
				Visualizar();
				break;
			case 99:
				printf("Adios");
				break;
			default:
				printf("Introduce una opcion valida");
				break;
		}
	}while(opc!=99);
	
	
	return 0;
}
