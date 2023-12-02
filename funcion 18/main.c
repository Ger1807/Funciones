#include <stdio.h>
#include <stdlib.h>

// Función para imprimir un patrón de asteriscos
void imprimirPatron(int filas) {
    // Bucle externo para las filas
    for (int i = 1; i <= filas; i++) {
        // Bucle interno para los espacios
        for (int j = filas; j > i; j--) {
            // Imprime un espacio
            printf(" ");
        }
        // Bucle interno para los asteriscos
        for (int k = 1; k <= (2 * i - 1); k++) {
            // Imprime un asterisco
            printf("*");
        }
        // Salto de línea después de cada fila
        printf("\n");
    }
}

int main() {
    // Variable para almacenar el número de filas
    int filas;

    // Solicita al usuario que ingrese el número de filas
    printf("Ingrese el numero de filas para el patron: ");
    scanf("%d", &filas);

    // Llamada a la función y muestra el patrón
    imprimirPatron(filas);

    return 0;
}
