#include <conio.h>
#include <stdio.h>

int main()
{
    int arreglo[5], cubo, N;
    for (int i = 1; i<=5;i++){
        printf("Digite el numero %d",i);
        scanf("%d", &N);
        cubo = N * (N * N);
        arreglo[i - 1] = cubo;
    }
    for (int i = 0; i<5;i++){
        printf("ale%d\n",arreglo[i]);
    }

    getche();
}
