// Enlace entre estructuras usando punteros
#include <stdio.h>
// Para poder usar malloc se necesita
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void inicilizar_struct_mapa2(struct mapa2*);

int main(){
    /* No se puede inicializar una estructura de esta forma en modo puntero */
    // struct mapa2 *mapa={"mapa2", {1,1,1}};
    struct mapa2 *mapa = malloc(sizeof(struct mapa2));

    inicilizar_struct_mapa2(mapa);

    printf("nombre: %s \n", mapa->nombre_mapa);
    printf("nombre: %f \n", mapa->puntos->x);
    printf("nombre: %f \n", mapa->puntos->y);
    printf("nombre: %f \n", mapa->puntos->z);
    
}


void inicilizar_struct_mapa2(struct mapa2 *mapa){
    strcpy(mapa->nombre_mapa, "nuevo");

    // Para poder usar la struct coordenadas debo generar espacio con malloc
    mapa->puntos = malloc(sizeof(struct coordenadas));
    mapa->puntos->x = 1;
    mapa->puntos->y = 2;
    mapa->puntos->z = 3;
    
    // strcpy((*mapa).nombre_mapa, "mapa2");
    // (*mapa).puntos->x = 1;
    // (*mapa).puntos->y = 2;
    // (*mapa).puntos->z = 3;

}