#include <stdio.h>
#include <stdbool.h>
int main(){
    //declarar variables
    double base, altura, area, perimetro, doble_area, doble_perimetro;
    bool datos_validos = false;
    const int literal = 2;
    //pedir datos
    printf("Ingrese la base del rectangulo: ");
    scanf("%Lf", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%Lf", &altura);
    //operaciones
    datos_validos = (base > 0) && (altura > 0);

    if (datos_validos) {
        area = base * altura;
        perimetro = literal * (base + altura);
        doble_area = literal * area;
        doble_perimetro = literal * perimetro;

        printf("Area: %.2f\n", area);
        printf("Perimetro: %.2f\n", perimetro);
        printf("Doble del area: %.2f\n", doble_area);
        printf("Doble del perimetro: %.2f\n", doble_perimetro);
        printf("Operacion completada con exito\n");
    } else {
        printf("\nDatos no validos: la base y la altura deben ser mayores que 0\n");
    }
    return 0;
}
   
