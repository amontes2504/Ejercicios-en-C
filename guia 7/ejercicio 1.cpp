#include <stdio.h>

int main() {
    int edad, salario, renta;
    
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    
    printf("Ingrese su salario: ");
    scanf("%d", &salario);
    
    if (edad > 30 && salario > 2 * 1160000) {
        renta = salario * 0.20;
        printf("Usted debe pagar renta. El 20%% de su salario durante un año es: %d\n", renta);
    } else if (edad > 50 && salario > 1160000) {
        renta = salario * 0.10;
        printf("Usted debe pagar renta. El 10%% de su salario durante un año es: %d\n", renta);
    } else {
        printf("Usted no debe pagar renta.\n");
    }
    
    return 0;
}
