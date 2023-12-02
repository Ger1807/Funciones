#include <stdio.h>
#include <stdlib.h>

// Definición de la función que calcula la suma de los primeros n números naturales
int sumaNaturales(int n) {
    int suma = 0; // Inicializa la suma en 0
    // Bucle for para sumar los números desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        suma += i; // Añade el número actual a la suma
    }
    return suma; // Devuelve el resultado de la suma
}

int main() {
    int n;
    // Solicita al usuario que introduzca el número de términos
    printf("Introduce el numero de terminos a sumar: ");
    scanf("%d", &n);
    // Llama a la función sumaNaturales y almacena el resultado
    int resultado = sumaNaturales(n);
    // Imprime el resultado de la suma
    printf("La suma de los primeros %d numeros naturales es: %d\n", n, resultado);
    return 0;
}

