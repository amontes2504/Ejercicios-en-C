#include <stdio.h>

int main() {
    int respuestas_correctas, respuestas_incorrectas, respuestas_en_blanco, puntaje_final;

    printf("Ingrese el número de respuestas correctas: ");
    scanf("%d", &respuestas_correctas);

    printf("Ingrese el número de respuestas incorrectas: ");
    scanf("%d", &respuestas_incorrectas);

    printf("Ingrese el número de respuestas en blanco: ");
    scanf("%d", &respuestas_en_blanco);

    puntaje_final = (respuestas_correctas * 10) + (respuestas_incorrectas * -1);

    printf("El puntaje final es: %d\n", puntaje_final);

    return 0;
}
