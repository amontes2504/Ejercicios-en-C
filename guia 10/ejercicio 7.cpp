#include <stdio.h>

int main() {
    int n, i = 1;
    float numero, suma = 0, promedio;

    printf("Ingrese la cantidad de números decimales: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Ingrese el número decimal %d: ", i);
        scanf("%f", &numero);

        suma += numero;

        i++;
    }

    promedio = suma / n;

    printf("El promedio de los números decimales es: %.2f\n", promedio);

    return 0;
}
