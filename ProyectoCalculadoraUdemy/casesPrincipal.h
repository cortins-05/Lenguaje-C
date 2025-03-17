switch (gasto)
        {
        case 1:
            printf("Seleccionaste el metro\n\n");
            metro(ptrSueldo, ptrAcuMetro);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 2:
            printf("Seleccionaste el cablebus\n\n");
            cablebus(ptrSueldo, ptrAcuCable);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 3:
            printf("Seleccionaste la Ecobici\n\n");
            ecobici(ptrSueldo, ptrAcuEco);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 4:
            printf("Seleccionaste el rtp\n\n");
            rtp(ptrSueldo, ptrAcuRTP);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 5:
            printf("Seleccionaste el metrobus\n\n");
            metroBus(ptrSueldo, ptrAcuMBus);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 6:
            printf("Seleccionaste ruta\n\n");
            ruta(ptrSueldo, ptrAcuRuta);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 7:
            printf("Seleccionaste tren ligero\n\n");
            trenLigero(ptrSueldo, ptrAcuTren);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 8:
            printf("Seleccionaste gasolina\n\n");
            gasolina(ptrSueldo, ptrAcuGas, ptrGastoGas);
            printf("Tu sueldo actual es de %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 9:
            printf("INSTRUCCIONES: \n");
            arch = fopen("instrucciones.txt", "r+");
            if(arch == NULL){
                printf("Error al abrir el archivo\n");
                return -1;
            }while ((caracter=fgetc(arch))!=EOF){
                printf("%c", caracter);
            }
            fclose(arch);
            break;
        case 10:
            printf("Servicio\tViajes\t\tMonto Gastado\n");
            printf("Metro\t\t%d\t\t%d\n",*ptrAcuMetro, (*ptrAcuMetro*5));
            printf("Cablebus\t\t%d\t\t%d\n",*ptrAcuCable, (*ptrAcuCable*5));
            printf("EcoBici\t\t%d\t\t%d\n",*ptrAcuEco, (*ptrAcuEco*5));
            printf("RTP\t\t%d\t\t%d\n",*ptrAcuRTP, (*ptrAcuRTP*5));
            printf("MetroBus\t\t%d\t\t%d\n",*ptrAcuMBus, (*ptrAcuMBus*5));
            printf("Ruta\t\t%d\t\t%d\n",*ptrAcuRuta, (*ptrAcuRuta*5));
            printf("Tren Ligero\t\t%d\t\t%d\n",*ptrAcuTren, (*ptrAcuTren*5));
            printf("Gasolina\t\t%d\t\t%d\n",*ptrAcuGas, (*ptrAcuGas*5));
            printf("\nSu sueldo restante es: %.2f\n\n", *ptrSueldo);
            break;
        case 11:
        fd = fopen(direccion, "at");
            if(fd==NULL){
                printf("Error al crear el archivo\n");
            }
            printf("Escribe la fecha\n");
            gets(fecha);
            printf("El archivo de texto ha sido creado/actualizado\n");

            fprintf(fd,"Con el nombre de Gastos.txt\n");
            fprintf(fd,"Servicio\tViajes\t\tMonto Gastado\n");
            fprintf(fd,"Metro\t\t%d\t\t%d\n",*ptrAcuMetro, (*ptrAcuMetro*5));
            fprintf(fd,"Cablebus\t\t%d\t\t%d\n",*ptrAcuCable, (*ptrAcuCable*5));
            fprintf(fd,"EcoBici\t\t%d\t\t%d\n",*ptrAcuEco, (*ptrAcuEco*5));
            fprintf(fd,"RTP\t\t%d\t\t%d\n",*ptrAcuRTP, (*ptrAcuRTP*5));
            fprintf(fd,"MetroBus\t\t%d\t\t%d\n",*ptrAcuMBus, (*ptrAcuMBus*5));
            fprintf(fd,"Ruta\t\t%d\t\t%d\n",*ptrAcuRuta, (*ptrAcuRuta*5));
            fprintf(fd,"Tren Ligero\t\t%d\t\t%d\n",*ptrAcuTren, (*ptrAcuTren*5));
            fprintf(fd,"Gasolina\t\t%d\t\t%d\n",*ptrAcuGas, (*ptrAcuGas*5));
            fprintf(fd,"\nSu sueldo restante es: %.2f\n\n", *ptrSueldo);
            break;
        case 0:
            printf("Gracias por usar el programa\n\n");
            hola = false;
            break;
        default:
        printf("Esa no es una opcion valida");
            break;
}
