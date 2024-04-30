//01 1 2 3 5 8 13
#include <stdio.h>
int main (){

int a=0, b=1, c, i;
printf("Codigo fibonacci");


for (i = 1; i <= 20; i++) {
    c=a+b;
    a=c+b;
printf("%d",c);
}
}
return 0;



















































/*//Realizar programa que permita contar entre 2 numeros cuantos son negativos, positivos neutros, pares e impares
#include <stdio.h>

int main() {
    int n1, n2, i, mayor, menor;
    int positivos = 0, negativos = 0, neutros = 0, pares = 0, impares = 0;

    printf("Ingrese el numero 1: ");
    scanf("%d", &n1);
    
    printf("Ingrese el numero 2: ");
    scanf("%d", &n2);
    
    if (n1>n2 ) {
            mayor=n1;
            menor=n2;
        } else {
            mayor=n2;
            menor=n1;
        }

    for (i = menor; i <= mayor; i++) {

        if (i > 0) {
            positivos++;
        } else if (i < 0) {
            negativos++;
        } else {
            neutros++;
        }

        if (i % 2 == 0 && i!=0) {
            pares++;
        } else if(i!=0){
            impares++;
        }
    }

    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros neutros: %d\n", neutros);
    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);
    scanf("%d", &n2);
    return 0;
}
*/
