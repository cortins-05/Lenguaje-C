#include <stdio.h>

int main(){

    int i,j;

    //Conjunto de datos a ordenar
    int array[10]={10,20,11,13,14,16,18,19,12,15};

    //Variable temporal para cambiar los valores de lugar
    int temp;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(array[i]<array[j]){
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    //Mostramos los datos
    for(i=0;i<10;i++){
        printf("%i ", array[i]);
    }

    return 0;
}