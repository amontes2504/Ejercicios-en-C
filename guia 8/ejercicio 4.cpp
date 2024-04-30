#include <stdio.h>

int main() {
    int contador = 1;  
    int suma = 0;     
    int numero = 0;  

    printf("Los primeros 10 números pares son:\n");

    while (contador <= 10) {
        numero += 2;    
        suma += numero;
        printf("%d ", numero);
        contador++;
    }

    printf("\nLa suma de los primeros 10 números pares es: %d\n", suma);

    return 0;
}
