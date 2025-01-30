//Tres dimensiones

int main(){
	
	int hola[2][2][3]={1,2,3,1,2,3,1,2,3,1,2,3}, i, j, k;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				printf("%i", hola[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
