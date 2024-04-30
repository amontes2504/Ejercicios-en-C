#include <stdio.h>

int main() {
    int valor_pasaje, ganancia_total, numero_personas;

    printf("Ingrese el valor del pasaje: ");
    scanf("%d", &valor_pasaje);

    printf("Ingrese el número de personas que se subieron: ");
    scanf("%d", &numero_personas);

    ganancia_total = valor_pasaje * numero_personas;

    printf("La ganancia producida es: %d\n", ganancia_total);

    return 0;
}
