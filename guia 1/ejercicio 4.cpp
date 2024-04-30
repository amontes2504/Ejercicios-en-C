#include <stdio.h>

int main() {
    int billetes_5, billetes_10, billetes_20;
    int total_dinero;

    printf("Ingrese la cantidad de billetes de $5: ");
    scanf("%d", &billetes_5);

    printf("Ingrese la cantidad de billetes de $10: ");
    scanf("%d", &billetes_10);

    printf("Ingrese la cantidad de billetes de $20: ");
    scanf("%d", &billetes_20);

    total_dinero = (billetes_5 * 5000) + (billetes_10 * 10000) + (billetes_20 * 20000);

    printf("La cantidad total de dinero es: $%d\n", total_dinero);

    return 0;
}
