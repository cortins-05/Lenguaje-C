// typedef structNombreDeLaEstructura{
// Variable 1,
// Variable 2,
// Variable N;
// };

#include <stdio.h>

int main(){
	//Definimos un nuevo tipo llamado "entero"
	//Esto es solo otra manera de declarar un entero
	typedef int entero;
	
	//Ahora podremos crear variables con el entero
	entero Variable1;
	//Pero tb podemos seguir usando int
	int Variable2;
	
	printf("Escribe 2 enteros:\n");
	scanf("%d %i", &Variable1, &Variable2);
	printf("\nNumeros digitados: %d y %i", Variable1, Variable2);
	
	return 0;
}
