#include <stdio.h>

int main() {
    float radio, area;

    printf("Ingrese el radio del c�rculo: ");
    scanf("%f", &radio);

    area = 3.14 * radio * radio;

    printf("El �rea del c�rculo es: %.2f\n", area);

    return 0;
}
