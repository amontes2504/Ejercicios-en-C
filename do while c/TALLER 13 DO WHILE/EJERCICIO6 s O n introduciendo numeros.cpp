#include <stdio.h>
#include <conio.h>

int main() {
    int num, suma = 0, cantidad = 0;
    char continuar;

    do {
        printf("Introduzca un n�mero entero: ");
        scanf("%d", &num);

        suma += num;
        cantidad++;

        printf("Ha introducido %d numero(s)\n", cantidad);
        printf("La suma es %d\n", suma);

        printf("�Desea introducir otro n�mero? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    if (cantidad > 0) {
        float media = (float)suma / cantidad;
        printf("La media aritm�tica de los n�meros introducidos es: %.2f\n", media);
    } else {
        printf("No se introdujeron n�meros.\n");
    }

    getche();
}
