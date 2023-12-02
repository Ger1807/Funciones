#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que calcula la suma de los primeros n n�meros naturales
int sumaNaturales(int n) {
    int suma = 0; // Inicializa la suma en 0
    // Bucle for para sumar los n�meros desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        suma += i; // A�ade el n�mero actual a la suma
    }
    return suma; // Devuelve el resultado de la suma
}

int main() {
    int n;
    // Solicita al usuario que introduzca el n�mero de t�rminos
    printf("Introduce el numero de terminos a sumar: ");
    scanf("%d", &n);
    // Llama a la funci�n sumaNaturales y almacena el resultado
    int resultado = sumaNaturales(n);
    // Imprime el resultado de la suma
    printf("La suma de los primeros %d numeros naturales es: %d\n", n, resultado);
    return 0;
}

