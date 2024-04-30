#include <stdio.h>

int main() {
    int mes, total_a_pagar;
    float importe, descuento;
    

    printf("Ingrese el número del mes (1-12): ");
    scanf("%d", &mes);

    printf("Ingrese el importe de la compra: ");
    scanf("%f", &importe);

    if (mes >= 1 && mes <= 3) {
        descuento = importe * 0.15; 
    } else if (mes >= 4 && mes <= 6) {
        descuento = importe * 0.20; 
    } else {
        descuento = 0;
    }

    total_a_pagar = importe - descuento;

    printf("Cantidad a cobrar al cliente: %d\n", total_a_pagar);

    return 0;
}
