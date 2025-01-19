#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9


int main(){
	float tarifaluz, kwxh;
	
	printf("Cuantos kw gastas en tu casa\n");
	scanf("%f", &kwxh);
	
	if (kwxh<1000){
		tarifaluz = TARIFA1;
	}else if(kwxh>=1000 && kwxh <= 1850){
		tarifaluz = TARIFA2;
	}else{
		tarifaluz = TARIFA3;
	}
	
	printf("La tarifa aplicada es de %.2f", tarifaluz);
	
	return 0;
}
