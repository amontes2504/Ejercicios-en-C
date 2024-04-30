#include <stdio.h>
#include <conio.h>

int main (){
    int numeros=0, promedio=0, n1=0, cont=0, cont2=0, i=0;
    
    printf("Digite la cantidad de numeros que quieres digitar:  ");
    scanf("%d", &numeros);
    
    do{
        i++;
        printf("Digite el numero entero %d:  ",i);
        scanf("%d", &n1);
        
        promedio += n1;
        
        if (n1 % 2 ==0 && n1 !=0){
            cont++;
        }else if (n1 !=0){
            cont2++;
        }
    }
    while (i<numeros);
    promedio = promedio / numeros;
        printf("---------------------------------------- \n");
        printf("El promedio de los numeros es de : %d\n", promedio);
        printf("Hay un total de %d numeros impares\n", cont2);
        printf("Hay un total de %d numeros pares\n", cont);
        printf("---------------------------------------- \n");

        getche();
}
