#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Ingrese el lado 1 del tri�ngulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el lado 2 del tri�ngulo: ");
    scanf("%f", &lado2);

    printf("Ingrese el lado 3 del tri�ngulo: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("El tri�ngulo es equil�tero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("El tri�ngulo es is�sceles.\n");
    } else {
        printf("El tri�ngulo es escaleno.\n");
    }

    return 0;
}
