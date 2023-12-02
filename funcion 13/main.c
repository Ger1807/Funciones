#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que genera la secuencia Fibonacci
void generarFibonacci(int n) {
    int primero = 0, segundo = 1, siguiente, i;
    // Imprime los dos primeros t�rminos de la secuencia
    if (n >= 1) printf("%d ", primero);
    if (n >= 2) printf("%d ", segundo);
    // Bucle for para generar los t�rminos restantes
    for (i = 3; i <= n; i++) {
        siguiente = primero + segundo; // Calcula el siguiente t�rmino
        printf("%d ", siguiente); // Imprime el t�rmino actual
        primero = segundo; // Actualiza el valor de 'primero'
        segundo = siguiente; // Actualiza el valor de 'segundo'
    }
    printf("\n"); // Imprime un salto de l�nea al final
}

int main() {
    int n;
    // Solicita al usuario que introduzca el n�mero de t�rminos
    printf("Introduce el numero de terminos de la secuencia Fibonacci: ");
    scanf("%d", &n);
    // Llama a la funci�n generarFibonacci con el n�mero de t�rminos
    generarFibonacci(n);
    return 0;
}
