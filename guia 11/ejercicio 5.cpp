#include <stdio.h>

int main() {
    int i, suma = 0;

    for (i = 100; i >= 0; i -= 2) {
        suma += i;
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
