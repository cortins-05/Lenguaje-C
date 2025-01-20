//strcmp(Cadena1, Cadena2)
//Compara 2 cadenas de texto carácter a carácter, es sensible a mayúsculas y minúsculas
//Cuando se encuentra una diferencia esta función devuelve un valor entero
//el cual corresponde a la diferencia del valor decimal en código ASCII. La tabla sería:

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
		
		//Validacion de contraseña
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
