#include <stdio.h>
#include <stdlib.h>

// Función para comparar dos cadenas de texto
int sonIguales(const char *cadena1, const char *cadena2) {
    // Mientras que los caracteres sean iguales y no se llegue al final de alguna cadena
    while (*cadena1 != '\0' && *cadena2 != '\0') {
        if (*cadena1 != *cadena2) {
            // Si los caracteres son diferentes, devuelve 0
            return 0;
        }
        // Avanza al siguiente caracter en ambas cadenas
        cadena1++;
        cadena2++;
    }
    // Comprueba si ambos llegaron al final de la cadena
    return *cadena1 == '\0' && *cadena2 == '\0';
}

int main() {
    // Dos arrays para almacenar las cadenas de texto ingresadas por el usuario
    char texto1[100];
    char texto2[100];

    // Solicita al usuario que ingrese las dos cadenas de texto
    printf("Ingrese la primera cadena de texto: ");
    fgets(texto1, 100, stdin);
    // Elimina el salto de línea al final de la cadena
    if (texto1[0] != '\n') {
        int i = 0;
        while (texto1[i] != '\n' && texto1[i] != '\0') {
            i++;
        }
        texto1[i] = '\0';
    }

    printf("Ingrese la segunda cadena de texto: ");
    fgets(texto2, 100, stdin);
    // Elimina el salto de línea al final de la cadena
    if (texto2[0] != '\n') {
        int i = 0;
        while (texto2[i] != '\n' && texto2[i] != '\0') {
            i++;
        }
        texto2[i] = '\0';
    }

    // Llamada a la función y muestra el resultado
    if (sonIguales(texto1, texto2)) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas no son iguales.\n");
    }

    return 0;
}


