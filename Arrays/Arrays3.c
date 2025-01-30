//Arreglos parte 2

int main(){
	int array[10],i;
	
	for(i=0; i<=9; i++){
		printf("\nEscribe un valor:");
		scanf("%i", &array[i]);
	}
	int indice = -1;
	while(++indice < 10){
		printf("%i", array[indice]);
	}
}
