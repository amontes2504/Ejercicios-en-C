#include <stdio.h>

int main() {
    int num1, num2, sum = 1;

    while (sum != 0) {
        printf("Digite un número: ");
        scanf("%d", &num1);
    
        printf("Digite otro número: ");
        scanf("%d", &num2);
    
        sum = num1 + num2;
        printf("La suma de los números es: %d\n", sum);
    }
    printf("El programa ha finalizado");
    return 0;
}
