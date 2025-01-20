//strcpy(destino, fuente)
//Permite copiar una cadena de texto a otra. Debes considerar la dimensión del array, el destino debe ser
//mayor o igual al array de origen y además se sobreescribe su contenido (si lo tiene)

#include <stdio.h>
#include <string.h>

int main(){
	
	char Origen[]="Programacion";
	//Dado que el origen tiene 12 caracteres
	//creamos el array del destino con la misma dimensión
	
	char Destino[12];
	//Copiamos y mostramos
	strcpy(Destino, Origen);
	printf("%s", Destino);
	
	return 0;
	
}
