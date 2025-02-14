#include <stdio.h>



int main(){
	
	int var1;
	float var2;
	char var3;

	int *punt1;
	punt1 = &var1;

	float *punt2;
	punt2 = &var2;

	char *punt3;
	punt3 = &var3;
	
	printf("La primera variable esta en:%p\n", punt1);
	printf("La segunda variable esta en:%p\n", punt2);
	printf("La tercera variable esta en:%p\n", punt3);
	
	
	return 0;
}
