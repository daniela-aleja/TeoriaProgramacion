#include <stdio.h>
#include <stdbool.h>

int main() {
    //declarar variables
    float distancia, tiempo, velocidad, velocidad_bono;
    bool datos_validos;
    //pedir datos
    printf("Ingrese la distancia recorrida en metros: ");
    scanf("%f", &distancia);
    printf("Ingrese el tiempo empleado en segundos: ");
    scanf("%f", &tiempo);
    //proceso
    datos_validos = (tiempo > 0 && distancia >= 0);
    if (datos_validos) {
        velocidad = distancia / tiempo;
        velocidad_bono = velocidad * 1.5;
        printf("Calculo realizado con exito\n");
    } else {
        printf("El tiempo debe ser mayor a 0 y la distancia no puede ser negativa\n");
    }
    //salida de resultados
    printf("Velocidad (m/s): %.2f\n", velocidad);
    printf("Velocidad con bono (x1.5): %.2f\n", velocidad_bono);
    return 0;
}