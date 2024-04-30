#include <stdio.h>
#include <conio.h>

int main (){
    int numeros=0, i=0, suma=0, suma2=0;

    do{
       i++;
       printf("Digite numeros : ");
       scanf("%d", &numeros);
       
        if (i % 2 !=0 && i!=1){
            suma +=i;
            suma2++;
            
        }
    }
    while (numeros != 0);
    printf("Hay un total de %d numeros impares\n",suma2);
    printf("La suma de los numeros impares es: %d",suma);
    getche();
}
