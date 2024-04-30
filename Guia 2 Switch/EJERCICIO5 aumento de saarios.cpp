#include <stdio.h>
#include <conio.h>

int main (){
    int horat, opcion=0;
    float valorh, salario, aumento;


    printf("Digite las horas trabajadas del trabajador: ");
    scanf("%d", &horat);
    
    printf("Digite el valor por hora del trabajador: ");
    scanf("%f", &valorh);
    
    salario = valorh * horat;
    
    while(opcion==0){
        printf(" ");
        printf("|---------------------------------------|\n");
        printf("|     DIGITE NIVEL DE ANTIGUEDAD        |\n");
        printf("|---------------------------------------|\n");
        printf("|1. 1 Año                               |\n");
        printf("|2. 2 Años                              |\n");
        printf("|3. 3 Años                              |\n");
        printf("|4. 4 años                              |\n");
        printf("|5. 5 Años                              |\n");
        printf("|---------------------------------------|\n");
        scanf("%d",&opcion);
        printf(" \n");
        switch(opcion){

            case 1: aumento = salario * 0.1;
                    salario +=aumento;
                    printf("El salario es de: %.0f\n",salario);
                    printf("Digite 0 si desea repetir: ");
                    scanf("%d", &opcion);
                    salario -= aumento;
            break;
            
            case 2: aumento = salario * 0.1;
                    salario +=aumento;
                    printf("El salario es de: %.0f\n",salario);
                    printf("Digite 0 si desea repetir: ");
                    scanf("%d", &opcion);
                    salario -= aumento;
            break;
            
            case 3: aumento = salario * 0.15;
                    salario +=aumento;
                    printf("El salario es de: %.0f\n",salario);
                    printf("Digite 0 si desea repetir: ");
                    scanf("%d", &opcion);
                    salario -= aumento;
            break;
            
            case 4: aumento = salario * 0.2;
                    salario +=aumento;
                    printf("El salario es de: %.0f\n",salario);
                    printf("Digite 0 si desea repetir: ");
                    scanf("%d", &opcion);
                    salario -= aumento;
            break;
            
            case 5: aumento = salario * 0.25;
                    salario +=aumento;
                    printf("El salario es de: %.0f\n",salario);
                    printf("Digite 0 si desea repetir: ");
                    scanf("%d", &opcion);
                    salario -= aumento;
            break;
            
            default:printf("ERROR\n");
            printf("Digite 0 si desea repetir: ");
                    scanf("%d", &opcion);
        }
    }
    getche();
    
}
