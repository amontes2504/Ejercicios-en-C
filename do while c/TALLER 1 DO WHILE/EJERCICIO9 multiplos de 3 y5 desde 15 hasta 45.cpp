#include <stdio.h>
#include <conio.h>

int main (){
    int  i=14;

    do{
       i++;
        if (i % 3 == 0 || i % 5 == 0){
            printf("%d\n",i);
        }
    }
    while (i<=45);
    getche();
}
