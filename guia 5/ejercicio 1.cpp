#include <stdio.h>

int main() {
    int respuestas_correctas, respuestas_incorrectas, respuestas_en_blanco, puntaje_final;

    // Solicitar al usuario el n�mero de respuestas correctas, incorrectas y en blanco
    printf("Ingrese el n�mero de respuestas correctas: ");
    scanf("%d", &respuestas_correctas);

    printf("Ingrese el n�mero de respuestas incorrectas: ");
    scanf("%d", &respuestas_incorrectas);

    printf("Ingrese el n�mero de respuestas en blanco: ");
    scanf("%d", &respuestas_en_blanco);

    // Calcular el puntaje final
    puntaje_final = (respuestas_correctas * 10) + (respuestas_incorrectas * -3);

    // Mostrar el puntaje final y el mensaje correspondiente
    printf("Puntaje final: %d\n", puntaje_final);

    if (puntaje_final < 0) {
        printf("Perdi�\n");
    } else {
        printf("Gan�\n");
    }

    return 0;
}
