#include <stdio.h>

int main(){

    int a[5]={3,1,4,2,5};
    int i, pos, aux;

    for(i=0;i<5;i++){
        pos=i;
        aux = a[i];
        while (pos>0&&aux<a[pos-1]){
            a[pos]=a[pos-1];
            pos--;
        }
        a[pos]=aux;
    }

    for(i=0;i<5;i++){
        printf("%i ", a[i]);
    }

    return 0;
}