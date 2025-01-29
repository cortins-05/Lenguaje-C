#include <stdio.h>

int Par();

int main(){
	int n;
	printf("Introduce un numero: ");
	scanf("%i", &n);
	if(Par(n)==0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
}

int Par(int n){
	if(n==0){
		return 0;
	}else if(n%2==0){
		return 0;
	}else{
		return 1;
	}
}
