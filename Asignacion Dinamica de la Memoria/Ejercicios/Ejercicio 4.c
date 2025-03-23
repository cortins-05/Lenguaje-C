#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont, arreglo[]={35,40,45,50,55}, variable;

    int *ptr = (int *)malloc(10*sizeof(int));
    char *ptr2 = (char *)calloc(100,sizeof(char));

    //Imprimiendo las direcciones del arreglo

    for(cont=0;cont<10;cont++){
        printf("Direccion del arreglo [%d] = %p valor arreglo [%d] = %d\n",cont,&arreglo[cont],cont,arreglo[cont]);
    }
    printf("\n");

    //Imprimiendo direcciones y contenido de un apuntador de memoria dinamica con malloc
    for(cont=0;cont<10;cont++){
        printf("Direccion del arreglo [%d] = %p valor arreglo [%d] = %d\n",cont+1,ptr+cont,cont+1,*(ptr+cont));
    }

    //Asignamos los valores de la tabla del cuatro
    for(cont=0;cont<10;cont++){
        ptr[cont]=4*(cont+1);
    }

    printf("\n");

    //Imprimimos los valores del apuntador
    for(cont=0;cont<10;cont++){
        printf("Direccion del arreglo [%d] = %p valor arreglo [%d] = %d\n",cont+1,ptr+cont,cont+1,*(ptr+cont));
    }

    //Usamos realloc para redimensionar el tamaño de ptr a 20 espacios

    ptr = (int *)realloc(ptr,20*sizeof(int));

    //Asignamos los valores de la tabla del cuatro
    for(cont=9;cont<20;cont++){
        ptr[cont]=4*(cont+1);
    }

    printf("\n");

    //Imprimimos los valores del apuntador
    for(cont=0;cont<20;cont++){
        printf("Direccion del arreglo [%d] = %p valor arreglo [%d] = %d\n",cont+1,ptr+cont,cont+1,*(ptr+cont));
    }

    free(ptr);

    return 0;
}