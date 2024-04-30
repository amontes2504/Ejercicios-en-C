#include <conio.h>
#include <stdio.h>

int main()
{
    int N=0;
    
    printf("Digite cuantas sumas quieres realizar: ");
    scanf("%d", &N);
    
    int arreglo[N], arreglo2[N], arreglo3[N];
    
    for (int i = 0; i<N; i++){
        printf("Digite el numero 1 de la suma %d: ",i+1);
        scanf("%d", &arreglo[i]);
        printf("Digite el numero 2 de la suma %d: ",i+1);
        scanf("%d", &arreglo2[i]);
    }
    for (int i = 0; i<N; i++){
        arreglo3[i] = arreglo[i] + arreglo2[i];
        printf("%d + %d = %d\n",arreglo[i], arreglo2[i], arreglo3[i]);
    }
    getche();
}
