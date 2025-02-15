#include <stdio.h>

int main(){
	FILE *Archivo = fopen("Prueba.txt", "a");
	if(Archivo == NULL){
		printf("Error al intentar crear/acceder al archivo\n");
	}else{
		char letra;
		while((letra=getchar())!='\n'){
			fputc(letra, Archivo);
		}
	}
	fclose(Archivo);
	
	return 0;
}
