//Estructuras anidadas
#include <stdio.h>

struct infoDireccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct infoDireccion dirEmpleado;
	double salario;
}empleados[2];

int main(){
	int i;
	for(i=0; i<2; i++){
		fflush(stdin);
		
		printf("\nEscribe tu nombre:\n");
		gets(empleados[i].nombre);
		printf("Escribe tu direccion:\n");
		gets(empleados[i].dirEmpleado.direccion);
		printf("Escribe tu ciudad:\n");
		gets(empleados[i].dirEmpleado.ciudad);
		printf("Escribe tu provincia:\n");
		gets(empleados[i].dirEmpleado.provincia);
		printf("Escribe tu salario:\n");
		scanf("%lf", &empleados[i].salario);
		printf("\n");
	}
	
	for(i=0; i<2;i++){
		printf("\nDatos del empleado numero %i:\nNombre:%s\nDireccion:%s\nCiudad:%s\nProvincia:%s\nSalario:%.2lf\n", i+1, empleados[i].nombre, empleados[i].dirEmpleado.direccion, empleados[i].dirEmpleado.ciudad, empleados[i].dirEmpleado.provincia, empleados[i].salario);
	}
	
	
	return 0;
}
