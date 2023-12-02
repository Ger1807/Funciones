#include <stdio.h>
#include <stdlib.h>

// Definición de la función que determina si un número es positivo, negativo o cero
void evaluarNumero(int number) {
    // Utiliza una estructura condicional para evaluar el número
    if (number > 0) {
        printf("El numero es positivo.\n");
    } else if (number < 0) {
        printf("El numero es negativo.\n");
    } else {
        // Si el número no es ni positivo ni negativo, entonces es cero
        printf("El numero es cero.\n");
    }
}

int main() {
    int number;
    // Solicita al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &number);
    // Llama a la función evaluarNumero con el número ingresado
    evaluarNumero(number);
    return 0;
}
