#include <stdio.h>

int main() {
    char opcion;

    printf("Elija un candidato por el cual votar:\n");
    printf("A: Candidato A por el partido rojo\n");
    printf("B: Candidato B por el partido verde\n");
    printf("C: Candidato C por el partido azul\n");
    printf("Opción: ");
    scanf(" %c", &opcion);

    switch (opcion) {
        case 'A':
        case 'a':
            printf("Usted ha votado por el partido rojo.\n");
            break;
        case 'B':
        case 'b':
            printf("Usted ha votado por el partido verde.\n");
            break;
        case 'C':
        case 'c':
            printf("Usted ha votado por el partido azul.\n");
            break;
        default:
            printf("Opción errónea.\n");
            break;
    }


    printf("Elija un candidato por el cual votar:\n");
    printf("A: Candidato A por el partido rojo\n");
    printf("B: Candidato B por el partido verde\n");
    printf("C: Candidato C por el partido azul\n");
    printf("Opción: ");
    scanf(" %c", &opcion);

    if (opcion == 'A' || opcion == 'a') {
        printf("Usted ha votado por el partido rojo.\n");
    } else if (opcion == 'B' || opcion == 'b') {
        printf("Usted ha votado por el partido verde.\n");
    } else if (opcion == 'C' || opcion == 'c') {
        printf("Usted ha votado por el partido azul.\n");
    } else {
        printf("Opción errónea.\n");
    }

    return 0;
}
