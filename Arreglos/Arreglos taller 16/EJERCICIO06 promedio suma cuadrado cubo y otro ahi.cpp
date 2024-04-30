#include <conio.h>
#include <stdio.h>

int main()
{
    int N=0, sum=0, prom=0, cuadrado=0, cubo=0, de=0, cuadradoD=0, sumD=0;
    
    printf("Digite cuantos numeros quieres ingresar: ");
    scanf("%d", &N);
    
    int arreglo[N];
    
    for (int i = 0; i<N; i++){
        printf("Digite el numero %d: ",i+1);
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i<N; i++){
        sum += arreglo[i];
        cuadradoD = arreglo[i] * arreglo[i];
        sumD += cuadradoD;
    }
    prom = sum / N;
    cuadrado = sum * sum;
    cubo = sum * (sum * sum);
    de= sumD / N;
    printf("La suma es : %d\n", sum );
    printf("El promedio es : %d\n", prom);
    printf("El cuadrado de la suma es : %d\n", cuadrado );
    printf("El cubo de la suma es es : %d\n", cubo);
    printf("La desviacion estandar es : %d\n", de);
    getche();
}
