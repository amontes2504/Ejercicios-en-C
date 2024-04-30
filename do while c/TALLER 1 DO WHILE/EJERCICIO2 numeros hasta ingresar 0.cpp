//que lea desde el teclado valores positivos y los vaya sumando hasta que se introduzca un cero para terminar
#include <stdio.h>

int main (){
    float suma=0, numero=0;
    
    do{
        printf("Digite numero positivo: ");
        scanf("%f", &numero);
    
        
    }
    while (numero!=0);
}
