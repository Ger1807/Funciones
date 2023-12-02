#include <stdio.h>
#include <stdlib.h>

// Definición de la función que imprime un patrón numérico
void imprimirPatronNumerico() {
    int i, j;
    // Bucle for anidado para imprimir el patrón numérico
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            // Imprime el número actual seguido de un espacio
            printf("%d ", j);
        }
        // Imprime un salto de línea después de cada fila del patrón
        printf("\n");
    }
}

int main() {
    // Llama a la función imprimirPatronNumerico
    imprimirPatronNumerico();
    return 0;
}
