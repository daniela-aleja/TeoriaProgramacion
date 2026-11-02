#include <stdio.h>
int main(){
    int x, u, val2, suma, producto;
    const int literal = 3;
    float promedio;
    //pedir datos
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &x);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d",&u);
    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &val2);
    //operaciones
    suma = x + u + val2;
    producto = x * u * val2;
    promedio = (x + u + val2)/literal;
    if (suma >0){
        printf("El resulatado de la suma es positivo.\n");
    }else{
        if (suma < 0){
            printf("El resultado de la suma es negativo.\n");
        }else{
            printf("El resultado de la suma es 0.\n");
        }
    }
    printf("Suma: %d.\n", suma);
    printf("Producto: %d.\n", producto);
    printf("Promedio: %.2f", promedio);
    return 0;
}

