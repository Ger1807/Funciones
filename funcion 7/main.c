#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que imprime un patr�n num�rico
void imprimirPatronNumerico() {
    int i, j;
    // Bucle for anidado para imprimir el patr�n num�rico
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            // Imprime el n�mero actual seguido de un espacio
            printf("%d ", j);
        }
        // Imprime un salto de l�nea despu�s de cada fila del patr�n
        printf("\n");
    }
}

int main() {
    // Llama a la funci�n imprimirPatronNumerico
    imprimirPatronNumerico();
    return 0;
}
