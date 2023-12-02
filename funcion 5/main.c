#include <stdio.h>
#include <stdlib.h>

// Definición de la función que compara dos números e imprime el mayor
void compararNumeros(int num1, int num2) {
    // Compara los dos números y determina cuál es mayor
    if (num1 > num2) {
        printf("El numero %d es mayor que el numero %d\n", num1, num2);
    } else if (num1 < num2) {
        // Si el primer número no es mayor, verifica si el segundo es mayor
        printf("El numero %d es mayor que el numero %d\n", num2, num1);
    } else {
        // Si ninguno es mayor, entonces son iguales
        printf("Los numeros son iguales\n");
    }
}

int main() {
    int number1, number2;
    // Solicita al usuario que introduzca el primer número
    printf("Introduce el primer numero: ");
    scanf("%d", &number1);
    // Solicita al usuario que introduzca el segundo número
    printf("Introduce el segundo numero: ");
    scanf("%d", &number2);
    // Llama a la función compararNumeros con los números ingresados
    compararNumeros(number1, number2);
    return 0;
}
