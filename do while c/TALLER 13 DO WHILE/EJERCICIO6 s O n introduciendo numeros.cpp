#include <stdio.h>
#include <conio.h>

int main() {
    int num, suma = 0, cantidad = 0;
    char continuar;

    do {
        printf("Introduzca un número entero: ");
        scanf("%d", &num);

        suma += num;
        cantidad++;

        printf("Ha introducido %d numero(s)\n", cantidad);
        printf("La suma es %d\n", suma);

        printf("¿Desea introducir otro número? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    if (cantidad > 0) {
        float media = (float)suma / cantidad;
        printf("La media aritmética de los números introducidos es: %.2f\n", media);
    } else {
        printf("No se introdujeron números.\n");
    }

    getche();
}
