#include <stdio.h>
#include <string.h>

struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;
}empleados[100];


int main(){
	
	int n, i, pmay, pmen;
	float mayor =0, menor=9999999;
	
	printf("Introduce el numero de empleados:\n");
	scanf("%i", &n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Nombre:\n");
		gets(empleados[i].nombre);
		printf("Sexo:\n");
		fgets(empleados[i].sexo, 20, stdin);
		strtok(empleados[i].sexo, "\n");
		printf("Salario:\n");
		scanf("%f", &empleados[i].salario);
	}
	
	for(i=0;i<n;i++){
		if(empleados[i].salario>mayor){
			mayor=empleados[i].salario;
			pmay = i;
		}else if(empleados[i].salario<menor){
			menor = empleados[i].salario;
			pmen = i;
		}
	}
	
	printf("\n\nEl salario con mayor salario es:\n");
	printf("Nombre:%s\n", empleados[pmay].nombre);
	printf("Sexo:%s\n",empleados[pmay].sexo);
	printf("Salario:%.2f",empleados[pmay].salario);
	printf("\n\n");
	printf("Con menor salario es:\n");
	printf("Nombre:%s\n", empleados[pmen].nombre);
	printf("Sexo:%s\n",empleados[pmen].sexo);
	printf("Salario:%.2f\n", empleados[pmen].salario);

	return 0;	
}
