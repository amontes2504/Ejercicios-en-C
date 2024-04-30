#include <stdio.h>

int main() {
    int n, i;
    int positivos = 0, negativos = 0, neutros = 0, pares = 0, impares = 0;
    int numero;

    printf("Ingrese la cantidad de números a ingresar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            neutros++;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números neutros: %d\n", neutros);
    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
