#include <stdio.h>
#include <string.h>

struct empleado{
	char nombre[20], sexo[20];
	float salario;
}empleados[100];

int main(){
	int numeroEmpleados,i;
	printf("Introduce el número de empleados:\n");
	scanf("%i", &numeroEmpleados);
	
	for(i=0;i<numeroEmpleados;i++){
		fflush(stdin);
		printf("Empleado %i\n", i+1);
		printf("Ingrese el nombre del empleado:\n");
		fgets(empleados[i].nombre, 20, stdin);
		strtok(empleados[i].nombre, "\n");
		printf("Ingrese el sexo del empleado:\n");
		gets(empleados[i].sexo);
		strtok(empleados[i].sexo, "\n");
		printf("Introduce el salario del empleado:\n");
		scanf("%f", &empleados[i].salario);
	}
	int posicionMayorSalario, posicionMenorSalario;
	float mayorSalario=0, menorSalario=10000000000000;
	for(i=0;i<numeroEmpleados;i++){
		if(empleados[i].salario>mayorSalario){
			mayorSalario = empleados[i].salario;
			posicionMayorSalario = i;
		}else if(empleados[i].salario<menorSalario){
			menorSalario = empleados[i].salario;
			posicionMenorSalario = i;
		}
	}
	
	printf("El empleado con menor salario es:\n");
	printf("Nombre:%s\n", empleados[posicionMenorSalario].nombre);
	printf("Sexo: %s\n", empleados[posicionMenorSalario].sexo);
	printf("Salario:%.2f\n",menorSalario);
	printf("\n\n");
	printf("El empleado con mayor salario es:\n");
	printf("Nombre:%s\n", empleados[posicionMayorSalario].nombre);
	printf("Sexo:%s\n", empleados[posicionMayorSalario].sexo);
	printf("Salario:%.2f\n",mayorSalario);
	
	return 0;
}
