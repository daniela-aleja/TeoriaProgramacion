#include <stdio.h>
#include <stdbool.h>
void main (){
    int anio, residuo4, residuo100, residuo400, minimo;
    bool datos_validos, es_bisiesto;
    printf("Ingrese el anio: ");
    scanf("%d", &anio);
    datos_validos = anio > 0;
    if (datos_validos){
        residuo4 = anio % 4;
        residuo100 = anio % 100;
        residuo400 = anio % 400;
        es_bisiesto = (residuo4 == 0) && ((residuo100 != 0) || (residuo400 == 0));
        minimo = anio;
        if (residuo4 < minimo){
            minimo = residuo4;
        }
        if (residuo100 < minimo){
            minimo = residuo100;
        }
        if (residuo400 < minimo){
            minimo = residuo400;
        }
        if (es_bisiesto){
            printf("El anio %d ES bisiesto\n", anio);
        }else{
            printf("El anio %d NO es bisiesto\n", anio);
        }
        printf("Valor minimo de las variables: %d", minimo);
    }else{
        printf("Anio NO valido, debe ser mayor a 0");
    }
    return 0;
}