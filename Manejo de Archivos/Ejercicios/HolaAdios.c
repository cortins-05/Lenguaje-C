#include <stdio.h>
#include <stdlib.h>

FILE *fd1;
FILE *fd2;

int main(){
	char direccion1[]="uno.txt";
	char direccion2[]="dos.txt";
	fd1 = fopen(direccion1, "w");
	fd2 = fopen(direccion2, "w");
	fprintf(fd1,"Hola");
	fprintf(fd2,"Adios");
	fclose(fd1);
	fclose(fd2);
	return 0;
}
