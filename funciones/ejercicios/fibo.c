int Fibonacci(int n){
	if(n==1||n==2){
		return 1;
	}else{
		return (Fibonacci(n-2)+Fibonacci(n-1));
	}
}

int main(){
	int n;
	scanf("%i", &n);
	printf("%i", Fibonacci(n));
	return 0;
}
