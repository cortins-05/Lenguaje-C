//Fibonacci con recursividad

int Fibonacci(int n){
	if(n==0||n==1){
		return n;
	}else{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}

int main(){
	int n,i;
	printf("Introduce un numero para hacer su Fibonacci: ");
	scanf("%i", &n);
	printf("Su Fibonacci es %i", Fibonacci(n));
	return 0;
}
