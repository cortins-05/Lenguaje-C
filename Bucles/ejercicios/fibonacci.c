#include <stdio.h>
int main(){
	int i, num, x=0, y=1, z=1;
	printf("Introduce un numero:\n");
	scanf("%i", &num);
	
	for(i=1; i<num; i++){
		z=x+y;
		x=y;
		y=z;
		printf("%i ", z);
	}
	
	return 0;
}
