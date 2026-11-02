#include <stdio.h>
#include <stdbool.h>
void main(){
    //declarar variables y constantes
    int n, u, cubo_n, cubo_u, residuo1, residuo2;
    bool n_par, u_par;
    const int literal = 2;
    printf("Ingrese el primer valor entero: ");
    scanf("%d", &n);
    printf("Ingrese el segundo valor entero: ");
    scanf("%d", &u);
    //proceso
    residuo1 = n % literal;
    residuo2 = u % literal;
    n_par = residuo1 == 0;
    u_par = residuo2 == 0;
    cubo_n = n * n * n;
    cubo_u = u * u * u;
    if(n_par){
        printf("El numero %d es par (residuo = %d)\n", n, residuo1);
    }else{
        printf("El numero %d es impar (residuo = %d)\n", n, residuo1);
    }
    if(u_par){
        printf("El numero %d es par (residuo = %d)\n", u, residuo2);
    }else{
        printf("El numero %d es impar (residuo = %d)\n", u, residuo2);
    }
    printf("Cubo de %d: %d\n", n, cubo_n);
    printf("Cubo de %d: %d\n", u, cubo_u);
}