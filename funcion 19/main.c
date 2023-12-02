#include <stdio.h>
#include <stdlib.h>

// Funcion para calcular el area de un triangulo
float calcularAreaTriangulo(float base, float altura) {
    // Calcula el area usando la formula del area del triangulo
    float area = (base * altura) / 2;
    // Devuelve el area calculada
    return area;
}

int main() {
    // Variables para almacenar la base y la altura
    float base, altura;

    // Solicita al usuario que ingrese la base y la altura
    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);

    // Llamada a la funcion y muestra el resultado
    printf("El area del triangulo es: %.2f\n", calcularAreaTriangulo(base, altura));

    return 0;
}
