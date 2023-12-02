#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que calcula la suma de n�meros hasta un n�mero dado
int calcularSuma(int numero) {
    int i, suma = 0;
    // Bucle for para sumar los n�meros desde 1 hasta 'numero'
    for (i = 1; i <= numero; i++) {
        suma += i;
    }
    // Retorna el resultado de la suma
    return suma;
}

int main() {
    int numero, sumaTotal;
    // Solicita al usuario que introduzca un n�mero
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    // Llama a la funci�n calcularSuma y almacena el resultado en sumaTotal
    sumaTotal = calcularSuma(numero);
    // Imprime el resultado de la suma
    printf("La suma desde 1 hasta %d es: %d\n", numero, sumaTotal);
    return 0;
}
