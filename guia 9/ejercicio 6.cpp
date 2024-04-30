#include <stdio.h>

int main() {
    int num1, num2;
    int numero, contador = 0;

    printf("Ingrese el primer n�mero entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo n�mero entero: ");
    scanf("%d", &num2);

    printf("Ingrese n�meros enteros entre %d y %d (ingrese un n�mero fuera del rango para terminar):\n", num1, num2);

    while (1) {
        printf("Ingrese un n�mero entero: ");
        scanf("%d", &numero);

        if (numero < num1 || numero > num2) {
            break;  // Terminar el bucle si el n�mero est� fuera del rango
        }

        contador++;
    }

    printf("Cantidad de n�meros escritos: %d\n", contador);

    return 0;
}
