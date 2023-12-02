#include <stdio.h>
#include <stdlib.h>

// Definición de la función que imprime un patrón numérico inverso
void imprimirPatronInverso() {
    int i, j;
    // Bucle for descendente para imprimir el patrón numérico inverso
    for (i = 5; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            // Imprime el número actual seguido de un espacio
            printf("%d ", j);
        }
        // Imprime un salto de línea después de cada fila del patrón
        printf("\n");
    }
}

int main() {
    // Llama a la función imprimirPatronInverso
    imprimirPatronInverso();
    return 0;
}

