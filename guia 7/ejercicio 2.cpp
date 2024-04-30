#include <stdio.h>
#include <string.h>

int main() {
    char nombre[20];
    char sexo;
    
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    
    printf("Ingrese su sexo (M/F): ");
    scanf(" %c", &sexo);
    
    if ((sexo == 'f' && nombre[0] < 'm') || (sexo == 'm' && nombre[0] > 'n')) {
        printf("Usted pertenece al grupo A.\n");
    } else {
        printf("Usted pertenece al grupo B.\n");
    }
    
    return 0;
}
