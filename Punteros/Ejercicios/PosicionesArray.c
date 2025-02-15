#include <stdio.h>

int main(){
	
	int i, n[]={1,2,3,4,5,6,7,8,9,10};
	int *p_n;
	p_n= &n[0]; //== p_n=n
	
	for(i=0;i<10;i++){
		printf("Dato:%i\n",*p_n);
		printf("Posicion:%p\n", p_n);
		printf("\n\n");
		p_n++;
	}
	
	return 0;
}
