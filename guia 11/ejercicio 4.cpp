#include <stdio.h>

int main() {
    int n, i;
    int positivos = 0, negativos = 0, neutros = 0, pares = 0, impares = 0;
    int numero;

    printf("Ingrese la cantidad de n�meros a ingresar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese el n�mero %d: ", i + 1);
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

    printf("Cantidad de n�meros positivos: %d\n", positivos);
    printf("Cantidad de n�meros negativos: %d\n", negativos);
    printf("Cantidad de n�meros neutros: %d\n", neutros);
    printf("Cantidad de n�meros pares: %d\n", pares);
    printf("Cantidad de n�meros impares: %d\n", impares);

    return 0;
}
