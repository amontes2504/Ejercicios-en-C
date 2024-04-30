#include <stdio.h>
#include <conio.h>

int main (){
    float numero=0, mayor=0;

    do{
        printf("Digite el numero : ");
        scanf("%f", &numero);
        
        if (mayor<numero){
           mayor=numero;
           }
        
    }
    while (numero!=0);
    printf("El numero mayor es: %.1f",mayor);
    getche();
}
