#include <stdio.h>

int main() {
    int contrasena;

    while (contrasena != 1234) {
        printf("Ingrese la contrase�a: ");
        scanf("%d", &contrasena);

        if (contrasena == 1234) {
            printf("Bienvenido\n");
            break;  // Terminar el bucle
        } else {
            printf("Contrase�a incorrecta. Int�ntelo nuevamente.\n");
        }
    }

    return 0;
}
