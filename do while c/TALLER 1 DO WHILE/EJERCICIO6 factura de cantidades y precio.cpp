#include <stdio.h>
#include <conio.h>

int main (){
    int cantidades=0, i=1;
    float precio=0, suma;
          
    printf("Digite las cantidades vendidas : ");
    scanf("%d", &cantidades);
    do{
       
       printf("Digite el precio del producto %d : ",i);
       scanf("%f", &precio);
        
        suma +=precio;
        i++;
         
    }
    while (i<=cantidades);
    printf("El total es de: %.1f",suma);
    getche();
}
