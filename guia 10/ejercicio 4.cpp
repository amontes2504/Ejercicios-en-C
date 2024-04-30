#include <stdio.h>

int main() {
    int n, i, sueldo, sueldos_100_300 = 0, sueldos_mas_300 = 0, gasto_sueldos = 0;

    printf("Ingrese la cantidad de empleados: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("Ingrese el sueldo del empleado %d: ", i);
        scanf("%d", &sueldo);

        if (sueldo >= 100 && sueldo <= 300) {
            sueldos_100_300++;
        } else if (sueldo > 300) {
            sueldos_mas_300++;
        }

        gasto_sueldos += sueldo;

        i++;
    }

    printf("Cantidad de empleados con sueldos entre $100 y $300: %d\n", sueldos_100_300);
    printf("Cantidad de empleados con sueldos mayores a $300: %d\n", sueldos_mas_300);
    printf("Importe que gasta la empresa en sueldos al personal: $%d\n", gasto_sueldos);

    return 0;
}
