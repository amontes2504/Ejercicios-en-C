#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    printf("Ingrese el valor del primer cateto: ");
    scanf("%f", &cateto1);

    printf("Ingrese el valor del segundo cateto: ");
    scanf("%f", &cateto2);
    
    //sqrt raiz cuadrada
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("La hipotenusa es: %.2f\n", hipotenusa);

    return 0;
}
