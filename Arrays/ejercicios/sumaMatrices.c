//Sumar 2 matrices

#include <stdio.h>

int main(){
	int matriz1[2][3]={{1,2,3},{4,5,6}};
	int matriz2[2][3]={{6,5,4},{3,2,1}};
	int matrizF[2][3];
	int x, i;
	
	for(x=0;x<2;x++){
		for(i=0;i<3;i++){
			matrizF[x][i]=matriz1[x][i]+matriz2[x][i];
		}
	}
	
	for(x=0;x<2;x++){
		for(i=0;i<3;i++){
			printf("%i", matrizF[x][i]);
		}
		printf("\n");
	}
	
}
