//Digite un numero, si el numero supera 10, multiplique los 10 primeros numeros, sino, sumelos
#include <stdio.h>
int main(){
	int num, i;
	printf("Digite un num:\n");
	scanf("%i", &num);
	if (num>10){
		for(i=1;i<=10;i++){
			num*=i;
			printf("El numero va por %i\n", num);
		}
	}else{
		for(i=1;i<=10;i++){
			num+=i;
			printf("El numero va por %i\n", num);
		}
	}
}
