#include <stdio.h>

int main() {
    float radio, area;

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    area = 3.14 * radio * radio;

    printf("El área del círculo es: %.2f\n", area);

    return 0;
}
