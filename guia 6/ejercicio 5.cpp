#include <stdio.h>

int main() {
    float valor_hora, tarifa_hora_extra;
    int horas_trabajadas, horas_extras, salario;

    printf("Ingrese el valor por hora: ");
    scanf("%f", &valor_hora);

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    if (horas_trabajadas <= 40) {
        salario = valor_hora * horas_trabajadas;
    } else {
        horas_extras = horas_trabajadas - 40;
        tarifa_hora_extra = valor_hora * 1.5;
        salario = (valor_hora * 40) + (tarifa_hora_extra * horas_extras);
    }

    // Mostrar el salario
    printf("El salario del trabajador es: %d\n", salario);

    return 0;
}
