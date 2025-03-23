#include "Alumno.h"

int main(){

    int i;

    printf("Tamanio estructura de alumno %d", sizeof(Alumno));
    Alumno *din1, *din2, *din3;

    din1 = (Alumno *)malloc(5*sizeof(Alumno));
    din2 = (Alumno*)calloc(5,sizeof(Alumno));

    printf("Primer Apuntador\n");
    for(i=0;i<5;i++){
        printf("Direccion [%d] = %p\n", i, din1+i);

    }printf("\n");

    for(i=0;i<5;i++){
        printf("Direccion [%d] = %p\n", i, din2+i);

    }printf("\n");

    printf("Con realloc\n");
    din3 = (Alumno*)realloc(din2,10*sizeof(Alumno));
    for(i=0;i<10;i++){
        printf("Direccion [%d] = %p\n", i, din3+i);

    }printf("\n");

    llenarAlumno(din1);
    llenarAlumno(din2);

    printf("\n");
    printf("Datos Alumno1\n");
    printf("Nombre Alumno: %s", din1->nombre);
    printf("Apellido Alumno: %s", din1->apellido);
    printf("Numero de cuenta: %d\n", din1->numeroCuenta);
    printf("Promedio: %.2f\n",din1->promedio);

    printf("\n");
    printf("Datos Alumno2\n");
    printf("Nombre Alumno: %s", din2->nombre);
    printf("Apellido Alumno: %s", din2->apellido);
    printf("Numero de cuenta: %d\n", din2->numeroCuenta);
    printf("Promedio: %.2f\n",din2->promedio);

    din1 = (Alumno*)realloc(din1,0);
    free(din2);

    return 0;
}

void llenarAlumno(Alumno *din){
    printf("Llena los datos del alumno\n");
    printf("Escribe su nombre\n");
    fflush(stdin);
    fgets(din->nombre,sizeof(din->nombre),stdin);
    printf("Escribe el apellido\n");
    fgets(din->apellido,sizeof(din->apellido),stdin);
    printf("Escribe su numero de cuenta:\n");
    fflush(stdin);
    scanf("%d",&din->numeroCuenta);
    printf("Escribe su promedio:\n");
    fflush(stdin);
    scanf("%f",&din->promedio);
    fflush(stdin);
    printf("Numero de domicilio:\n");
    scanf("%d",&din->domicilio.num);
    crearAlumno(din->numeroCuenta,din->nombre,din->apellido,din->promedio,din->domicilio.num);
    imprimirAlumno(*din);
}