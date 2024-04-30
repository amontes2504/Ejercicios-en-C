#include <stdio.h>

int main() {
    
    int temp[31],i,min,max,avg,days;
    
    printf("Cuantos dias tiene el mes: ");
    scanf("%d", &days);
    
    for (i=0;i<days; i++){
        printf("Introduzca la temperatura del dia %d ",i+1);
        scanf("%d", &temp[i]);
    }
    avg=0;
    for(i=0; i<days;i++){
        avg=avg + temp[i];
    }
    printf("Temperatura media: %d\n",avg/days);
    min=200;
    max=0;
    
    for(i=0;i<days;i++){
        if (min>temp[i]){
            min = temp[i];
        }
        if(max<temp[i]){
            max=temp[i];
        }
    }
    printf("La temperaura minima es de: %d\n",min);
    printf("La temperaura maxima es de: %d\n",max);

}
