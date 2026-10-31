#include <stdio.h>
void main (){
    float c1, c2, nl, nc_necesario, c3_minima;    
    //entrada de datos
    printf("Ingrese C1: ");
    scanf("%f", &c1);
    printf("Ingrese C2: ");
    scanf("%f", &c2);
    printf("Ingrese NL: ");
    scanf("%f", &nl);
    //proceso
    nc_necesario = (60 - nl * 0.3) / 0.7;
    c3_minima = 3 * nc_necesario - c1 - c2;
    //salida
    printf("Nota minima necesaria en C3: %.2f\n", c3_minima);
    if (c3_minima <= 0) {
        printf("El valor es <= 0, por lo que ya apruebas con tus notas actuales)\n");
    }
    return 0;
}