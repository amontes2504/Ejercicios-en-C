#include <stdio.h>

int main() {
    int numero1, numero2, suma, resta, multiplicacion;

    printf("Ingrese el primer n�mero entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo n�mero entero: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;

    resta = numero1 - numero2;

    multiplicacion = numero1 * numero2;

    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicaci�n es: %d\n", multiplicacion);

    return 0;
}
