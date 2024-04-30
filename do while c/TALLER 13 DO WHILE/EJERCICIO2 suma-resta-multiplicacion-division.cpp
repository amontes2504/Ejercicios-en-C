#include <stdio.h>
#include <conio.h>
int main (){
    int n1=0, n2=0, suma=0, resta=0, multiplicacion=0, division=0;
          
    printf("Digite 0 en ambos numeros para cerrar el programa\n ");
    
        

    do{
        printf("---------------------------------------- \n");
        printf("Digite el numero 1 de la operacion: ");
        scanf("%d", &n1);
        
        printf("Digite el numero 2 de la operacion: ");
        scanf("%d", &n2);
        printf("---------------------------------------- \n");
        
        suma = n1 + n2;
        resta = n1 - n2;
        multiplicacion = n1 * n2;
        division = n1 / n2;
        printf("---------------------------------------- \n");
        printf("La suma de los 2 numeros es de: %d\n", suma);
        printf("---------------------------------------- \n");
        printf("La resta de los 2 numeros es de: %d\n", resta);
        printf("---------------------------------------- \n");
        printf("La multiplicacion de los 2 numeros es de: %d\n", multiplicacion);
        printf("---------------------------------------- \n");
        printf("La division de los 2 numeros es de: %d\n", division);
        printf("---------------------------------------- \n");
    }
    while (n1!=0 && n2!=0);

    getche();
}
