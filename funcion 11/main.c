#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Incluye la biblioteca matemática

// Definición de la función que calcula la potencia de un número
double calcularPotencia(double base, int exponente) {
    // Utiliza la función pow de la biblioteca math para calcular la potencia
    return pow(base, exponente);
}

int main() {
    double base;
    int exponente;
    double resultado;
    // Solicita al usuario que introduzca la base y el exponente
    printf("Introduce la base: ");
    scanf("%lf", &base);
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);
    // Llama a la función calcularPotencia y almacena el resultado
    resultado = calcularPotencia(base, exponente);
    // Imprime el resultado de la potencia
    printf("%.2lf elevado a la %d es: %.2lf\n", base, exponente, resultado);
    return 0;
}
