#include <stdio.h>
#include <conio.h>
int main()
{
    int plato=1, n1=0, n2=0, n3=0, prom=0, i;
    
    for(plato=1;plato<=3;plato++){

        switch (plato){
            case 1 :printf("--------------------------------\n");
                    printf("Digite 3 numeros\n");
                    printf(": ");
                    scanf("%d", &n1);
                    printf(": ");
                    scanf("%d", &n2);
                    printf(": ");
                    scanf("%d", &n3);
                    
                    if (n1>n2 && n1 > n3){
                        printf("El numero mayor es %d\n",n1);
                    }else if(n2> n1 && n2 > n3){
                        printf("El numero mayor es %d\n",n2);
                    }else{
                        printf("El numero mayor es %d\n",n3);
                    }
                    
                    if (n1<n2 && n1 < n3){
                        printf("El numero menor es %d\n",n1);
                    }else if(n2< n1 && n2 < n3){
                        printf("El numero menor es %d\n",n2);
                    }else{
                        printf("El numero menor es %d\n",n3);
                    }
                    n3=0;
                    printf("--------------------------------\n");
            break;
            case 2 :printf("Cuantos numeros deseas ingresar: ");
                    scanf("%d",&n1);
                    for(i=1;i<=n1;i++){
                        printf("Digite el numero %d : ",i);
                        scanf("%d", &n2);
                        n3 += n2;
                    }
                    n3 = n3 / n1;
                    printf("El promedio es %d\n",n3);
                    n3=0;
                    printf("--------------------------------\n");
            break;
            
            case 3 :printf("Cuantos numeros deseas ingresar: ");
                    scanf("%d",&n1);
                    for(i=1;i<=n1;i++){
                        printf("Digite el numero %d : ",i);
                        scanf("%d", &n2);
                        if(n2>0){
                            n3++;
                        }
                    }
                    printf("Hay %d numeros positivos\n",n3);
                    printf("--------------------------------\n");
            break;

    }   }
    getche();
}
