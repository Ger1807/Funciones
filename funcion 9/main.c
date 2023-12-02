#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que imprime la tabla de multiplicar de un n�mero
void imprimirTablaMultiplicar(int numero) {
    // Bucle for para generar la tabla de multiplicar del n�mero dado
    for(int i = 0; i <= 10; i = i + 1){
        // Imprime el producto del n�mero dado y el contador del bucle
        printf("%d x %d = %d\n", numero, i, i * numero);
    }
}

int main() {
    int numero;
    // Solicita al usuario que introduzca un n�mero
    printf("Dame un numero: ");
    scanf("%d", &numero);
    // Llama a la funci�n imprimirTablaMultiplicar con el n�mero ingresado
    imprimirTablaMultiplicar(numero);
    return 0;
}

