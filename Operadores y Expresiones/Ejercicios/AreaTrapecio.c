// * Ejercicio Area Trapecio

#include <stdio.h>

int main() {
    
    float BaseMayor, BaseMenor, h, area;
    
    printf("Este ejercicio trata de calcular el area de un trapecio\nIntroduce la base mayor, la base menor y la altura en ese orden:\n");
    scanf("%f %f %f", &BaseMayor, &BaseMenor, &h);
	
	area = ((BaseMayor+BaseMenor)*h)/2;
	
	printf("El area es %.2f", area);

    return 0;
}
