#include <stdio.h>
#include <conio.h>

int main()
{
    int prenda;

    printf("|------------------------------------|\n");
    printf("|     DIGITE QUE PRENDA QUIERES      |\n");
    printf("|------------------------------------|\n");
    printf("|1. Camisa                           |\n");
    printf("|2. Saco                             |\n");
    printf("|3. Pantalon                         |\n");
    printf("|4. Gorra                            |\n");
    printf("|5. blusa                            |\n");
    printf("|------------------------------------|\n");

    scanf("%d", &prenda);
    
    switch (prenda){
        case 1 :printf("El precio de la camisa es de: $30.000");
        break;
        case 2 :printf("El precio del saco es de: $150.000");
        break;
        case 3 :printf("El precio del Pantalon es de: $60.000");
        break;
        case 4 :printf("El precio de la Gorra es de: $55.000");
        break;
        case 5 :printf("El precio de la blusa es de: $35.000");
        break;
        default :printf("NO HAY PRENDA CON ESTE DIGITO");
        break;

        }
        getche();
}
