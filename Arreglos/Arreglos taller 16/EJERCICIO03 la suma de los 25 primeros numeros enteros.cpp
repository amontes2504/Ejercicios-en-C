#include <conio.h>
#include <stdio.h>

int main()
{
    int arreglo[25], sum=0;
    for (int i = 1; i<=25;i++){
        arreglo[i-1] = i;
    }
    
    for (int i = 1; i<=25;i++){
        printf("%d\n",arreglo[i-1]);
        sum = sum + arreglo[i-1];
    }
    printf("La suma es : %d",sum);

    getche();
}
