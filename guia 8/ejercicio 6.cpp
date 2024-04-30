#include <stdio.h>

int main() {
    int numeroSecreto = 14; 
    int intentos = 10;
    int numeroAdivinado;
    int acertado = 0; 

    printf("Adivina el n�mero secreto. Tienes 10 intentos.\n");

    while (intentos > 0) {
        printf("Ingresa un n�mero: ");
        scanf("%d", &numeroAdivinado);

        if (numeroAdivinado == numeroSecreto) {
            acertado = 1;
            break; 
        } else {
            printf("N�mero incorrecto. Te quedan %d intentos.\n", intentos - 1);
        }

        intentos--;
    }

    if (acertado) {
        printf("�Felicidades! Adivinaste el n�mero secreto: %d\n", numeroSecreto);
    } else {
        printf("No lograste adivinar el n�mero secreto. El n�mero era: %d\n", numeroSecreto);
    }

    return 0;
}
