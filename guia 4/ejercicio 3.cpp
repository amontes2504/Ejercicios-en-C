#include <stdio.h>

int main() {
    int X, Y;

    printf("Ingrese el valor de X: ");
    scanf("%d", &X);

    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);

    if (X < Y) {
        if (X % 2 == 0) {
            X++;
        }

        printf("Números impares entre %d y %d:\n", X, Y);
        for (int i = X; i <= Y; i += 2) {
            printf("%d\n", i);
        }
    } else if (X > Y) {
        if (Y % 2 == 0) {
            Y++;
        }

        printf("Números impares entre %d y %d:\n", Y, X);
        for (int i = Y; i <= X; i += 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}
