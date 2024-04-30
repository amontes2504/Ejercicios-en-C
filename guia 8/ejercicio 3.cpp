#include <stdio.h>

int main() {
    int valor = 1;
    int suma = 0;

    printf("Ingrese valores positivos (0 para terminar):\n");

    while (valor !=0) {
        printf("Ingrese un valor: ");
        scanf("%d", &valor);

        suma += valor;
    }

    printf("La suma total es: %d\n", suma);

    return 0;
}
