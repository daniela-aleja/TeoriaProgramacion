#include <stdio.h>
#include <stdbool.h>

int main(void) {
    const float SALDO_MINIMO = 10.0;
    const float LIMITE_RETIRO = 500.0;
    const float COMISION = 0.50;
    double saldo = 0, monto = 0, nuevo_saldo = 0, minimo = 0;
    bool transaccion_exitosa = false;

    printf("Ingrese el saldo de la cuenta: ");
    scanf("%lf", &saldo);
    printf("Ingrese el monto a retirar: ");
    scanf("%lf", &monto);

    nuevo_saldo = saldo;
    transaccion_exitosa = (monto > 0 && monto <= LIMITE_RETIRO && (saldo - monto - COMISION) >= SALDO_MINIMO);

    if (transaccion_exitosa) {
        nuevo_saldo = saldo - monto - COMISION;
    }

    minimo = saldo;
    if (monto < minimo)       minimo = monto;
    if (nuevo_saldo < minimo) minimo = nuevo_saldo;

    if (transaccion_exitosa) {
        printf("Transaccion EXITOSA\n");
        printf("Saldo anterior: %.2f\n", saldo);
        printf("Monto retirado: %.2f\n", monto);
        printf("Comision: %.2f\n", COMISION);
        printf("Nuevo saldo: %.2f\n", nuevo_saldo);
    } else {
        printf("Transaccion RECHAZADA\n");
        printf("Saldo actual (sin cambios): %.2f\n", nuevo_saldo);
    }
    printf("Valor minimo de las variables: %.2f\n", minimo);

    printf("Saldo ingresado: %.2f\n", saldo);
    printf("Monto a retirar ingresado: %.2f\n", monto);
    printf("Estado de la operacion: %s\n", transaccion_exitosa ? "exitosa" : "rechazada");

    return 0;
}