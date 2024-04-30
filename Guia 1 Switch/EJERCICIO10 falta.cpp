#include <stdio.h>
#include <conio.h>

int main()
{
    int opcion=1, opcion2, edad1, edad2, edad3, grado1, grado2, grado3;
    char name1[20],name2[20], name3[20];
    
    while(opcion!=0){


        printf("|------------------------------------|\n");
        printf("|    DIGITE QUE OPERACION QUIERES    |\n");
        printf("|------------------------------------|\n");
        printf("|1. Estudiantes                      |\n");
        printf("|2. Actualizar datos de estudiante   |\n");
        printf("|3. Cerrar                           |\n");
        printf("|------------------------------------|\n");
        
        scanf("%d", &opcion);
        
        switch (opcion){

            case 1 :printf("|------------------------------------|\n");
                    printf("Estudiante 1 :%s\n",name1);
                    printf("Edad : %d\n",edad1);
                    printf("Grado %d\n",grado1);
                    printf("|------------------------------------|\n");
                    printf(" \n");
                    printf("Estudiante 2 :%s\n",name2);
                    printf("Edad : %d\n",edad2);
                    printf("Grado %d\n",grado2);
                    printf("|------------------------------------|\n");
                    printf(" \n");
                    printf("Estudiante 3 :%s\n",name3);
                    printf("Edad : %d\n",edad3);
                    printf("Grado %d\n",grado3);
                    printf("|------------------------------------|\n");
                    printf(" \n");
                    
            break;
            case 2 :printf("|------------------------------------|\n");
                    printf("|DIGITE QUE DATOS QUIERES ACTUALIZAR |\n");
                    printf("|------------------------------------|\n");
                    printf("|1. Estudiante 1: %s                  |\n",name1);
                    printf("|2. Estudiantes 2: %s                 |\n",name2);
                    printf("|3. Estudiante 3: %s                  |\n",name3);
                    printf("|------------------------------------|\n");
                    scanf("%d",&opcion2);
            switch (opcion2){
                
                
                case 1 :printf("Digite el nombre del Estudiante 1: ");
              	        getchar();
                	    fgets(name1, sizeof(name1), stdin);
                        printf("Digite la dad del Estudiante 1: ");
                        scanf("%d",&edad1);
                        printf("Digite el grado del estudiantes 1: ");
                        scanf("%d",&grado1);
                break;
                
                case 2 :printf("Digite el nombre del Estudiante 2");
                        getchar();
                	    fgets(name2, sizeof(name2), stdin);
                        printf("Digite la dad del Estudiante 2");
                        scanf("%d",&edad2);
                        printf("Digite el grado del estudiantes 2");
                        scanf("%d",&grado2);
                break;
                
                case 3 :printf("Digite el nombre del Estudiante 3");
                        getchar();
                	    fgets(name3, sizeof(name3), stdin);
                        printf("Digite la dad del Estudiante 3");
                        scanf("%d",&edad3);
                        printf("Digite el grado del estudiantes 3");
                        scanf("%d",&grado3);
                break;
                
            }
            break;
            case 3 :opcion=0;
            break;
    
    }   }
    getche();
}
