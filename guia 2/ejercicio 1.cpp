#include <stdio.h>

int main() {
    float millas_marinas, metros;

    printf("Ingrese el valor de la distancia en millas marinas: ");
    scanf("%f", &millas_marinas);

    metros = millas_marinas * 1852;

    printf("La distancia en metros es: %.0f\n", metros);

    return 0;
}

