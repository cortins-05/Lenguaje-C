#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[]="AgregarTextoArchivo.txt";
	
	fd = fopen(direccion, "at");
	if(fd==NULL){
		printf("Error al crear el archivo");
		return 1;
	}
	while((c=getchar())!= EOF){
		fputc(c,fd);
	}
	
	fclose(fd);
	return 0;
}
