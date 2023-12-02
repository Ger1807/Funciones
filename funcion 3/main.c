#include <stdio.h>
#include <stdlib.h>

// Definici�n de la funci�n que determina si un n�mero es par, impar o cero
void evaluarNumero(int numero) {
    // Utiliza el operador m�dulo para verificar si el n�mero es par
    if(numero % 2 == 0){
        printf("El numero es par");
    }
    else{
        // Si no es par, entonces es impar
        printf("El numero es impar");
    }
    // Verifica si el n�mero es cero
    if(numero == 0){
        printf("\nEl numero es 0");
    }
}

int main() {
    int numero;
    // Solicita al usuario que escriba un n�mero
    printf("Escriba el numero: ");
    scanf("%d", &numero);
    // Llama a la funci�n evaluarNumero con el n�mero ingresado
    evaluarNumero(numero);
    return 0;
}

