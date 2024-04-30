#include <stdio.h>

int main() {
    int duracion_llamada = 30; 
    int costo_10min = 100;  
    int costo_resto = 150;  
    int costo_total;

    if (duracion_llamada <= 10) {
        costo_total = costo_10min;
    } else {
        int minutos_resto = duracion_llamada - 10;
        costo_total = costo_10min + (minutos_resto * costo_resto);
    }

    printf("El costo de la llamada es: %d pesos\n", costo_total);

    return 0;
}
