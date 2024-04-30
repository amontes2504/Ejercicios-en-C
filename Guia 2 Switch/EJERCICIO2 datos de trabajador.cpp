#include <stdio.h>
#include <conio.h>

int main (){
    int horat, valorh, salario, opcion;
    char comentarios[50];
    
    printf("Digite las horas trabajadas del trabajador: ");
    scanf("%d", &horat);
    
    printf("Digite el valor por hora del trabajador: ");
    scanf("%d", &valorh);
    
    salario = valorh * horat;
    
    while(opcion!=3){
        printf(" ");
        printf("|---------------------------------------|\n");
        printf("|      DIGITE LA FUNCION REQUERIDA      |\n");
        printf("|---------------------------------------|\n");
        printf("|1. Visualizar el salario del trabajador|\n");
        printf("|2. Modificar el salario del trabajador |\n");
        printf("|3. Cerrar                              |\n");
        printf("|---------------------------------------|\n");
        scanf("%d",&opcion);
        printf(" ");
        switch(opcion){
            case 1: printf("El salario del trabajador es: %d\n",salario);
                    printf("Comentarios: %s\n",comentarios);
            break;
            
            case 2: printf("Digite el nuevo salario del trabajador, el actual es de %d: ",salario);
                    scanf("%d",&salario);
                    printf("Digite un omentario de porque el cambio de sueldo: ");
                    getchar();
                    fgets(comentarios, sizeof(comentarios), stdin);
            break;
        }
    }
    getche();
    
}
