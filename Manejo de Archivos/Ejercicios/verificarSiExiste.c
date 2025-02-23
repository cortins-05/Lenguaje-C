#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
	char direccion[]="existe.txt";
	fd = fopen(direccion,"r");
	if(fd==NULL){
		printf("No existe el fichero llamado %s", direccion);
	}else{
		printf("El fichero llamado %s existe", direccion);
	}
	return 0;
}
