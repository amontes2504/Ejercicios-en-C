#include <stdio.h>

int main() {
    int horas_estadia, monto_pagar;

    printf("Ingrese el número de horas de estadía: ");
    scanf("%d", &horas_estadia);

    if (horas_estadia <= 1) {
        monto_pagar = 1000;
    } else {
        monto_pagar = 1000 + (horas_estadia - 1) * 800;
    }

    printf("El monto a pagar es: $%d\n", monto_pagar);

    return 0;
}
