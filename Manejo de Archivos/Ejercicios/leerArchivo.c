#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[]="copiarArchivo.txt";
	fd = fopen(direccion,"rt");
	if(fd==NULL){
		printf("Error al abrir el archivo");
	}
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}else{
			putchar(c);
		}
	}
	return 0;
}
