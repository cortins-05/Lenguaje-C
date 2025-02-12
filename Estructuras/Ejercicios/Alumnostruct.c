#include <stdio.h>
#include <string.h>

struct Direccion{
	char Calle[30];
	short numero;
	char Colonia[30];
	int CP;
};

struct Alumno{
	int numCuenta;
	char nombre[25];
	char apellido[25];
	float promedio;
	struct Direccion direccion;
};

int main(){
	
	struct Alumno Alumno1; //Creamos un nuevo alumno
	
	strcpy(Alumno1.nombre, "Lucas");
	strcpy(Alumno1.apellido, "Ortins Mendez");
	Alumno1.numCuenta = 12345;
	Alumno1.promedio = 7.7;
	strcpy(Alumno1.direccion.Calle, "Praza dos maios");
	Alumno1.direccion.numero = 4;
	Alumno1.direccion.CP = 36003;
	strcpy(Alumno1.direccion.Colonia, "Pontevedra");
	
	printf("Nombre:%s\nApellidos:%s\nNumero de cuenta:%i\nPromedio:%.2f\nCalle:%s\nNumero:%i\nCP:%i\nColonia:%s",Alumno1.nombre, Alumno1.apellido, Alumno1.numCuenta, Alumno1.promedio, Alumno1.direccion.Calle, Alumno1.direccion.numero, Alumno1.direccion.CP, Alumno1.direccion.Colonia);
	printf("\n\n");
	
	struct Alumno *apAlumno;
	apAlumno = &Alumno1;
	strcpy(apAlumno->direccion.Calle, "Roncesvalles");
	apAlumno->direccion.CP = 54321;
	strcpy(apAlumno->direccion.Colonia, "Juarez");
	apAlumno->direccion.numero = 123;
	strcpy(apAlumno->nombre, "Juan");
	
	printf("Nombre:%s\nApellidos:%s\nNumero de cuenta:%i\nPromedio:%.2f\nCalle:%s\nNumero:%i\nCP:%i\nColonia:%s",Alumno1.nombre, Alumno1.apellido, Alumno1.numCuenta, Alumno1.promedio, Alumno1.direccion.Calle, Alumno1.direccion.numero, Alumno1.direccion.CP, Alumno1.direccion.Colonia);
	
	return 0;
}
