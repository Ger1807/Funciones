#include <stdio.h>
#include <stdlib.h>

// Definición de la función que calcula la suma de números hasta un número dado
int calcularSuma(int numero) {
    int i, suma = 0;
    // Bucle for para sumar los números desde 1 hasta 'numero'
    for (i = 1; i <= numero; i++) {
        suma += i;
    }
    // Retorna el resultado de la suma
    return suma;
}

int main() {
    int numero, sumaTotal;
    // Solicita al usuario que introduzca un número
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    // Llama a la función calcularSuma y almacena el resultado en sumaTotal
    sumaTotal = calcularSuma(numero);
    // Imprime el resultado de la suma
    printf("La suma desde 1 hasta %d es: %d\n", numero, sumaTotal);
    return 0;
}
