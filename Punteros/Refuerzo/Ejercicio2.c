#include <stdio.h>

int arr1[4][5][2], var, i, j, k, cont;
int *point;

int main(){
	int i;
	point = &arr1[0][0][0];
	var = 1;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			for(k=0;k<2;k++){
				arr1[i][j][k] = var;
				var += 2;
			}
		}
	}
	int a = *(point + 4);
	int b = *(point + 16);
	int c = *(point + 23);
	
	printf("Valor a: %d\nValor b: %d\nValor c: %d\n\n",a,b,c);
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			for(k=0;k<2;k++){
				printf("%i ", arr1[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	point = &arr1[0][0][0];
	for(cont=0;cont<40;cont++){
		if(cont<10){
			*(point+cont) = 4*(cont+1);
		}if(cont>=10&&cont<20){
			*(point+cont)=6*(cont-9);
		}if(cont>=20&&cont<30){
			*(point+cont)=7*(cont-19);
		}if(cont>=30&&cont<40){
			*(point+cont)=5*(cont-29);
		}
	}
	
	printf("El arreglo queda asi:\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			for(k=0;k<2;k++){
				printf("%i ", arr1[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
