#include <stdio.h>
#include <conio.h>
int main()
{
    int mes;

    printf("|------------------------------------|\n");
    printf("|DIGITE EL NUMERO DE MES QUE QUIERES |\n");
    printf("|------------------------------------|\n");

    scanf("%d", &mes);
    
        switch (mes){
        case 1 :printf("Haz Elegido Enero");
        break;
        case 2 :printf("Haz Elegido Febrero");
        break;
        case 3 :printf("Haz Elegido Marzo");
        break;
        case 4 :printf("Haz Elegido Abril");
        break;
        case 5 :printf("Haz Elegido Mayo");
        break;
        case 6 :printf("Haz Elegido Junio");
        break;
        case 7 :printf("Haz Elegido Julio");
        break;
        case 8 :printf("Haz Elegido Agosto");
        break;
        case 9 :printf("Haz Elegido Septiembre");
        break;
        case 10 :printf("Haz Elegido Octubre");
        break;
        case 11 :printf("Haz Elegido Noviembre");
        break;
        case 12 :printf("Haz Elegido Diciembre");
        break;
        default :printf("error");
        break;  
    }
    getche();
}
