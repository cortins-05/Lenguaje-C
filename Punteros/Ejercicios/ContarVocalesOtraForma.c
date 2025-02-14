#include <stdio.h>

int main(){
	int c, cont=0;
	
	printf("Digite tu nombre\n");
	while((c=getchar())!='\n' ){
		switch (c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': cont++;
		}
	}
	printf("El numero de vocales es: %i", cont);
	return 0;
}

