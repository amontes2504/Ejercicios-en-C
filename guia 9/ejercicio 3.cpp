#include <stdio.h>

int main() {
    int num1, num2, sum = 1;

    while (sum != 0) {
        printf("Digite un n�mero: ");
        scanf("%d", &num1);
    
        printf("Digite otro n�mero: ");
        scanf("%d", &num2);
    
        sum = num1 + num2;
        printf("La suma de los n�meros es: %d\n", sum);
    }
    printf("El programa ha finalizado");
    return 0;
}
