#include <stdio.h>
#include <conio.h>

int main (){
    int numeros=0;
    float i=0, division, suma;
          
    printf("Digite la cantidad de numeros para la operacion:  ");
    scanf("%d", &numeros);
    
    do{
        i++;
        division = 1 / i;
        suma += division;
    }
    while (i<numeros);
        printf("---------------------------------------- \n");
        printf("La suma de la operacion es de: %f\n", suma);
        printf("---------------------------------------- \n");
        getche();
}
