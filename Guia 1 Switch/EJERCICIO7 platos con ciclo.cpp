#include <stdio.h>
#include <conio.h>

int main()
{
    int plato=1;
    while(plato!=0){
        printf("|   CIERRA EL PROGRAMA DIGITANDO 0   |\n");
        printf("|------------------------------------|\n");
        printf("|     DIGITE QUE COMIDA QUIERES      |\n");
        printf("|------------------------------------|\n");
        printf("|1. Bandeja Paisa                    |\n");
        printf("|2. Sancocho                         |\n");
        printf("|3. Carne Asada                      |\n");
        printf("|4. Mojarra                          |\n");
        printf("|5. Chorizo                          |\n");
        printf("|------------------------------------|\n");
        
        scanf("%d", &plato);
        
        switch (plato){
            case 0 :printf("Gracias por comprar es nuestra tienda\n");
            break;
            case 1 :printf("El precio de la Bandeja Paisa es de $22.000\n");
            break;
            case 2 :printf("El precio del Sancocho es de: $10.000\n");
            break;
            case 3 :printf("El precio de la Carne Asada es de: $23.000\n");
            break;
            case 4 :printf("El precio de la Mojarra es de: $18.000\n");
            break;
            case 5 :printf("El precio del Chorizo es de: $7.000\n");
            break;
            default :printf("NO HAY PLATO CON ESTE DIGITO\n");
            break;
    
    }   }
    getche();
}
