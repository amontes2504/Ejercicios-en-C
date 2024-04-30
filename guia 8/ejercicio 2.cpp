#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra ('h' para finalizar): ");
    scanf(" %c", &letra);

    while (letra != 'h' ) {
        printf("Letra ingresada: %c\n", letra);
        
        printf("Ingrese una letra ('H' para finalizar): ");
        scanf(" %c", &letra);
    }

    return 0;
}
