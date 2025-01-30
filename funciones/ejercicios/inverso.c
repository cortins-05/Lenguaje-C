//Invertir numero

void Invertir(int n){
	printf("%i", n%10);
	if(n>9) Invertir(n/10);
}

int main(){
	int n;
	printf("Introduce:\n");
	scanf("%i", &n);
	Invertir(n);
	return 0;
}
