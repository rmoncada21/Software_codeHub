// Situación típica en el uso de arreglos de memoria
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){
    struct contacto *agenda;
    agenda = (struct contacto*)calloc(100, sizeof(struct contacto));
    for (int i = 0; i < 100; i++)
    {
        agenda[i].nombre = (char *)malloc(10);
        agenda[i].apellido = (char *)malloc(30);
        (*agenda).edad = 0;
    }
    free(agenda);
    return 0;
}

/*

Al terminar el bucle, la llamada free(agenda) libera el
espacio reservado para la tabla, pero no el que se ha reservado 
para las cadenas de texto de cada uno de sus elementos. 

La forma correcta de liberar la estructura es igualmente con 
un bucle que atraviese la tabla y libere cada campo por 
separado con una llamada a free.

*/