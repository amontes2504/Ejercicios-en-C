#include <stdio.h>
#include <conio.h>

int main()
{
    char letra=' ';

    printf("|------------------------------------|\n");
    printf("|           DIGITE LA LETRA          |\n");
    printf("|------------------------------------|\n");

    scanf("%c", &letra);
    
        switch (letra){
            case 'a' :printf("Es la vocal a");
            break;
            case 'e' :printf("Es la vocal e");
            break;
            case 'i' :printf("Es la vocal i");
            break;
            case 'o' :printf("Es la vocal o");
            break;
            case 'u' :printf("Es la vocal u");
            break;
            default :printf("No es una vocal");
            break;

        }
        getche();
}
