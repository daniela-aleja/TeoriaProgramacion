#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaración de variables
    const float INGRESO_MIN = 800.0;
    const float PORCENTAJE_MAX = 0.30;
    const float TASA_INTERES = 0.18;
    float ingreso = 0.0, gastos = 0.0, monto = 0.0;
    float ingreso_neto = 0.0, capacidad_pago = 0.0, pago_mensual = 0.0;
    float valor_minimo = 0.0;
    int plazo = 0, contador_operaciones = 0;
    bool credito_aprobado = false;

    // Lectura de datos
    printf("Ingrese el ingreso mensual: ");
    scanf("%f", &ingreso);
    contador_operaciones++;

    printf("Ingrese los gastos mensuales: ");
    scanf("%f", &gastos);
    contador_operaciones++;

    printf("Ingrese el monto solicitado: ");
    scanf("%f", &monto);
    contador_operaciones++;

    printf("Ingrese el plazo en meses: ");
    scanf("%d", &plazo);
    contador_operaciones++;

    // Proceso de cálculo
    ingreso_neto = ingreso - gastos;
    contador_operaciones++;
    capacidad_pago = ingreso_neto * PORCENTAJE_MAX;
    contador_operaciones++;
    pago_mensual = (monto * (1.0f + TASA_INTERES)) / plazo;
    contador_operaciones++;
    // Evaluación lógica
    credito_aprobado = (ingreso >= INGRESO_MIN && pago_mensual <= capacidad_pago);
    contador_operaciones++;
    // Cálculo del mínimo (excluyendo la variable booleana)
    valor_minimo = ingreso;
    if (gastos < valor_minimo) valor_minimo = gastos;
    if (monto < valor_minimo) valor_minimo = monto;
    if (plazo < valor_minimo) valor_minimo = (float)plazo;
    if (ingreso_neto < valor_minimo) valor_minimo = ingreso_neto;
    if (capacidad_pago < valor_minimo) valor_minimo = capacidad_pago;
    if (pago_mensual < valor_minimo) valor_minimo = pago_mensual;
    if (contador_operaciones < valor_minimo) valor_minimo = (float)contador_operaciones;
    contador_operaciones++;

    // Impresión del análisis completo
    printf("Ingreso Neto: $%.2f\n", ingreso_neto);
    printf("Capacidad de Pago: $%.2f\n", capacidad_pago);
    printf("Pago Mensual Requerido: $%.2f\n", pago_mensual);
    printf("Credito Aprobado? %s\n", credito_aprobado ? "Verdadero (SI)" : "Falso (NO)");
    printf("Valor minimo de las variables utilizadas: %.2f\n", valor_minimo);
    printf("Contador de operaciones realizadas: %d\n", contador_operaciones);

    return 0;
}