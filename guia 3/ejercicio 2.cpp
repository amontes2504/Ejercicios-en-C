#include <stdio.h>

int main() {
    int distancia_km;
    float monto_alquiler, monto_adicional, monto_total, iva;

    printf("Ingrese la distancia en kilómetros: ");
    scanf("%d", &distancia_km);

    if (distancia_km <= 300) {
        monto_alquiler = 300000;
        monto_adicional = 0;
    } else if (distancia_km > 300 && distancia_km <= 1000) {
        monto_alquiler = 300000;
        monto_adicional = (distancia_km - 300) * 15000;
    } else {
        monto_alquiler = 300000;
        monto_adicional = 7000000 + (distancia_km - 1000) * 10000;
    }

    monto_total = monto_alquiler + monto_adicional;

    iva = 0.20 * monto_total;

    printf("Monto del alquiler: $%.0f\n", monto_alquiler);
    printf("Monto adicional: $%.0f\n", monto_adicional);
    printf("Monto total: $%.0f\n", monto_total);
    printf("IVA (20%%): $%.0f\n", iva);

    return 0;
}
