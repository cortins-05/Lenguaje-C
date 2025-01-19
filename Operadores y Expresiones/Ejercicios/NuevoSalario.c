/* Calcular el nuevo salario de un obrero
si obtuvo un incremento del 25% sobre su salario anterior.*/

#include <stdio.h>

int main(){
    float salarioInicial,aumento,salarioFinal;
    
    printf("Introduce el salario inicial:\n");
    scanf("%f", &salarioInicial);
    
    aumento = salarioInicial * .25;
    
    salarioFinal = salarioInicial + aumento;
    
	printf("El salario final es de %.2f euros. Con un aumento de: %.2f", salarioFinal, aumento);
    
    return 0;
}
