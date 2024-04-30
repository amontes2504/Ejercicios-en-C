#include <stdio.h>

int main() {
    int cantidad_docenas, unidades_obsequio;
    float precio_unitario, monto_compra, monto_descuento, monto_pagar;

    printf("Ingrese la cantidad de docenas a comprar: ");
    scanf("%d", &cantidad_docenas);

    printf("Ingrese el precio unitario del producto: ");
    scanf("%f", &precio_unitario);

    monto_compra = cantidad_docenas * 12 * precio_unitario;

    if (cantidad_docenas > 3) {
        monto_descuento = 0.15 * monto_compra;
        unidades_obsequio = (cantidad_docenas - 3) ;
        unidades_obsequio=unidades_obsequio*1;
    } else {
        monto_descuento = 0.10 * monto_compra;
    }

    monto_pagar = monto_compra - monto_descuento;

    printf("Monto de la compra: $%.0f\n", monto_compra);
    printf("Monto del descuento: $%.0f\n", monto_descuento);
    printf("Monto a pagar: $%.0f\n", monto_pagar);
    printf("Unidades de obsequio: %d\n", unidades_obsequio);

    return 0;
}
