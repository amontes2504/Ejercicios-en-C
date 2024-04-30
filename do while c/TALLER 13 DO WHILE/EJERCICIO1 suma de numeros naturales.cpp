#include <stdio.h>

int main (){
    int cantidades=0, i=0, suma=0;
          
    printf("Cuantos numeros naturales quieres sumar : ");
    scanf("%d", &cantidades);
    if (cantidades<0){
        printf("Los numeros naturales no son negativos");
    }else{
        do{
           i++;
            
            suma +=i;
            
        }
        while (i<cantidades);
        printf("La suma de los %d numeros naturales es de: %d",cantidades, suma);
    }
}
