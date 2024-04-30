#include <stdio.h>

int main() {
    int n, i, nota, notas_mayores = 0, notas_menores = 0;

    printf("Ingrese la cantidad de notas de alumnos: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("Ingrese la nota del alumno %d: ", i);
        scanf("%d", &nota);

        if (nota >= 7) {
            notas_mayores++;
        } else {
            notas_menores++;
        }

        i++;
    }

    printf("Cantidad de alumnos con notas mayores o iguales a 7: %d\n", notas_mayores);
    printf("Cantidad de alumnos con notas menores a 7: %d\n", notas_menores);

    return 0;
}
