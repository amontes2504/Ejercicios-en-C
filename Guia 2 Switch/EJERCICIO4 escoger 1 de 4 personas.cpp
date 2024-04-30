#include <stdio.h>
#include <conio.h>

int main (){
    int opcion=1;

    
    while(opcion!=0){
        printf(" ");
        printf("|---------------------------------------|\n");
        printf("|     DIGITE LA PERSONA A ELEGIR        |\n");
        printf("|---------------------------------------|\n");
        printf("|0. Cerrar                              |\n");
        printf("|1. Persona 1                           |\n");
        printf("|2. Persona 2                           |\n");
        printf("|3. Persona 3                           |\n");
        printf("|4. Persona 4                           |\n");
        printf("|---------------------------------------|\n");
        scanf("%d",&opcion);
        printf(" \n");
        switch(opcion){

            case 1: printf("NOMBRE: Ivan \n");
                    printf("EDAD: 21 \n");
                    printf("TELEFONO: 31356719910 \n");
                    printf("NACIONALIDAD: Colombiano \n");
                    
            break;
            
            case 2: printf("NOMBRE: Elizabeth \n");
                    printf("EDAD: 23 \n");
                    printf("TELEFONO: 31556788910 \n");
                    printf("NACIONALIDAD: Puerto Riquense \n");
            break;
            
            case 3: printf("NOMBRE: Santiago \n");
                    printf("EDAD: 18 \n");
                    printf("TELEFONO: 32356311810 \n");
                    printf("NACIONALIDAD: Argentino \n");
            break;
            
            case 4: printf("NOMBRE: Emma \n");
                    printf("EDAD: 21 \n");
                    printf("TELEFONO: 2409847731 \n");
                    printf("NACIONALIDAD: Estadounidense \n");
            break;
            
            default:printf("No hay persona con este digito\n");
        }
    }
    getche();
    
}
