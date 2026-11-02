#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// Constante simbolica declarada al inicio
int main(void) {
    const float porcentaje_ideal = 0.20;
    double ingreso, gasto, ahorro, ahorro_ideal, raiz;
    bool cumple_ideal;
    printf("Ingrese el ingreso mensual: ");
    scanf("%lf", &ingreso);
    printf("Ingrese el gasto mensual: ");
    scanf("%lf", &gasto);
    ahorro = ingreso - gasto;
    ahorro_ideal = ingreso * porcentaje_ideal;
    cumple_ideal = (ahorro >= ahorro_ideal);
    raiz = sqrt(fabs(ahorro));
    printf("Ahorro: %.2f\n", ahorro);
    printf("Ahorro ideal (20%% del ingreso): %.2f\n", ahorro_ideal);
    printf("Cumple con el ahorro ideal: %s\n", cumple_ideal ? "SI" : "NO");
    printf("Raiz cuadrada del valor absoluto del ahorro: %.2f\n", raiz);

    return 0;
}