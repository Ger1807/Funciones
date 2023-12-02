#include <stdio.h>
#include <stdlib.h>


// Definición de la función que imprime los números del 1 al 10
void imprimirNumeros() {
    int g = 1;
    // Bucle while para imprimir los números del 1 al 10
    while (g <= 10) {
        // Imprime el número actual y luego incrementa g
        printf("%d\n", g);
        g++;
    }
}

int main() {
    // Llama a la función imprimirNumeros
    imprimirNumeros();
    return 0;
}
