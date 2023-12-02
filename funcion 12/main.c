#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Incluye la biblioteca ctype para funciones de caracteres

// Definición de la función que cuenta las vocales en una cadena
int contarVocales(const char *cadena) {
    int contador = 0; // Inicializa el contador de vocales
    // Bucle while para recorrer cada carácter de la cadena
    while (*cadena) {
        // Convierte el carácter a minúscula para simplificar la comparación
        char c = tolower(*cadena);
        // Verifica si el carácter actual es una vocal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++; // Incrementa el contador si encuentra una vocal
        }
        cadena++; // Avanza al siguiente carácter
    }
    return contador; // Devuelve el total de vocales encontradas
}

int main() {
    char texto[100]; // Declara un arreglo de caracteres para la cadena de texto
    // Solicita al usuario que introduzca una cadena de texto
    printf("Introduce una cadena de texto: ");
    fgets(texto, sizeof(texto), stdin); // Lee la cadena de texto desde la entrada estándar
    // Llama a la función contarVocales y almacena el resultado
    int totalVocales = contarVocales(texto);
    // Imprime el número total de vocales en la cadena
    printf("El numero total de vocales en la cadena es: %d\n", totalVocales);
    return 0;
}
