#include <stdio.h>

int main() {
    int i, num, count_menores_10 = 0, count_mayores_50 = 0, count_entre_100_200 = 0;

    for (i = 1; i <= 100; i++) {

        if (i < 10) {
            count_menores_10++;
        }

        if (i > 50) {
            count_mayores_50++;
        }

        if (i >= 100 && num <= 200) {
            count_entre_100_200++;
        }
    }

    printf("Cantidad de números menores a 10: %d\n", count_menores_10);
    printf("Cantidad de números mayores a 50: %d\n", count_mayores_50);
    printf("Cantidad de números comprendidos entre 100 y 200: %d\n", count_entre_100_200);

    return 0;
}
