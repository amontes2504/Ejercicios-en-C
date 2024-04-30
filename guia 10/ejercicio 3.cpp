#include <stdio.h>

int main() {
    int n, i;
    float altura, suma_alturas = 0, altura_promedio;

    printf("Ingrese la cantidad de alturas de personas: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("Ingrese la altura de la persona %d: ", i);
        scanf("%f", &altura);

        suma_alturas += altura;

        i++;
    }

    altura_promedio = suma_alturas / n;

    printf("La altura promedio de las personas es: %.2f\n", altura_promedio);

    return 0;
}
