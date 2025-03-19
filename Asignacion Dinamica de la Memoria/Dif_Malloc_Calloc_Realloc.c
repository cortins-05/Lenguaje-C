#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *hola = (int*)malloc(10*sizeof(int));
    printf("hola = %p\n", hola);
    printf("hola = %d\n", *hola);

    printf("\n");

    for(i=0;i<10;++i){
        printf("hola = %p\n", hola+i);
        printf("hola = %d\n", *hola+i);
    }

    
	printf("\n\n");

    int *adios = (int*)calloc(20, sizeof(int));
    printf("adios = %p\n", adios);
    printf("adios = %d\n", *adios);

    printf("\n");

    for(i=0;i<20;++i){
        printf("adios = %p\n", adios+i);
        printf("adios = %d\n", *adios+i);
    }

    printf("\n\n");

    int *Jorge = (int*)realloc(adios,30*sizeof(int));

    for(i=0;i<30;++i){
        printf("Jorge = %p\n", Jorge+i);
        printf("Jorge = %d\n", *Jorge+i);
    }

    free(adios);

    return 0;
}
