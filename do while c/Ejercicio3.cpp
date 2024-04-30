//Desarrolar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio
#include <stdio.h>
#include <conio.h>

int main (){
    float suma=0, promedio=0, nota=0;
    int i=1;
    
    do{
        printf("Digite la nota %d: ",i);
        scanf("%f", &nota);
        
        suma+=nota;
        promedio = suma/10;
        i+=1;
        
        
        
    }
    while (i<=10);
    printf("El promdeio es de: %.1f",promedio);
    getche ();
}
