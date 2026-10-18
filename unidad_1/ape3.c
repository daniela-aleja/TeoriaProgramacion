#include <stdio.h>
int main (){
    
    int cant_doc, cant_img, cant_vid, cant_prog;
    float tam_doc, tam_img, tam_vid, tam_prog;
    float espacio_doc, espacio_img, espacio_vid, esapcio_prog;
    float espacion_total_mb, espacio_total_gb, cap_disco_gb, porcentaje;

    printf("Ingrese la cantidad de documentos: ");
    scanf("%d", &cant_doc);
    printf("Ingrese el tamano promedio de Documentos en mb: ");
    scanf("%f", &tam_doc);

    printf("Ingrese la cantidad de imagenes: ");
    scanf("%d", &cant_img);
    printf("Ingrese el tamano promedio de imagenes en mb ");
    scanf("%f", &tam_img);

    printf("Ingrese la cantidad de videos: ");
    scanf("%d", &cant_vid);
    printf("Ingrese el tamano promedio de videos en mb ");
    scanf("%f", &tam_vid);

    printf("Ingrese la cantidad de programas: ");
    scanf("%d", &cant_prog);
    printf("Ingrese el tamano promedio de progrmas en mb ");
    scanf("%f", &tam_prog);

    printf("Ingrese la capacidad total del disco duro en gb ");
    scanf("%f", &cap_disco_gb);
    
    espacio_doc = cant_doc * tam_doc;
    espacio_img = cant_img * tam_img;
    espacio_vid = cant_vid * tam_vid;
    esapcio_prog= cant_prog * tam_prog;

    espacion_total_mb = espacio_doc + espacio_img + espacio_vid + esapcio_prog;
    espacio_total_gb = espacion_total_mb/1024;
    porcentaje = (espacio_total_gb/cap_disco_gb)*100;

    printf("Espacio en documentos: %.2f \n ", espacio_doc, "MB");
    printf("Espacio en imagenes: %.2f \n", espacio_img, "MB");
    printf("Espacio en videos: %.2f \n", espacio_vid, "MB");
    printf("Espacio en programas: %.2f \n", esapcio_prog, "MB");
    printf("Espacio total utilizado en MB: %.2f MB\n", espacion_total_mb);
    printf("Espacio total utilizado en GB: %.4f GB \n", espacio_total_gb);
    printf("Porcentaje del disco utilizado: %.2f \n ", porcentaje);
    return 0; 
}