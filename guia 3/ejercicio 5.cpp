#include <stdio.h>

int main() {
    int numero_pasajeros, valor_pasaje, ganancia_conductor, total_recaudado, porcentaje_ganancia;

    printf("Ingrese el número de pasajeros: ");
    scanf("%d", &numero_pasajeros);

    printf("Ingrese el valor del pasaje: ");
    scanf("%d", &valor_pasaje);

    total_recaudado = numero_pasajeros * valor_pasaje;

    if (numero_pasajeros < 300) {
        ganancia_conductor = 0;
    } else if (numero_pasajeros <= 500) {
        porcentaje_ganancia = 0.20;
        ganancia_conductor = total_recaudado * porcentaje_ganancia;
    } else {
        porcentaje_ganancia = 0.30;
        ganancia_conductor = total_recaudado * porcentaje_ganancia;
    }

    printf("Cantidad a entregar al dueño: $%d\n", total_recaudado - ganancia_conductor);

    return 0;
}
