//Media aritm�trica 2 n�meros

#include <stdio.h>
float MediaAritmetrica(float x, float y){
	float media;
	media = (x+y)/2;
	return media;
}

int main(){
	float x,y;
	printf("Introduce dos numeros para calcular la media:\n");
	scanf("%f %f", &x, &y);
	printf("La media es: %.2f", MediaAritmetrica(x,y));
	return 0;
}
