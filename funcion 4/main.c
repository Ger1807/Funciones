#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que determina si un n�mero es positivo, negativo o cero
void evaluarNumero(int number) {
    // Utiliza una estructura condicional para evaluar el n�mero
    if (number > 0) {
        printf("El numero es positivo.\n");
    } else if (number < 0) {
        printf("El numero es negativo.\n");
    } else {
        // Si el n�mero no es ni positivo ni negativo, entonces es cero
        printf("El numero es cero.\n");
    }
}

int main() {
    int number;
    // Solicita al usuario que introduzca un n�mero
    printf("Introduce un numero: ");
    scanf("%d", &number);
    // Llama a la funci�n evaluarNumero con el n�mero ingresado
    evaluarNumero(number);
    return 0;
}
