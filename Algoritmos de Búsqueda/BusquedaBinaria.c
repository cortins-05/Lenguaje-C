#include <stdio.h>

int main(){

    int a[5]={1,2,3,4,5};
    int inf, sup, mitad, dato;
    char band='F';

    dato = 3;

    //Busqueda Binaria
    inf = 0;
    sup = 5;

    while (inf<=sup)
    {
        mitad = (inf+sup)/2;

        if(a[mitad]==dato){
            band='V';
            break;
        }
        if(a[mitad]>dato){
            sup = mitad;
            mitad=(inf+sup)/2;
        }
        if(a[mitad]<dato){
            inf = mitad;
            mitad=(inf+sup)/2;
        }

    }
    
    if(band=='F'){
        printf("El numero no existe en el array\n");
    }else{
        printf("El numero existe en la posicion: %i\n", mitad);
    }

    return 0;
}