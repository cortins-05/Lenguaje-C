#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroA(){
	return (rand() % 100) + 1;
}

int main(){
	srand(time(NULL));
	int matriz1[3][3], matriz2[3][3], i , j, final[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz1[i][j]=numeroA();
			matriz2[i][j]=numeroA();
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			final[i][j] = matriz1[i][j]+matriz2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i ", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i ", matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i ", final[i][j]);
		}
		printf("\n");
	}
	return 0;
}
