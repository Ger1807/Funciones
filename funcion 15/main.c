#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que verifica si un n�mero es perfecto
int esNumeroPerfecto(int numero) {
    int suma = 0; // Inicializa la suma de divisores en 0
    // Bucle para encontrar los divisores del n�mero
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i; // Suma los divisores
        }
    }
    // Comprueba si la suma de los divisores es igual al n�mero
    return suma == numero;
}

int main() {
    // Bucle para recorrer los n�meros del 1 al 1000
    for (int i = 1; i <= 1000; i++) {
        if (esNumeroPerfecto(i)) {
            // Imprime el n�mero si es perfecto
            printf("%d es un numero perfecto\n", i);
        }
    }
    return 0;
}

