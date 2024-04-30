#include <stdio.h>

int main() {
    float precio_compra, porcentaje_descuento, precio_final;

    printf("Ingrese el precio de compra: ");
    scanf("%f", &precio_compra);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &porcentaje_descuento);

    precio_final = precio_compra - (precio_compra * porcentaje_descuento / 100);

    printf("El precio final con descuento es: %.0f\n", precio_final);

    return 0;
}
