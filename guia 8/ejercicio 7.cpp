#include <stdio.h>

int main() {
    int capital;
    int meses = 0;

    printf("Ingrese el capital: ");
    scanf("%d", &capital);

    int capitalDuplicado = capital * 2;

    while (capital < capitalDuplicado) {
        capital += capital * 5 / 100;  // Calcula el incremento mensual del capital con un interés del 5%
        meses++;
    }

    printf("El capital se duplicará en %d meses.\n", meses);

    return 0;
}
