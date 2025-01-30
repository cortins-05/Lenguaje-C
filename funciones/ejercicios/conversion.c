void Conversion(int n){
	if(n>1){
		Conversion(n/2);
	}
	printf("%i", n%2);
}

int main(){
	int n;
	scanf("%i", &n);
	Conversion(n);
	return 0;
}
