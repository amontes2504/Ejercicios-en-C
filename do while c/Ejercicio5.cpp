//hacer un programa que lea e imprima letras diferentes a h
#include <stdio.h>
#include <conio.h>

int main (){
    char letra=' ';
    
    do{
        printf("Digite letras y digita H para acabar el programa : \n");
        letra=getchar();
        letra=getchar();
    }
    while (letra!='h' || letra !='H');
}
