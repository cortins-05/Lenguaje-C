/*
Sentencia switch()

switch (selecciona){
	case 1: opcion 1; break;
	case 2: opcion 2; break;
	case 3: opcion 3; break;
	case 4: opcion 4; break;
	case 5: opcion 5; break;
	default: ninguna de las anteriores; break;
}
*/

int main(){
	
	int dia;
	
	puts("Selecciona un numero de los dias de la semana (1 al 7):");
	scanf("%i", &dia);
	
	switch(dia){
	case 1: printf("Seleccionaste el lunes.\n");
	break;
	case 2: printf("Seleccionaste el martes.\n"); 
	break;
	case 3: printf("Seleccionaste el miercoles.\n"); 
	break;
	case 4: printf("Seleccionaste el jueves.\n"); 
	break;
	case 5: printf("Seleccionaste el viernes.\n"); 
	break;
	case 6: printf("Seleccionaste el sabado.\n"); 
	break;
	case 7: printf("Seleccionaste el domingo.\n"); 
	break;
	default: printf("Introduce un parametro valido\n"); 
	break;	
	}
	
	char letra;
    puts("Introduce una letra (a, b, c, d):");
    scanf(" %c", &letra); // Nota el espacio antes de %c para evitar problemas con el buffer

    switch(letra) {
        case 'a': printf("Seleccionaste la %c\n", letra); break;
        case 'b': printf("Seleccionaste la %c\n", letra); break;
        case 'c': printf("Seleccionaste la %c\n", letra); break;
        case 'd': printf("Seleccionaste la %c\n", letra); break;
        default: printf("Letra no válida.\n"); break;
    }

    return 0;
}
