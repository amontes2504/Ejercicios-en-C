//Escribe un programa que solicite un valor positivo  y nos muestre desde i hasta el valor ingresado de uno en uno 
#include <stdio.h>
#include <conio.h>

int main (){
    int i=0, numero=0;
    printf("Digite hasta que numero quieres ver: ");
    scanf("%d", &numero);
    do{
        i+=1;
        printf("%d\n",i);
    }
    while (i<numero);
    getche();
}
