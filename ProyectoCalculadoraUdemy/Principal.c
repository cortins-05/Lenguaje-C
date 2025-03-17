#include "librerias.h"
#include "declaracionesVariables.h"

int main()
{
    #include "asignacionApuntadores.h"

    printf("****Bienvenido a tu calculadora de Gastos****\n\n");
    printf("Ingrese su sueldo mensual: ");
    scanf("%f", &sueldo);

    printf("\nQue desea hacer?\n");

    while (hola)
    {
        printf("\n1)Entrar al metro\n2)Usar el CableBus\n3)Rentar una EcoBici\n4)Usar el rtp\n5)Entrar en el metrobus\n6)Usar la ruta\n7)Entrar en el tren ligero\n8)Cargar gasolina\n9)Ver instrucciones\n10)Ver gastos\n11)Imprimir gastos en archivo txt\n0)Salir del programa\nOpcion: ");

        scanf("%d", &gasto);
        scanf("%c", &letra);

        if(letra){
            printf("\n\n");
        }
        #include "casesPrincipal.h"
	}

    return 0;
}
