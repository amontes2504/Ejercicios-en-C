#include <stdio.h>

int main() {
    int valor_compra, valor_pagar;
    float descuento;
     

    printf("Ingrese el valor de compra: ");
    scanf("%d", &valor_compra);

    if (valor_compra > 2000000) {
        descuento = 0.2;  
    } else if (valor_compra > 100000) {
        descuento = 0.1;  
    }

    valor_pagar = valor_compra - (valor_compra * descuento);

    printf("Valor a pagar con descuento: %d\n", valor_pagar);

    return 0;
}
