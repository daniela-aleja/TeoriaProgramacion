#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void main() {
    //variables
    double num1, num2, promedio, logaritmo;
    bool promedio_positivo;
    //pedir informacion
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
    //calculos
    promedio = (num1 + num2) / 2;
    promedio_positivo = (promedio > 0);
    printf("Promedio: %.2f\n", promedio);
    if (promedio_positivo) {
        logaritmo = log10(promedio);
        printf("Logaritmo base 10 del promedio: %.4f\n", logaritmo);
    } else {
        printf("No se puede calcular el logaritmo, el promedio debe ser mayor que 0\n");
    }
    printf("\n----- TABLA DE DATOS Y RESULTADOS -----\n");
    printf("| %-20s | %11s |\n", "Dato", "Valor");
    printf("|%s|%s|\n", "----------------------", "-------------");
    printf("| %-20s | %11.4f |\n", "num1", num1);
    printf("| %-20s | %11.4f |\n", "num2", num2);
    printf("| %-20s | %11.4f |\n", "promedio", promedio);
    printf("| %-20s | %11s |\n", "promedio > 0", promedio_positivo ? "verdadero" : "falso");
    if (promedio_positivo) {
        printf("| %-20s | %11.4f |\n", "log10(promedio)", logaritmo);
    } else {
        printf("| %-20s | %11s |\n", "log10(promedio)", "no calculado");
    }

    return 0;
}