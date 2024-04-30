#include <stdio.h>

int main() {
    int edad;
    int precioEntrada;
    
    printf("Ingrese la edad del cliente: ");
    scanf("%d", &edad);
    
    if (edad < 4) {
        precioEntrada = 0;
    } else if (edad >= 4 && edad <= 18) {
        precioEntrada = 5000;
    } else {
        precioEntrada = 10000;
    }
    
    printf("El precio de la entrada es: $%d\n", precioEntrada);
    
    return 0;
}
