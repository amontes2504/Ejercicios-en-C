#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char contrasena[20];
    int intentos = 3;
    char usuarioCorrecto[] = "usuario";
    char contrasenaCorrecta[] = "contrasena";
    
    while (intentos > 0) {
        printf("Ingrese su usuario: ");
        scanf("%s", usuario);
        
        printf("Ingrese su contraseña: ");
        scanf("%s", contrasena);
        
        if (strcmp(usuario, usuarioCorrecto) == 0 && strcmp(contrasena, contrasenaCorrecta) == 0) {
            printf("¡Bienvenido, %s!\n", usuario);
            break;
        } else {
            intentos--;
            printf("Usuario o contraseña incorrectos. Le quedan %d intento(s).\n", intentos);
        }
    }
    
    if (intentos == 0) {
        printf("Ha excedido el número máximo de intentos. Acceso denegado.\n");
    }
    
    return 0;
}
