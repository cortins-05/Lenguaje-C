//Convertir grados celsius a grados fahrenheit

#include <stdio.h>

int main(){
    float gradosCelsius,gradosFahrenheit;
    
    printf("Introduce los grados en Celsius:\n");
    scanf("%f", &gradosCelsius);
    
    gradosFahrenheit = (gradosCelsius*9/5) + 32;
    printf("Los grados introducidos (%.2f) son %.2f grados Fahrenheit.", gradosCelsius, gradosFahrenheit);
	
	return 0;
}


