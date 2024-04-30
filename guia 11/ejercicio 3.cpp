#include <stdio.h>

int main() {
    int tabla, x, multiplicacion;
    
    printf("Digite la tabla que quieres ver :");
    scanf("%d", &tabla);
    
    for (x = 1; x <= 10; x++){
        multiplicacion = tabla * x;
        printf("%d * %d = %d\n", tabla, x, multiplicacion);
    }
    return 0;
}
