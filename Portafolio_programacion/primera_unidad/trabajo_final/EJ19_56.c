#include <stdio.h>
#include <stdbool.h>
// Constantes
#define USD_EUR 0.92
#define USD_MXN 17.50
#define USD_COP 4100.0
int main(void) {
    //variables
    double monto_usd, euros, pesos_mxn, pesos_cop;
    bool monto_positivo, monto_en_rango;
    //pedir informacion
    printf("Ingrese el monto en dolares: ");
    scanf("%lf", &monto_usd);
    //calculos
    monto_positivo = (monto_usd > 0);
    monto_en_rango = (monto_usd >= 100) && (monto_usd <= 1000);
    if (monto_positivo) {
        euros = monto_usd * USD_EUR;
        pesos_mxn = monto_usd * USD_MXN;
        pesos_cop = monto_usd * USD_COP;
        printf("Monto en USD: %.2f\n", monto_usd);
        printf("Euros: %.2f\n", euros);
        printf("Pesos mexicanos (MXN): %.2f\n", pesos_mxn);
        printf("Pesos colombianos (COP): %.2f\n", pesos_cop);
    } else {
        printf("Monto NO valido, debe ser mayor que 0, no se realizan conversiones\n");
    }
    printf("monto_usd > 0: %s\n", monto_positivo ? "verdadero" : "falso");
    printf("monto_usd >= 100 Y monto_usd <= 1000: %s\n", monto_en_rango ? "verdadero" : "falso");
    return 0;
}