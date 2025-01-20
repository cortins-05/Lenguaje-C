//strcmp(Cadena1, Cadena2)
//Compara 2 cadenas de texto car�cter a car�cter, es sensible a may�sculas y min�sculas
//Cuando se encuentra una diferencia esta funci�n devuelve un valor entero
//el cual corresponde a la diferencia del valor decimal en c�digo ASCII. La tabla ser�a:

//? Si cadena es	Entonces devuelve
//? Iguales					0
//? Mayor que cadena2		n>0
//? Menor que cadena2		n<0

#include <stdio.h>
#include <string.h>

int main(){
	char ClaveSecreta[]="hola";
	char UsuarioDigito[128];
	int IntentosRestantes=3;
	
	do{
		printf("\n\n Escribe la clave secreta:");
		fflush(stdin);
		scanf("%s", &UsuarioDigito);
		
		//Validacion de contrase�a
		if(strcmp(ClaveSecreta, UsuarioDigito)==0){
			printf("Bienvenido al sistema");
			break;
		}else{
			IntentosRestantes--;
			printf("Clave secreta incorrecta, le quedan %i intentos", IntentosRestantes);
		}
	}while(IntentosRestantes > 0);
	
	return 0;
}
