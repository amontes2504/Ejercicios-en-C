#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Ingrese el lado 1 del triángulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el lado 2 del triángulo: ");
    scanf("%f", &lado2);

    printf("Ingrese el lado 3 del triángulo: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triángulo es equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("El triángulo es isósceles.\n");
    } else {
        printf("El triángulo es escaleno.\n");
    }

    return 0;
}
