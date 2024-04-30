#include <stdio.h>

int main() {
    int numero1, numero2, numero3, numero4;
    int mayor, menor;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &numero3);

    printf("Ingrese el cuarto número: ");
    scanf("%d", &numero4);

    mayor = numero1; 

    if (numero2 > mayor) {
        mayor = numero2;
    }

    if (numero3 > mayor) {
        mayor = numero3;
    }

    if (numero4 > mayor) {
        mayor = numero4;
    }

    menor = numero1;  

    if (numero2 < menor) {
        menor = numero2;
    }

    if (numero3 < menor) {
        menor = numero3;
    }

    if (numero4 < menor) {
        menor = numero4;
    }

    printf("El mayor número es: %d\n", mayor);
    printf("El menor número es: %d\n", menor);

    return 0;
}
