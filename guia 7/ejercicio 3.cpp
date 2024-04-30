#include <stdio.h>

int main() {
    int puntuacion;
    int cantidadDinero;
    
    printf("Ingrese la puntuación del empleado: ");
    scanf("%d", &puntuacion);
    
    if (puntuacion < 20) {
        printf("Llamado de atención. La puntuación es insuficiente.\n");
    } else if (puntuacion >= 20 && puntuacion < 40) {
        cantidadDinero = 200000 * puntuacion;
        printf("Nivel de rendimiento: Regular\n");
        printf("Cantidad de dinero a recibir: $%d\n", cantidadDinero);
    } else if (puntuacion >= 40 && puntuacion < 60) {
        cantidadDinero = 200000 * puntuacion;
        printf("Nivel de rendimiento: Aceptable\n");
        printf("Cantidad de dinero a recibir: $%d\n", cantidadDinero);
    } else if (puntuacion >= 60) {
        cantidadDinero = 200000 * puntuacion;
        printf("Nivel de rendimiento: Sobresaliente\n");
        printf("Cantidad de dinero a recibir: $%d\n", cantidadDinero);
    }
   
    return 0;
}
