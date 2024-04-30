#include <stdio.h>
#include <conio.h>
int main() {
    char jugador1, jugador2;

    printf("Jugador 1, ingrese su jugada (r/p/t): ");
    scanf(" %c", &jugador1);

    printf("Jugador 2, ingrese su jugada (r/p/t): ");
    scanf(" %c", &jugador2);

    switch (jugador1) {
        case 'r':
            switch (jugador2) {
                case 'r':
                    printf("Empate. Ambos jugadores eligieron roca.\n");
                    break;
                case 'p':
                    printf("Papel envuelve roca. ¡Jugador 2 gana!\n");
                    break;
                case 't':
                    printf("Roca rompe tijeras. ¡Jugador 1 gana!\n");
                    break;
                default:
                    printf("Jugador 2 eligió una opción no válida.\n");
            }
            break;

        case 'p':
            switch (jugador2) {
                case 'r':
                    printf("Papel envuelve roca. ¡Jugador 1 gana!\n");
                    break;
                case 'p':
                    printf("Empate. Ambos jugadores eligieron papel.\n");
                    break;
                case 't':
                    printf("Tijeras cortan papel. ¡Jugador 2 gana!\n");
                    break;
                default:
                    printf("Jugador 2 eligió una opción no válida.\n");
            }
            break;

        case 't':
            switch (jugador2) {
                case 'r':
                    printf("Roca rompe tijeras. ¡Jugador 2 gana!\n");
                    break;
                case 'p':
                    printf("Tijeras cortan papel. ¡Jugador 1 gana!\n");
                    break;
                case 't':
                    printf("Empate. Ambos jugadores eligieron tijeras.\n");
                    break;
                default:
                    printf("Jugador 2 eligió una opción no válida.\n");
            }
            break;

        default:
            printf("Jugador 1 eligió una opción no válida.\n");
    }

    getche();
}
