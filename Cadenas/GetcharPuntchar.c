/*
Utilizar la funcion getchar() y putchar() para leer y imprimir un string

getchar();
Se utiliza para leer caracter a caracter. La llamada getchar()
devuelve el caracter siguiente
del flujo de entrada stdin. En caso de error o
de encontrar el fin del archivo,
devuelve EOF

putchar();
Se utiliza para escribir en la salida (stdout)
caracter a caracter que se escribe es el trasmitido como argumento
*/

#include <stdio.h>

int main(){
	int c;
	while(EOF != (c=getchar())){ //Mientras c no haya llegado al final
		putchar(c);
	}
	return 0;
}
