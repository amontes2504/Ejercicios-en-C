#include <stdio.h>

int main() {
    float nota_taller1, nota_taller2, nota_examen_final, nota_definitiva;

    printf("Ingrese la nota del Taller 1: ");
    scanf("%f", &nota_taller1);

    printf("Ingrese la nota del Taller 2: ");
    scanf("%f", &nota_taller2);

    printf("Ingrese la nota del Examen Final: ");
    scanf("%f", &nota_examen_final);

    nota_definitiva = (nota_taller1 * 0.3) + (nota_taller2 * 0.3) + (nota_examen_final * 0.4);

    printf("La nota definitiva del alumno es: %.1f\n", nota_definitiva);

    return 0;
}
