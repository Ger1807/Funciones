#include <stdio.h>
#include <stdlib.h>

// Definición de la función que determina si un número es par, impar o cero
void evaluarNumero(int numero) {
    // Utiliza el operador módulo para verificar si el número es par
    if(numero % 2 == 0){
        printf("El numero es par");
    }
    else{
        // Si no es par, entonces es impar
        printf("El numero es impar");
    }
    // Verifica si el número es cero
    if(numero == 0){
        printf("\nEl numero es 0");
    }
}

int main() {
    int numero;
    // Solicita al usuario que escriba un número
    printf("Escriba el numero: ");
    scanf("%d", &numero);
    // Llama a la función evaluarNumero con el número ingresado
    evaluarNumero(numero);
    return 0;
}

