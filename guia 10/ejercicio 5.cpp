#include <stdio.h>

int main() {
    int lista1[15], lista2[15];
    int i, acumulado_lista1 = 0, acumulado_lista2 = 0;

    printf("Ingrese los valores de la lista 1:\n");
    for (i = 0; i < 15; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &lista1[i]);
        acumulado_lista1 += lista1[i];
    }

    printf("Ingrese los valores de la lista 2:\n");
    for (i = 0; i < 15; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &lista2[i]);
        acumulado_lista2 += lista2[i];
    }

    if (acumulado_lista1 > acumulado_lista2) {
        printf("Lista 1 tiene un valor acumulado mayor\n");
    } else if (acumulado_lista2 > acumulado_lista1) {
        printf("Lista 2 tiene un valor acumulado mayor\n");
    } else {
        printf("Listas tienen un valor acumulado igual\n");
    }

    return 0;
}
