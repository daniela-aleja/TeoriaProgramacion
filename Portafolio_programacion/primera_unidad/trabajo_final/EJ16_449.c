#include <stdio.h>
#include <stdbool.h>
#include <math.h> // Para roundf
#define factor 0.5556
#define offset_k 273.15
int main() {
    // Inicialización de variables
    float fahrenheit, kelvin;
    bool es_valido;
    int kelvin_entero;
    const char *paridad = "No aplica";
    //Encabezado descriptivo
    printf("=============================================\n");
    printf("   SISTEMA DE CONVERSION - LIBRERIA         \n");
    printf("   Fahrenheit a Kelvin                      \n");
    printf("=============================================\n");
    //Entrada
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);
    //Cálculo 
    kelvin = (fahrenheit - 32.0f) * factor + offset_k;
    es_valido = (kelvin >= 0);
    if (es_valido) {
        kelvin_entero = (int)roundf(kelvin);
        if (kelvin_entero % 2 == 0) {
            paridad = "Par";
        } else {
            paridad = "Impar";
        }
    } else {
        paridad = "No aplica (temperatura bajo el cero absoluto)";
    }
    printf("---------------------------------------------\n");
    printf("%.2f F equivalen a %.2f K\n", fahrenheit, kelvin);
    printf("Temperatura valida (>= 0 K)? %s\n", es_valido ? "true" : "false");
    printf("Paridad del resultado (redondeado): %s\n", paridad);
    printf("=============================================\n");
    return 0;
}