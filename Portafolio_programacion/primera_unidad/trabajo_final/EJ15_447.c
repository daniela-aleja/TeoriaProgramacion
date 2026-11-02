#include <stdio.h>
#include <stdbool.h>
int main(void) {
    //variables
    double a, cuadrado, resto;
    long long cociente;
    bool cuadrado_no_negativo;
    //pedir informacion
    printf("Ingrese un numero real: ");
    scanf("%lf", &a);
    //calculos
    cuadrado = a * a;
    cuadrado_no_negativo = (cuadrado >= 0);
    if (cuadrado_no_negativo) {
        printf("El cuadrado de %.2f es %.2f\n", a, cuadrado);
        cociente = (long long) (cuadrado / 3);
        resto = cuadrado - 3 * cociente;
        printf("Resto de dividir %.2f entre 3: %.2f\n", cuadrado, resto);
    } else {
        printf("Resultado NO valido: el cuadrado no puede ser negativo\n");
    }
    printf("Grandes cosas se construyen paso a paso! Sigue practicando.\n");
    return 0;
}