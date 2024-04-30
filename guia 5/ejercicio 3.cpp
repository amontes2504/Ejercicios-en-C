#include <stdio.h>

int main() {
    int cantidad_inicial, interes, cantidad_final;

    printf("Ingrese la cantidad inicial en la cuenta: ");
    scanf("%d", &cantidad_inicial);

    printf("Ingrese el interés: ");
    scanf("%d", &interes);

    cantidad_final = cantidad_inicial + (cantidad_inicial * interes);

    if (cantidad_final > 700000) {
        printf("El monto final en la cuenta es de %d pesos.\n", cantidad_final);
        printf("Puedes reinvertir!!!\n");
    } else {
        printf("No se cumple la condición para reinvertir el dinero.\n");
    }

    return 0;
}
