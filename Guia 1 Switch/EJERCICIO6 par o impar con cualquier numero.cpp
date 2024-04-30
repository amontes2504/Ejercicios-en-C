#include <stdio.h>
#include <conio.h>

int main()
{
    int numero;

    printf("|------------------------------------|\n");
    printf("|DIGITE UN NUMERO ENTRE EL 1 AL 10   |\n");
    printf("|------------------------------------|\n");

    scanf("%d", &numero);
    
        if (numero % 2 ==0){
            numero=1;
        }else{
            numero=2;
        }
        switch (numero){
        case 1 :printf("El numero es par");
        break;
        case 2 :printf("El numero es impar");
        break;
        default :printf("ERROR");
        break;  
    }
    getche();
}
