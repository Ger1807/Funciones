#include <stdio.h>
#include <stdlib.h>

// Definición de la función que calcula el total con descuento
float calcularTotalConDescuento(int zapatos) {
    float total, descuento;
    total = zapatos * 80;
    // Estructura condicional para determinar el porcentaje de descuento
    if (zapatos > 10 && zapatos <= 20) {
        descuento = total * 0.10;
    } else if (zapatos > 20 && zapatos <= 30) {
        descuento = total * 0.20;
    } else if (zapatos > 30) {
        // Aplica un 40% de descuento si la cantidad de zapatos es mayor a 30
        descuento = total * 0.40;
    } else {
        descuento = 0;
    }
    total = total - descuento;
    // Devuelve el total después de aplicar el descuento
    return total;
}

int main() {
    int zapatos;
    float totalConDescuento;
    // Solicita al usuario la cantidad de zapatos comprados
    printf("Cuantos zapatos fueron comprados?: ");
    scanf("%d", &zapatos);
    totalConDescuento = calcularTotalConDescuento(zapatos);
    // Imprime el total con descuento
    printf("El total con descuento es de: $%.2f\n", totalConDescuento);
    return 0;
}



