#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // Constantes y variables
    const float pi = 3.14159;
    double grados, radianes, cociente;
    bool angulo_valido, datos_positivos;
    //pedir informacion
    printf("Ingrese el angulo en grados: ");
    scanf("%lf", &grados);
    //calculos
    angulo_valido = (grados >= 0) && (grados <= 360);
    datos_positivos = (grados > 0);
    if (!datos_positivos) {
        printf("Dato NO valido, el angulo debe ser positivo\n");
    } else if (!angulo_valido) {
        printf("Angulo NO valido, debe estar entre 0 y 360 grados\n");
    } else {
        radianes = grados * pi / 180;
        cociente = radianes / 1.5;
        printf("%.2f grados equivalen a %.4f radianes\n", grados, radianes);
        printf("Cociente (radianes / 1.5): %.4f\n", cociente);
    }

    return 0;
}