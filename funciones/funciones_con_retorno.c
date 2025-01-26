//Sumar dos numeros
int Sumar();
int suma=0, a, b;

int main(){
	printf("Escribe 2 numeros\n");
	scanf("%d %d", &a, &b);
	suma = Sumar(a,b);
	printf("La suma es %d", suma);
	return 0;
}

int Sumar(int n1, int n2){
	int suma = 0;
	suma = n1 + n2;
	return suma;
}
