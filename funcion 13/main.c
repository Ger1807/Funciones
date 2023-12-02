#include <stdio.h>
#include <stdlib.h>

// Definición de la función que genera la secuencia Fibonacci
void generarFibonacci(int n) {
    int primero = 0, segundo = 1, siguiente, i;
    // Imprime los dos primeros términos de la secuencia
    if (n >= 1) printf("%d ", primero);
    if (n >= 2) printf("%d ", segundo);
    // Bucle for para generar los términos restantes
    for (i = 3; i <= n; i++) {
        siguiente = primero + segundo; // Calcula el siguiente término
        printf("%d ", siguiente); // Imprime el término actual
        primero = segundo; // Actualiza el valor de 'primero'
        segundo = siguiente; // Actualiza el valor de 'segundo'
    }
    printf("\n"); // Imprime un salto de línea al final
}

int main() {
    int n;
    // Solicita al usuario que introduzca el número de términos
    printf("Introduce el numero de terminos de la secuencia Fibonacci: ");
    scanf("%d", &n);
    // Llama a la función generarFibonacci con el número de términos
    generarFibonacci(n);
    return 0;
}
