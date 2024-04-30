#include <stdio.h>

int main() {
    int valor_hora, antiguedad, horas_trabajadas, importe_bruto, importe_neto;
    float descuentos;
    char nombre[50];

    printf("Ingrese el valor hora del empleado: ");
    scanf("%d", &valor_hora);

    printf("Ingrese el nombre del empleado: ");
    scanf(" %[^\n]s", nombre);

    printf("Ingrese la antigüedad del empleado (en años): ");
    scanf("%d", &antiguedad);

    printf("Ingrese la cantidad de horas trabajadas en el mes: ");
    scanf("%d", &horas_trabajadas);

    importe_bruto = (valor_hora * horas_trabajadas) + (antiguedad * 30000);

    descuentos = importe_bruto * 0.13;

    importe_neto = importe_bruto - descuentos;

    printf("Recibo de sueldo\n");
    printf("Nombre: %s\n", nombre);
    printf("Antigüedad: %d años\n", antiguedad);
    printf("Valor hora: $%d\n", valor_hora);
    printf("Total a cobrar (bruto): $%d\n", importe_bruto);
    printf("Total de descuentos: $%.2f\n", descuentos);
    printf("Valor neto a cobrar: $%d\n", importe_neto);

    return 0;
}
