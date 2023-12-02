#include <stdio.h>
#include <stdlib.h>

// Definición de la función que imprime la tabla de multiplicar de un número
void imprimirTablaMultiplicar(int numero) {
    // Bucle for para generar la tabla de multiplicar del número dado
    for(int i = 0; i <= 10; i = i + 1){
        // Imprime el producto del número dado y el contador del bucle
        printf("%d x %d = %d\n", numero, i, i * numero);
    }
}

int main() {
    int numero;
    // Solicita al usuario que introduzca un número
    printf("Dame un numero: ");
    scanf("%d", &numero);
    // Llama a la función imprimirTablaMultiplicar con el número ingresado
    imprimirTablaMultiplicar(numero);
    return 0;
}

