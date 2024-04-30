#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar al usuario los tres números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Ordenar los números de menor a mayor
    if (num1 > num2 && num2 > num3) {
        printf("Números ordenados de menor a mayor: %d, %d, %d\n", num3, num2, num1);
    }

    else if (num1 > num3 && num3 > num2) {
        printf("Números ordenados de menor a mayor: %d, %d, %d\n", num2, num3, num1);
    }

    else if (num2 > num1 && num1 > num3) {
        printf("Números ordenados de menor a mayor: %d, %d, %d\n", num3, num1, num2);
    }
    
    
    else if (num3> num1& num1 > num2) {
        printf("Números ordenados de menor a mayor: %d, %d, %d\n", num2, num1, num3);
    }

    else if (num2 > num3 && num3 > num1) {
        printf("Números ordenados de menor a mayor: %d, %d, %d\n", num1, num3, num2);
    }
    
    else if (num3 > num2 && num2 > num1) {
        printf("Números ordenados de menor a mayor: %d, %d, %d\n", num1, num2, num3);
    }
    
    else{
    printf("hay numeros repetidos : %d, %d, %d\n", num1, num2, num3);
    }
    return 0;
}
