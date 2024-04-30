#include <stdio.h>

int main() {
    int n, i;
    float compra, iva, total, pago, cambio;
    float suma_ventas = 0, suma_caja = 0;

    printf("Ingrese la cantidad de clientes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nCliente %d\n", i);

        printf("Ingrese el monto de la compra: $");
        scanf("%f", &compra);

        iva = compra * 0.15;
        total = compra + iva;

        printf("Monto de la compra: $%.2f\n", compra);
        printf("IVA (15%%): $%.2f\n", iva);
        printf("Total a pagar: $%.2f\n", total);

        printf("Ingrese la cantidad con la que paga el cliente: $");
        scanf("%f", &pago);

        cambio = pago - total;

        printf("Cambio: $%.2f\n", cambio);

        suma_ventas += total;
        suma_caja += pago;
    }

    printf("\nTotal de ventas del día: $%.2f\n", suma_ventas);
    printf("Total de dinero en caja: $%.2f\n", suma_caja);

    return 0;
}
