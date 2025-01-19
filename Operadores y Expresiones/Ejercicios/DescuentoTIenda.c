/* Una tienda ofrece un descuento del 15% sobre el total de la compra y
un cliente desea saber cuanto debera pagar finalmente por su compra.*/

#include <stdio.h>

int main(){
    float precioInicial,descuento,precioFinal;
	
	printf("Introduce el precio de la compra:\n");
	scanf("%f", &precioInicial);
	
	descuento = precioInicial * .15;
	
	precioFinal = precioInicial - descuento;
	
	printf("El precio final es %.2f y se descontaron %.2f euros", precioFinal, descuento);

	return 0;
}
