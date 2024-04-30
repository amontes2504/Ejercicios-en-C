#include <stdio.h>

int main() {
    int contrasena;

    while (contrasena != 1234) {
        printf("Ingrese la contraseña: ");
        scanf("%d", &contrasena);

        if (contrasena == 1234) {
            printf("Bienvenido\n");
            break;  // Terminar el bucle
        } else {
            printf("Contraseña incorrecta. Inténtelo nuevamente.\n");
        }
    }

    return 0;
}
