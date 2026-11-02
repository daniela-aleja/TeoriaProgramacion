#include <stdio.h>
int main (){
    //definir variable
    const double galon_litro = 3.78541;
    const double pi = 3.14159;
    float galones, litros, producto_pi ;
    //pedir datos
    printf("Ingrese el volumen en galones: ");
    scanf("%f", &galones);
    //Operaciones
    litros = galones * galon_litro;
    producto_pi = litros * pi;
    //Funcion lógica
    if(litros > 0){
        printf("%.2f galones equivale a %.5f litros.\n", galones, litros);
        printf("El producto de los litros por PI es: %.5f\n", producto_pi);
        printf("Tipo de operacion realizada: multiplicacion aritmetica.\n");
    }else{
        printf("El volumen en litros no es mayor que cero.\n");
        printf("Revise el valor ingresado en galones.\n");
    }
return 0; 
}