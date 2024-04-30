#include <stdio.h>

int main() {
    int numero_empleados,  horas_trabajadas, salario, subsidio_transporte, total_nomina;

    printf("Ingrese el número de empleados: ");
    scanf("%d", &numero_empleados);
    
    printf("Ingrese las horas trabajadas de los empleados: ");
    scanf("%d", &horas_trabajadas);
    
    printf("Ingrese el salario por hora de los empleados: ");
    scanf("%d", &salario);
    
        if (numero_empleados > 50) {
            subsidio_transporte = (salario * horas_trabajadas)* 0.20;
        } else {
            subsidio_transporte = 0;
        }

        total_nomina = (salario * horas_trabajadas) + subsidio_transporte;
    

    printf("Total de la nómina: $%d\n", total_nomina);

    return 0;
}
