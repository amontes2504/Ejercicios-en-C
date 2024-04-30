//que lea desde el teclado valores positivos y los vaya sumando hasta que se introduzca un cero para terminar
#include <stdio.h>
#include <conio.h>

int main (){
    float suma=0, numero=0;
    
    do{
        printf("Digite numero positivo: ");
        scanf("%f", &numero);
        
        suma+=numero;
                
    }
    while (numero!=0);
    printf("---------------------------------\n");
    printf("La suma de los numeros es: %.1f\n",suma);
    printf("---------------------------------\n");
    getche();
}
