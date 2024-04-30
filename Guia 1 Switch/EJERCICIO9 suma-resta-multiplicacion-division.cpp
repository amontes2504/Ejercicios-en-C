#include <stdio.h>
#include <conio.h>

int main()
{
    int opcion=1, operacion, n1, n2;
    while(opcion!=0){
        operacion = 0;
        printf("|   CIERRA EL PROGRAMA DIGITANDO 0   |\n");
        printf("|------------------------------------|\n");
        printf("|    DIGITE QUE OPERACION QUIERES    |\n");
        printf("|------------------------------------|\n");
        printf("|1. Suma                             |\n");
        printf("|2. Resta                            |\n");
        printf("|3. Multiplicacion                   |\n");
        printf("|4. Division                         |\n");
        printf("|------------------------------------|\n");
        
        scanf("%d", &opcion);
        
        switch (opcion){

            case 1 :printf("Digite los 2 numeros que quieres sumar\n");
                    printf(": ");
                    scanf("%d", &n1);
                    printf(": ");
                    scanf("%d", &n2);
                    operacion = n1+ n2;
                    printf("La suma es de: %d\n",operacion);
            break;
            case 2 :printf("Digite los 2 numeros que quieres restar\n");
                    printf(": ");
                    scanf("%d", &n1);
                    printf(": ");
                    scanf("%d", &n2);
                    operacion = n1 - n2;
                    printf("La resta es de: %d\n",operacion);
            break;
            case 3 :printf("Digite los 2 numeros que quieres multiplicar\n");
                    printf(": ");
                    scanf("%d", &n1);
                    printf(": ");
                    scanf("%d", &n2);
                    operacion = n1 * n2;
                    printf("La multiplicacion es de: %d\n",operacion);
            break;
            case 4 :printf("Digite los 2 numeros que quieres dividir\n");
                    printf(": ");
                    scanf("%d", &n1);
                    printf(": ");
                    scanf("%d", &n2);
                    operacion = n1 / n2;
                    printf("La Division es de: %d\n",operacion);
            break;

    
    }   }
    getche();
}
