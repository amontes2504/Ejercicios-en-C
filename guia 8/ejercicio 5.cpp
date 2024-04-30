#include <stdio.h>

int main() {
    int contador = 1;  
    int suma = 0;    

    while (contador <= 100) {
        suma += contador * contador;
        contador++;
    }

    printf("La suma de los cuadrados de los primeros 100 números enteros es: %d\n", suma);

    return 0;
}
