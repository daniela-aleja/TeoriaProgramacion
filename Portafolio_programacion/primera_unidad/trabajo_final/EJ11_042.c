#include <stdio.h>
#include <stdbool.h>

int main() {
    //variables
    float peso, altura, imc, imc_cuadrado, altura_cuadrado;
    bool bajo_peso, sobre_peso;
    //pedir informacion
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
    //Proceso
    altura_cuadrado = altura * altura;
    imc = peso / altura_cuadrado;
    bajo_peso = (imc < 18.5);
    sobre_peso = (imc > 25.0);
    imc_cuadrado = imc * imc;
    //salida
    printf("IMC calculado: %.2f\n", imc);
    if (bajo_peso) {
        printf("Esta BAJO el rango normal (IMC < 18.5)\n");
    } else if (sobre_peso) {
        printf("Esta SOBRE el rango normal (IMC > 25.0)\n");
    } else {
        printf("Esta DENTRO del rango normal (18.5 - 25.0)\n");
    }
    printf("Cuadrado del IMC: %.2f\n", imc_cuadrado);
    printf("Peso ingresado:      %.2f kg\n", peso);
    printf("Altura ingresada:    %.2f m\n", altura);
    printf("Altura al cuadrado:  %.4f m2\n", altura_cuadrado);
    printf("Bajo peso?           %s\n", bajo_peso ? "true" : "false");
    printf("Sobre peso?          %s\n", sobre_peso ? "true" : "false");
    return 0;
}