#include <stdio.h>
#include <string.h>

int main(){
	
	FILE* Archivo= fopen("Archivo.txt", "r");
	int Apariciones=0;
	if (Archivo==NULL){
		printf("Error al abrir el archivo");
	}else{
		char TextoRecibido[1000];
		char PalabraBuscada[]="Jorge";
		while (fscanf(Archivo, "%s", TextoRecibido)!=EOF){
			if(strcmp(TextoRecibido, PalabraBuscada)==0){
				Apariciones++;
			}
		}
	}
	fclose(Archivo);
	printf("\nApariciones son: %d", Apariciones);
	
	return 0;
}
