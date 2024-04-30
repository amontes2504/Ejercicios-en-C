#include <stdio.h>

int main() {
    int num1, num2;
    int numero, contador = 0;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    printf("Ingrese números enteros entre %d y %d (ingrese un número fuera del rango para terminar):\n", num1, num2);

    while (1) {
        printf("Ingrese un número entero: ");
        scanf("%d", &numero);

        if (numero < num1 || numero > num2) {
            break;  // Terminar el bucle si el número está fuera del rango
        }

        contador++;
    }

    printf("Cantidad de números escritos: %d\n", contador);

    return 0;
}
