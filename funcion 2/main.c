#include <stdio.h>
#include <stdlib.h>
// Definición de la función que calcula el promedio de tres notas
float calcularPromedio(float nota1, float nota2, float nota3) {
    // Calcula el promedio de las tres notas
    float promedio = (nota1 + nota2 + nota3) / 3;
    return promedio;
}

int main() {
    float nota1, nota2, nota3, promedio;
    // Solicita al usuario las tres notas
    printf("Introduce la primera nota: ");
    scanf("%f", &nota1);
    printf("Introduce la segunda nota: ");
    scanf("%f", &nota2);
    // Recibe la segunda nota
    printf("Introduce la tercera nota: ");
    scanf("%f", &nota3);
    // Recibe la tercera nota y calcula el promedio
    promedio = calcularPromedio(nota1, nota2, nota3);
    // Determina si el estudiante aprobó o no basado en el promedio
    if (promedio >= 10) {
        printf("El estudiante ha sido aprobado con un promedio de: %.2f\n", promedio);
    } else {
        // Informa si el estudiante fue reprobado
        printf("El estudiante fue reprobado con un promedio de: %.2f\n", promedio);
    }
    return 0;
}

