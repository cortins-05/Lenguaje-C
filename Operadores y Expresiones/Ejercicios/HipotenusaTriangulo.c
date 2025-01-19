/* Sacar la hipotenusa de un triangulo rectangulo,
pidiendo al usuario el valor de los 2 catetos*/

#include <stdio.h>
#include <math.h>

int main(){
    float cateto1,cateto2,hipotenusa;
    
    printf("Introduce los dos catetos de un triangulo para calcular su hipotenusa:\n");
    scanf("%f %f", &cateto1, &cateto2);
    
    hipotenusa = sqrt(pow(cateto1, 2)+pow(cateto2, 2));
    
    printf("La hipotenusa es de %.2f", hipotenusa);

    return 0;
}
