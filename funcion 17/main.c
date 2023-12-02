#include <stdio.h>
#include <stdlib.h>

// Funci�n para calcular el MCD de dos n�meros
int calcularMCD(int a, int b) {
    // Mientras el segundo n�mero no sea 0
    while (b != 0) {
        // Calcula el resto de la divisi�n de a entre b
        int resto = a % b;
        // Asigna el valor de b a a, y el resto a b
        a = b;
        b = resto;
    }
    // Cuando b es 0, a contiene el MCD
    return a;
}

int main() {
    // Variables para almacenar los dos n�meros
    int num1, num2;

    // Solicita al usuario que ingrese los dos n�meros
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Llamada a la funci�n y muestra el resultado
    printf("El MCD de %d y %d es: %d\n", num1, num2, calcularMCD(num1, num2));

    return 0;
}

