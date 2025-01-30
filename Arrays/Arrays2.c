//Tipo_De_Dato Nombre_Del_Array[tamaño] = {Valor1, Valor2, ..., Valorn}

#include <stdio.h>

int main(){
	int array[3]={24,05,96};
	printf("\nPrimer valor: %i", array[0]);
	printf("\nSegundo valor: %i", array[1]);
	printf("\nTercer valor: %i", array[2]);
	
	//Tambien podemos manipular el valor
	array[0]=54;
	printf("\nEl nuevo valor es: %i", array[0]);
	return 0;
}
