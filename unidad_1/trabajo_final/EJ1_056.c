#include <stdio.h>
#include <stdbool.h>

int main() {
    //Constantes y variables
    const int dia_max = 31;
    const int mes_max = 12;
    const int anio_min = 1900;
    const int anio_max = 2025;
    const int anio_actual = 2025;
    int dia, mes, anio, edad, minimo;
    bool fecha_valida;
    //Pedir datos
    printf("Ingrese el dia: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    //Proceso 
    fecha_valida = (dia >= 1 && dia <= dia_max &&
                    mes >= 1 && mes <= mes_max &&
                    anio >= anio_min && anio <= anio_max);

    edad = anio_actual - anio;
    minimo = dia;
    if (mes < minimo) minimo = mes;
    if (anio < minimo) minimo = anio;
    if (edad < minimo) minimo = edad;
    // Salida
    printf("Fecha valida? %s\n", fecha_valida ? "true" : "false");
    printf("Edad aproximada: %d\n", edad);
    printf("Valor minimo de todas las variables: %d\n", minimo);

    return 0;
}