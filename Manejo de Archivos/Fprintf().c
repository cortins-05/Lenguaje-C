#include <stdio.h>

int main(){
	
	//Creamos el apuntador y lo igualamos a lo que devuelve fopen
	//Recuerda que el archivo no existe y se creara automaticamente
	
	FILE *Archivo = fopen("Prueba.txt", "a");
	
	if(Archivo==NULL){
		printf("Error al intentar crear el archivo");
	}else{
		//Definimos un texto y lo escribimos en el archivo
		char Texto[] = "Hola Mundo";
		fprintf(Archivo, "Texto Escrito: %s",Texto);
	}
	
	//Pase lo que pase, cerramos el archivo
	fclose(Archivo);
	return 0;
}
