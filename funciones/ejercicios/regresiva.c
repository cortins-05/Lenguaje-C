//Numeros del n al 1

void Imprimir_N(int n){
	printf("\n%i", n);
	if(n>=1){
		Imprimir_N(n-1);
	} 
}

int main(){
	int n;
	printf("Introduce un numero:\n");
	scanf("%i",&n);
	Imprimir_N(n);
	return 0;
}
