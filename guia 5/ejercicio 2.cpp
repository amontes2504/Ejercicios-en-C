#include <stdio.h>

int main() {
    int sueldo_mensual, monto_venta, comision, salario_total;

    printf("Ingrese el sueldo mensual: ");
    scanf("%d", &sueldo_mensual);

    printf("Ingrese el monto de venta: ");
    scanf("%d", &monto_venta);

    if (monto_venta > 1000000) {
        comision = monto_venta * 0.15;  
    } else if (monto_venta >= 500000 && monto_venta < 1000000) {
        comision = monto_venta * 0.05;  
    }

    salario_total = sueldo_mensual + comision;

    printf("Salario total: %d\n", salario_total);

    return 0;
}
