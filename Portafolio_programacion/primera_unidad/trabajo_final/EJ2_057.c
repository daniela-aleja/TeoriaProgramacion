#include <stdio.h>
#include <stdbool.h>
int main() {
    //constantes y variables
    const float usd_eur = 0.92;
    const float usd_mxn = 17.50;
    const float usd_pen = 3.75;
    float monto = 0.0;
    float euros = 0.0;
    float pesos = 0.0;
    float soles = 0.0;
    float valor_minimo = 0.0;
    bool monto_valido = false;
    //Pedir datos
    printf("Ingrese el monto en dolares: ");
    scanf("%f", &monto);
    //operaciones
    monto_valido = (monto > 0.0 && monto <= 10000.0);
    euros = monto * usd_eur;
    pesos = monto * usd_mxn;
    soles = monto * usd_pen;
    valor_minimo = monto;
    if (euros < valor_minimo) {
        valor_minimo = euros;
    }
    if (pesos < valor_minimo) {
        valor_minimo = pesos;
    }
    if (soles < valor_minimo) {
        valor_minimo = soles;
    }
    //resultados
    printf("Monto en dolares: %.2f\n", monto);
    printf("Euros:            %.2f\n", euros);
    printf("Pesos mexicanos:  %.2f\n", pesos);
    printf("Soles peruanos:   %.2f\n", soles);
    printf("Monto valido?     %s\n", monto_valido ? "true" : "false");
    printf("Valor minimo:     %.2f\n", valor_minimo);
    return 0;
}