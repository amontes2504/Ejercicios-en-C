
#include <stdio.h>

int main() {
    int numero, doble;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    doble = numero + numero;

    printf("El doble de %d es: %d\n", numero, doble);

    return 0;
}
