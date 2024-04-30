#include <stdio.h>

int main() {
    float velocidad, tiempo, distancia;

    printf("Ingrese la velocidad del móvil (m/s): ");
    scanf("%f", &velocidad);

    printf("Ingrese el tiempo transcurrido (segundos): ");
    scanf("%f", &tiempo);

    distancia = velocidad * tiempo;

    printf("La distancia recorrida es: %.2f metros\n", distancia);

    return 0;
}

