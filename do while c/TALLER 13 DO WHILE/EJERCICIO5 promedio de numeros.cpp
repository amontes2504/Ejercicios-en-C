#include <stdio.h>
#include <conio.h>

int main (){
    int promedio=0, n1=0, i=0;
    
    printf("Digite 0 para cerrar el programa:  \n");
    printf("---------------------------------------- \n");
    do{
        i++;
        printf("Digite el numero entero %d:  ",i);
        scanf("%d", &n1);
        
        promedio += n1;
        
    }
    while (n1!=0);
    promedio = promedio / (i-1);
        printf("---------------------------------------- \n");
        printf("El promedio de los numeros es de : %d\n", promedio);

        getche();
}
