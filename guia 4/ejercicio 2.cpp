#include <stdio.h>

int main()
{
    int horaEntrada, horaSalida, horasTotales, monto;

    printf("Ingrese la hora de entrada (en formato militar): ");
    scanf("%d", &horaEntrada);

    printf("Ingrese la hora de salida (en formato militar): ");
    scanf("%d", &horaSalida);

    horasTotales = horaSalida - horaEntrada;
    monto = 0;

    if (horasTotales <= 0) {
        printf("Error: La hora de salida debe ser posterior a la hora de entrada.\n");
    } else if (horasTotales == 1) {
        monto = 1000;
    } else {
        monto = 1000 + 600 * (horasTotales - 1);
    }

    printf("El monto a pagar es de %d pesos.\n", monto);

    return 0;
}
