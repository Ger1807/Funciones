#include <stdio.h>
#include <stdlib.h>

// Funcion para determinar si un numero es perfecto
int esNumeroPerfecto(int numero) {
    int suma = 0;
    // Bucle para sumar los divisores propios del numero
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            // Si i es un divisor, se suma a la variable suma
            suma += i;
        }
    }
    // Si la suma de los divisores es igual al numero, es perfecto
    return suma == numero;
}

int main() {
    // Variable para almacenar el numero ingresado por el usuario
    int numero;

    // Solicita al usuario que ingrese un numero
    printf("Ingrese un numero para verificar si es perfecto: ");
    scanf("%d", &numero);

    // Llamada a la funcion y muestra el resultado
    if (esNumeroPerfecto(numero)) {
        printf("El numero %d es un numero perfecto.\n", numero);
    } else {
        printf("El numero %d no es un numero perfecto.\n", numero);
    }

    return 0;
}
