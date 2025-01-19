//Multiplos de 1 hasta n de 2, 3, 5 y 7

#include <stdio.h>
int main(){
	int i, n;
	
	printf("Ingrese un num:\n");
	scanf("%i", &n);
	
	for (i=1; i<=n;i++){
		if(i%5==0 || i%2==0 || i%3==0 || i%7==0){
			printf("%i\n", i);
		}
	}
	
	return 0;
}
