#include <stdio.h>

int main(){

    int a[5]={3,2,1,4,5};
    char band = 'F';
    int i=0, dato = 3;

    while ((band=='F')&&i<5)
    {
        if(a[i]==dato){
            band='V';
        }
        i++;
    }
    if (band=='F'){
        printf("El numero no existe en el array\n");
    }else if (band=='V'){
        printf("El numero existe, en la posicion %i\n", i);
    }
    
    return 0;
}