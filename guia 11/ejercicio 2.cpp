#include <stdio.h>

int main() {
    int num1, num2, i, count = 0;

    printf("Ingrese el primer n�mero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &num2);

    for (i = num1; i <= num2; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }

    printf("Cantidad de m�ltiplos de 3: %d\n", count);

    return 0;
}
