#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
	int c;
	char direccion[]="copiarArchivo.txt";
	fd = fopen(direccion,"w");
	
	if(fd==NULL){
		printf("Error al abrir al archivo");
	}
	
	while(EOF!=(c=getchar())){
		fputc(c,fd);
	}
	
	return 0;
}
