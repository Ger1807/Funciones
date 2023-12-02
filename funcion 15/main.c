#include <stdio.h>
#include <stdlib.h>

// Definición de la función que verifica si un número es perfecto
int esNumeroPerfecto(int numero) {
    int suma = 0; // Inicializa la suma de divisores en 0
    // Bucle para encontrar los divisores del número
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i; // Suma los divisores
        }
    }
    // Comprueba si la suma de los divisores es igual al número
    return suma == numero;
}

int main() {
    // Bucle para recorrer los números del 1 al 1000
    for (int i = 1; i <= 1000; i++) {
        if (esNumeroPerfecto(i)) {
            // Imprime el número si es perfecto
            printf("%d es un numero perfecto\n", i);
        }
    }
    return 0;
}

