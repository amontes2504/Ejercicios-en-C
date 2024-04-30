#include <stdio.h>
#include <conio.h>
int main (){
    int opcion;

    
    while(opcion!=5){
        printf(" ");
        printf("|---------------------------------------|\n");
        printf("|     DIGITE EL NUMERO DE LA BOMBA      |\n");
        printf("|---------------------------------------|\n");
        printf("|0.                                     |\n");
        printf("|1.                                     |\n");
        printf("|2.                                     |\n");
        printf("|3.                                     |\n");
        printf("|4.                                     |\n");
        printf("|5. Cerrar                              |\n");
        printf("|---------------------------------------|\n");
        scanf("%d",&opcion);
        printf(" ");
        switch(opcion){
            
            case 0: printf("No hay establecido un valor definido para el tipo de bomba\n");
            break;
            
            case 1: printf("Es una bomba de agua\n");
            break;
            
            case 2: printf("Es una bomba de gasolina\n");
            break;
            
            case 3: printf("Es una bomba de hormigon\n");
            break;
            
            case 4: printf("Es una bomba de pasta alimenticia\n");
            break;
            
            default:printf("No existe un valor válido para tipo de bomba\n");
        }
    }
    
    getche();
}
