#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define min_len 5
#define max_len 50

int main() {
    //Inicialización de todas las variables
    char correo[100] = "";
    char criterios_fallidos[300] = "";
    int  longitud = 0, pos_arroba = 0, pos_punto = 0, minimo = 0;
    bool correo_valido = false;
    bool c1 = false, c2 = false, c3 = false, c4 = false, c5 = false, c6 = false;

    //Datos
    printf("Ingrese el correo electronico: ");
    scanf("%99s", correo);

    // Proceso 
    longitud = (int)strlen(correo);

    // Proceso - Evaluación de cada criterio por separado
    c1 = (longitud >= min_len);
    c2 = (longitud <= max_len);
    c3 = (strchr(correo, '@') != NULL);
    c4 = (strchr(correo, '.') != NULL);
    c5 = (correo[0] != '@');
    c6 = (longitud > 0 && correo[longitud - 1] != '@');

    // Proceso - Expresión lógica compuesta (bien parentizada)
    correo_valido = (c1 && c2 && c3 && c4 && c5 && c6);

    // Proceso - Criterios fallidos
    if (!c1) strcat(criterios_fallidos, "Longitud < MIN_LEN. ");
    if (!c2) strcat(criterios_fallidos, "Longitud > MAX_LEN. ");
    if (!c3) strcat(criterios_fallidos, "No contiene '@'. ");
    if (!c4) strcat(criterios_fallidos, "No contiene '.'. ");
    if (!c5) strcat(criterios_fallidos, "Empieza con '@'. ");
    if (!c6) strcat(criterios_fallidos, "Termina con '@'. ");

    if (criterios_fallidos[0] == '\0')
        strcpy(criterios_fallidos, "Ninguno (correo valido)");

    // Posiciones para el mínimo (si no existen, quedan en 0)
    char *p_arroba = strchr(correo, '@');
    char *p_punto  = strchr(correo, '.');
    pos_arroba = p_arroba ? (int)(p_arroba - correo) : 0;
    pos_punto  = p_punto  ? (int)(p_punto  - correo) : 0;

    // Proceso 
    float fv = correo_valido ? 1.0f : 0.0f;
    minimo = longitud;
    minimo = min_len    < minimo ? min_len    : minimo;
    minimo = max_len    < minimo ? max_len    : minimo;
    minimo = pos_arroba < minimo ? pos_arroba : minimo;
    minimo = pos_punto  < minimo ? pos_punto  : minimo;
    minimo = (fv < minimo) ? (int)fv : minimo;

    // Salida
    
    printf("Correo ingresado:    %s\n", correo);
    printf("Longitud:            %d\n", longitud);
    printf("Correo valido?       %s\n", correo_valido ? "true" : "false");
    printf("Criterios fallidos:  %s\n", criterios_fallidos);
    printf("Valor minimo:        %d\n", minimo);

    return 0;
}