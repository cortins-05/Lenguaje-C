#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Direccion
{
    char calle[20];
    int num;
    char colonia[20];
    int cPostal;
}Direccion;

typedef struct Alumno
{
    int numeroCuenta;
    char nombre[15];
    char apellido[15];
    float promedio;
    Direccion domicilio;
}Alumno;

Alumno crearAlumno(int numeroCuenta, char* nombre, char* apellido, float promedio, int numCalle){
    Alumno alumnoCreado;
    alumnoCreado.numeroCuenta = numeroCuenta;
    strcpy(alumnoCreado.nombre, nombre);
    strcpy(alumnoCreado.apellido, apellido);
    alumnoCreado.promedio = promedio;
    alumnoCreado.domicilio.num = numCalle;
    return alumnoCreado;
}
void imprimirAlumno(Alumno alumnoPrint){
    printf("Numero de cuenta: %d\n", alumnoPrint.numeroCuenta);
    printf("Nombre: %s\n", alumnoPrint.nombre);
    printf("Apellidos: %s\n", alumnoPrint.apellido);
    printf("Promedio: %.2f\n\n\n", alumnoPrint.promedio);
    printf("Num Calle: %d\n", alumnoPrint.domicilio.num);
}


