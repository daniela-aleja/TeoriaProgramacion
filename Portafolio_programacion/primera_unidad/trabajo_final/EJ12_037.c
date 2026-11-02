#include <stdio.h>
#include <stdbool.h>
void main() {
    //variables
    int y, doble, triple;
    double inverso_doble, inverso_triple;
    bool condicion = false;
    //pedir informacion
    printf("Ingrese un numero entero : ");
    scanf("%d", &y);
    doble = 2 * y;
    triple = 3 * y;
    condicion = (doble < triple) && (doble > 0);
    //salida
    printf("Doble: %d\n", doble);
    printf("Triple: %d\n", triple);
    printf("Condicion (doble < triple Y doble > 0): %s\n", condicion ? "verdadero" : "falso");

    if (doble != 0) {
        inverso_doble = 1.0 / doble;
        printf("Inverso del doble: %.4f\n", inverso_doble);
    } else {
        printf("El doble es cero: no se calcula su inverso\n");
    }

    if (triple != 0) {
        inverso_triple = 1.0 / triple;
        printf("Inverso del triple: %.4f\n", inverso_triple);
    } else {
        printf("El triple es cero: no se calcula su inverso\n");
    }
    printf("condicion: %s\n", condicion ? "verdadero" : "falso");
    printf("inverso_doble: %.4f\n", inverso_doble);
    printf("inverso_triple: %.4f\n", inverso_triple);

    return 0;
}