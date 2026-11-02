#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main() {
    //variables y constantes
    float pies, metros;
    bool es_positivo;
    int metros_entero;
    const float pie_metro = 0.3048;
    const char *paridad = "No aplica";
    //pedir informacion
    printf("Altura en pies: ");
    scanf("%f", &pies);
    // Cálculo
    metros = pies * pie_metro;
    es_positivo = (metros > 0);
    if (es_positivo) {
        metros_entero = (int)roundf(metros); // Redondeo al entero más cercano
        if (metros_entero % 2 == 0) {
            paridad = "Par";
        } else {
            paridad = "Impar";
        }
    } else {
        paridad = "No aplica, el resultado no es mayor a 0";
    }
    // Salida
    printf("%.2f pies equivalen a %.2f metros\n", pies, metros);
    printf("El resultado es mayor a 0? %s\n", es_positivo ? "true" : "false");
    printf("Paridad del resultado (redondeado): %s\n", paridad);
    return 0;
}