#include <stdio.h>
#include <stdlib.h>

// Funci�n para imprimir un patr�n de asteriscos
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
        // Salto de l�nea despu�s de cada fila
        printf("\n");
    }
}

int main() {
    // Variable para almacenar el n�mero de filas
    int filas;

    // Solicita al usuario que ingrese el n�mero de filas
    printf("Ingrese el numero de filas para el patron: ");
    scanf("%d", &filas);

    // Llamada a la funci�n y muestra el patr�n
    imprimirPatron(filas);

    return 0;
}
