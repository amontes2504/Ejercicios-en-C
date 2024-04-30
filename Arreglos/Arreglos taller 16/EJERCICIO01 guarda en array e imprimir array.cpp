#include <conio.h>
#include <stdio.h>

int main()
{
    int arreglo[5];
    for (int i = 1; i<=5;i++){
        printf("Digite el numero %d",i);
        scanf("%d", &arreglo[i-1]);
        
    }
    for (int i = 0; i<5;i++){
        printf("%d\n",arreglo[i]);
    }

    getche();
}
