#include <stdio.h>

int main() {
    int num1, num2;
    int mayor, menor;

    printf("Ingrese el primer número positivo: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número positivo: ");
    scanf("%d", &num2);

    if (num1 > num2){
        mayor = num1;
        menor = num2;
        }else{
        mayor = num2;
        menor = num1;
        }
    while (menor < mayor){
        if (menor %2 == 0){
            printf("%d\n", menor);
        }
        menor++;
    }
    return 0;
}
