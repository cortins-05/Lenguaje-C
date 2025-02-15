/*

fopen(nombre, archivo, modo), para determinar si existe un archivo de texto (.txt).

	nombre archivo = cadena
	modo = cadena

*/

#include <stdio.h>

int main(){
	
	FILE *fd;
	char direccion[] = "prueba.txt";
	fd = fopen(direccion, "r");
	if(fd==NULL){
		printf("El archivo no existe");
	}else{
		printf("Se encontro el archivo");
	}
	
	return 0;
}

