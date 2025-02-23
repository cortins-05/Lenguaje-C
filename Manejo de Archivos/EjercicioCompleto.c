#include <stdio.h>
#include <stdlib.h>

FILE *fd;

struct datosPersonales{
	char nombre[20];
	char apellidos[20];
	char email[30];
}datos;

void crear(){
	char direccion[]="guardarD.txt";
	char rpt;
	fd = fopen(direccion,"wt");
	
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	printf("\n\t.:Creando Directorio de Email:.");
	fprintf(fd, "\tDirectorio de Email");
	
	do{
		fflush(stdin);
		printf("\nNombre:");gets(datos.nombre);
		printf("\nApellidos: ");gets(datos.apellidos);
		printf("\nEmail:");gets(datos.email);
		
		fprintf(fd, "\n\nNombre:");
		fwrite(datos.nombre, 1, strlen(datos.nombre),fd);
		fprintf(fd, "\nApellidos:");
		fwrite(datos.apellidos, 1, strlen(datos.apellidos),fd);
		fprintf(fd, "\nEmail:");
		fwrite(datos.email, 1, strlen(datos.email),fd);
		printf("Desea agregar más contacto(s):");
		scanf("%c",&rpt);
	}while(rpt=='s');
	fclose(fd);
}

void agregar(){
	char direccion[] = "guardarD.txt";
	char rpt;
	fd = fopen(direccion, "at");
	
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	printf("\n\tAgregando más contactos:\n");
	do{
		fflush(stdin);
		printf("\nNombre:");gets(datos.nombre);
		printf("\nApellidos: ");gets(datos.apellidos);
		printf("\nEmail:");gets(datos.email);
		
		fprintf(fd, "\n\nNombre:");
		fwrite(datos.nombre, 1, strlen(datos.nombre),fd);
		fprintf(fd, "\nApellidos:");
		fwrite(datos.apellidos, 1, strlen(datos.apellidos),fd);
		fprintf(fd, "\nEmail:");
		fwrite(datos.email, 1, strlen(datos.email),fd);
		printf("Desea agregar más contacto(s):");
		scanf("%c",&rpt);
	}while(rpt=='s');
	fclose(fd);
}

void visualizar(){
	int c;
	char direccion[] = "guardarD.txt";
	fd = fopen(direccion, "r");
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	printf("\n\tVisualizando contactos\n\n");
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}else{
			putchar(c);
		}
	}
	printf("\n\n");
	fclose(fd);
}

int main(){
	int opc;
	
	do{
		printf("\n\t:Menu:.");
		printf("\n1. Crear");
		printf("\n2. Agregar mas contactos");
		printf("\n3. Visualizar contactos existentes");
		printf("\n4. Salir\n");
		scanf("%i", &opc);
		
		switch(opc){
			case 1: crear(); break;
			case 2: agregar(); break;
			case 3: visualizar();break;
		}
	}while(opc!=4);
	
	return 0;	
	
}
