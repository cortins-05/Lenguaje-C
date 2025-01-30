//Cuenta regresiva

void CuentaRegresiva(int n){
	printf("%i ", n);
	if(n==0){
		printf("\nListo");
	}else{
		CuentaRegresiva(n-1);
	}
}

int main(){
	int numero;
	printf("Introduce un numero:\n");
	scanf("%i", &numero);
	CuentaRegresiva(numero);
	return 0;
}
