#include <stdio.h>
#include <stdlib.h>


// Definici�n de la funci�n que imprime los n�meros del 1 al 10
void imprimirNumeros() {
    int g = 1;
    // Bucle while para imprimir los n�meros del 1 al 10
    while (g <= 10) {
        // Imprime el n�mero actual y luego incrementa g
        printf("%d\n", g);
        g++;
    }
}

int main() {
    // Llama a la funci�n imprimirNumeros
    imprimirNumeros();
    return 0;
}
