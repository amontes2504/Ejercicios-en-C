#include <stdio.h>

int main() {
    float distancia_metros, distancia_kilometros;

    printf("Ingrese la distancia en metros: ");
    scanf("%f", &distancia_metros);

    distancia_kilometros = distancia_metros / 1000;

    printf("La distancia en kilómetros es: %.2f\n", distancia_kilometros);

    return 0;
}
