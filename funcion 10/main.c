#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que imprime un patr�n num�rico inverso
void imprimirPatronInverso() {
    int i, j;
    // Bucle for descendente para imprimir el patr�n num�rico inverso
    for (i = 5; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            // Imprime el n�mero actual seguido de un espacio
            printf("%d ", j);
        }
        // Imprime un salto de l�nea despu�s de cada fila del patr�n
        printf("\n");
    }
}

int main() {
    // Llama a la funci�n imprimirPatronInverso
    imprimirPatronInverso();
    return 0;
}

