#include <stdlib.h>
#include <stdio.h>

#define TOPE 1000

int main(){
	int i;
    double *p_array;
    p_array = malloc(TOPE*sizeof(double));

    if(p_array==NULL){
        printf("No se pudo crear el array\n");
        return -1;
    }else{
        srand(time(NULL));
        for(i=0;i<TOPE;i++){
            p_array[i] = 1+rand()%((TOPE+1)-1);
            printf("%1f.\n",p_array[i]);
        }
    }

    return 0;
}
