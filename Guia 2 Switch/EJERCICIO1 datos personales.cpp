#include <stdio.h>
#include<conio.h>
int main()
{
    int opcion=1, cedula=0, cel=0;
    char name[20];
    
    while(opcion!=0){


        printf("|------------------------------------|\n");
        printf("|      DIGITE QUE OPCION QUIERES     |\n");
        printf("|------------------------------------|\n");
        printf("|1. Registrar usuario                |\n");
        printf("|2. Modificar usuario                |\n");
        printf("|3. Visualizar usuario               |\n");
        printf("|4. Cerrar                           |\n");
        printf("|------------------------------------|\n");
        
        scanf("%d", &opcion);
        
        switch (opcion){
            
            case 1 :printf("Digite su nombre: ");
          	        getchar();
            	    fgets(name, sizeof(name), stdin);
                    printf("Digite numero de cedula: ");
                    scanf("%d",&cedula);
                    printf("Digite numero de telefono: ");
                    scanf("%d",&cel);
            break;
            
            case 2 :printf("Digite su nombre: ");
          	        getchar();
            	    fgets(name, sizeof(name), stdin);
                    printf("Digite numero de cedula: ");
                    scanf("%d",&cedula);
                    printf("Digite numero de telefono: ");
                    scanf("%d",&cel);
            break;
            case 3 :printf("|------------------------------------|\n");
                    printf("Nombre :%s\n",name);
                    printf("Cedula : %d\n",cedula);
                    printf("Telefono %d\n",cel);
                    printf("|------------------------------------|\n");
            break;
            default: opcion=0;
            
        }   

    }   
    getche();
}
