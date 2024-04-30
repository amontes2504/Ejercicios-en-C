#include <stdio.h>

int main() {
    int cantidad_hombres, cantidad_mujeres, porcentaje_hombres, porcentaje_mujeres, total_personas;

    printf("Ingrese la cantidad de hombres: ");
    scanf("%d", &cantidad_hombres);

    printf("Ingrese la cantidad de mujeres: ");
    scanf("%d", &cantidad_mujeres);

    total_personas = cantidad_hombres + cantidad_mujeres;
    porcentaje_hombres = (cantidad_hombres * 100) / total_personas;
    porcentaje_mujeres = (cantidad_mujeres * 100) / total_personas;

    if (porcentaje_hombres > porcentaje_mujeres) {
        printf("Mayor cantidad de hombres. Porcentaje de hombres: %d%%\n", porcentaje_hombres);
    } else if (porcentaje_mujeres > porcentaje_hombres) {
        printf("Mayor cantidad de mujeres. Porcentaje de mujeres: %d%%\n", porcentaje_mujeres);
    } else {
        printf("Igual cantidad de hombres y mujeres. Porcentaje de hombres: %d%%\n", porcentaje_hombres);
    }

    return 0;
}
