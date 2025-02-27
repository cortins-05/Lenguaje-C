#include <stdio.h>

FILE *fd;

int main() {
    char direccion[] = "hola.txt";
    char texto[200];
    
    fd = fopen(direccion, "at");
    if (fd == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    // Loop to keep reading text until user decides to exit
    while (1) {
        printf("Introduce texto (o escribe 'salir' para terminar):\n");
        fgets(texto, 200, stdin);
        
        // Check if the user entered "salir" to stop the program
        if (strncmp(texto, "salir", 5) == 0) {
            break;
        }
        
        fprintf(fd, "%s", texto);
    }

    // Close the file
    fclose(fd);
    printf("Archivo guardado correctamente.\n");
    
    return 0;
}

