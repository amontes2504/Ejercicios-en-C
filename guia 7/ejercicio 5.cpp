#include <stdio.h>

int main() {
    char tipoPizza;
    char agregarIngredientes;
    int precioTotal = 0;
    
    printf("Bienvenido a Villa Italia Pizzería!\n");
    printf("Seleccione el tipo de pizza (V: Vegetariana / N: No vegetariana): ");
    scanf(" %c", &tipoPizza);
    
    if (tipoPizza == 'V' || tipoPizza == 'v') {
        printf("Pizzas vegetarianas disponibles: Pimiento, Tofu, Champiñones\n");
        printf("¿Desea agregar ingredientes adicionales? (S/N): ");
        scanf(" %c", &agregarIngredientes);
        
        if (agregarIngredientes == 'S' || agregarIngredientes == 's') {
            printf("Seleccione los ingredientes adicionales (P: Pimiento / T: Tofu / C: Champiñones): ");
            char opcionIngrediente;
            scanf(" %c", &opcionIngrediente);
            
            if (opcionIngrediente == 'P' || opcionIngrediente == 'p') {
                precioTotal + 1000;
            } else if (opcionIngrediente == 'T' || opcionIngrediente == 't') {
                precioTotal + 2000;
            } else if (opcionIngrediente == 'C' || opcionIngrediente == 'c') {
                precioTotal + 3000;
            }
        }
        
        precioTotal += 8000; // Precio base de pizza vegetariana
        
    } else if (tipoPizza == 'N' || tipoPizza == 'n') {
        printf("Pizzas no vegetarianas disponibles: Pepperoni, Jamón, Salmón\n");
        printf("¿Desea agregar ingredientes adicionales? (S/N): ");
        scanf(" %c", &agregarIngredientes);
        
        if (agregarIngredientes == 'S' || agregarIngredientes == 's') {
            printf("Seleccione los ingredientes adicionales (P: Pepperoni / J: Jamón / S: Salmón): ");
            char opcionIngrediente;
            scanf(" %c", &opcionIngrediente);
            
            if (opcionIngrediente == 'P' || opcionIngrediente == 'p') {
                precioTotal + 2000;
            } else if (opcionIngrediente == 'J' || opcionIngrediente == 'j') {
                precioTotal + 3000;
            } else if (opcionIngrediente == 'S' || opcionIngrediente == 's') {
                precioTotal + 5000;
            }
        }
        
        precioTotal = 10000; // Precio base de pizza no vegetariana
        
    } else {
        printf("Opción inválida. Por favor, seleccione V o N.\n");
        return 0;
    }
    
    printf("El precio total de la pizza es: $%d\n", precioTotal);
    
    return 0;
}
