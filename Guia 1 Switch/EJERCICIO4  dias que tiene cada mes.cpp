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
        case 1 :printf("Enero tiene 31 dias");
        break;
        case 2 :printf("Febrero tiene 28 dias");
        break;
        case 3 :printf("Marzo tiene 31 dias");
        break;
        case 4 :printf("Abril tiene 30 dias");
        break;
        case 5 :printf("Mayo tiene 31 dias");
        break;
        case 6 :printf("Junio tiene 30 dias");
        break;
        case 7 :printf("Julio tiene 31 dias");
        break;
        case 8 :printf("Agosto tiene 31 dias");
        break;
        case 9 :printf("Septiembre tiene 30 dias");
        break;
        case 10 :printf("Octubre tiene 31 dias");
        break;
        case 11 :printf("Noviembre tiene 30 dias");
        break;
        case 12 :printf("Diciembre tiene 31 dias");
        break;
        default :printf("error");
        break;  
    }
    getche();
}
