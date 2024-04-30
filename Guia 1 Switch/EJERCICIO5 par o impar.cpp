#include <stdio.h>
#include <conio.h>
int main()
{
    int numero;

    printf("|------------------------------------|\n");
    printf("|DIGITE UN NUMERO ENTRE EL 1 AL 10   |\n");
    printf("|------------------------------------|\n");

    scanf("%d", &numero);
    
        switch (numero){
        case 1 :printf("El numero es impar");
        break;
        case 2 :printf("El numero es par");
        break;
        case 3 :printf("El numero es impar");
        break;
        case 4 :printf("El numero es par");
        break;
        case 5 :printf("El numero es impar");
        break;
        case 6 :printf("El numero es par");
        break;
        case 7 :printf("El numero es impar");
        break;
        case 8 :printf("El numero es par");
        break;
        case 9 :printf("El numero es impar");
        break;
        case 10 :printf("El numero es par");
        break;
 
        default :printf("El numero no esta entre 1 y 10");
        break;  
    }
    getche();
}
