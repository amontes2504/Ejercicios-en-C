#include <stdio.h>

int main() {
    int numeroSecreto = 14; 
    int intentos = 10;
    int numeroAdivinado;
    int acertado = 0; 

    printf("Adivina el número secreto. Tienes 10 intentos.\n");

    while (intentos > 0) {
        printf("Ingresa un número: ");
        scanf("%d", &numeroAdivinado);

        if (numeroAdivinado == numeroSecreto) {
            acertado = 1;
            break; 
        } else {
            printf("Número incorrecto. Te quedan %d intentos.\n", intentos - 1);
        }

        intentos--;
    }

    if (acertado) {
        printf("¡Felicidades! Adivinaste el número secreto: %d\n", numeroSecreto);
    } else {
        printf("No lograste adivinar el número secreto. El número era: %d\n", numeroSecreto);
    }

    return 0;
}
