#include <stdio.h>

int main() {
    float horas_trabajadas, valor_por_hora;
    float salario;

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas_trabajadas);

    printf("Ingrese el valor por hora: ");
    scanf("%f", &valor_por_hora);

    salario = horas_trabajadas * valor_por_hora;

    printf("El salario es: %.2f\n", salario);

    return 0;
}
