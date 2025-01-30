//Entero a Binario

void Binario(int numero){
	if(numero>1){
		Binario(numero/2);
	}
	printf("%i", numero%2);
}

int main(){
	int n;
	printf("Introduce un numero para pasar a binario: ");
	scanf("%i", &n);
	Binario(n);
	return 0;
}
