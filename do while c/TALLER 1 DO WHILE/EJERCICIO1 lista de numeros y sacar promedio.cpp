#include <stdio.h>
#include <conio.h>

int main (){
    float suma=0, promedio=0, nota=0;
    int i=1, numeros=0;
    
    printf("Digite cuantos numeros quieres ingresar: ");
    scanf("%d", &numeros);
    
    do{
        printf("Digite el numero %d: ",i);
        scanf("%f", &nota);
        
        suma+=nota;
        promedio = suma/numeros;
        i+=1;
        
        
        
    }
    while (i<=numeros);
    printf("El promdeio es de: %.1f",promedio);
    getche();
}
