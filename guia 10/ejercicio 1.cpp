#include <stdio.h>

int main() {
    int n, i, piezas_aptas = 0;
    float longitud;

    printf("Ingrese la cantidad de piezas a procesar: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("Ingrese la longitud de la pieza %d: ", i);
        scanf("%f", &longitud);

        if (longitud >= 1.20 && longitud <= 1.30) {
            piezas_aptas++;
        }

        i++;
    }

    printf("La cantidad de piezas aptas en el lote es: %d\n", piezas_aptas);

    return 0;
}
