#include <conio.h>
#include <stdio.h>

int main()
{
    int arreglo[10], mayor=0;
    for (int i = 1; i<=10;i++){
        arreglo[i-1] = i;
        printf("%d",arreglo[i - 1]);
    }
    
    for (int i = 0; i<=10;i++){
        
        if(mayor < arreglo[i-1] ){
                mayor = arreglo[i-1] ;
            }
    }
    printf("El numero mayor es : %d",mayor);
    getche();
}
