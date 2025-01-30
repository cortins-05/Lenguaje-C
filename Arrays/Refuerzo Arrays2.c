#include <stdio.h>

int main(){
	int array[2][3][5]={1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5}, i, j, k;
	for(i=0;i<=1;i++){
		for(j=0;j<3;j++){
			for(k=0;k<5;k++){
				printf("%i", array[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
