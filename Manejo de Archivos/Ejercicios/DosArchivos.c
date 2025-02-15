#include <stdio.h>
#include <stdlib.h>

FILE *fd1, *fd2;

int main(){
	fd1=fopen("Archivo1.txt", "at");
	fd2=fopen("Archivo2.txt", "at");
	
	if(fd1==NULL||fd2==NULL){
		printf("Error al crear los archivos");
		return 1;
	}else{
		printf("Exito al crear los archivos");
	}
	
	fclose(fd1);
	fclose(fd2);
	return 0;
}
