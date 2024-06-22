// Arreglos a partir de estructuras usando malloc
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

#define ARREGLO_SIZE 3

int main(){
    struct celda *vector_celdas=malloc(sizeof(struct celda)*ARREGLO_SIZE);
    // Manejar como si se tratase de una arreglo mas
    // vector_celdas == &vector_celdas[0]
    vector_celdas[0].a = 0;
    vector_celdas[1].a = 1;
    vector_celdas[2].a = 2;

    printf("vector_celdas[0].a: %i\n", vector_celdas[0].a);
    printf("vector_celdas[1].a: %i\n", vector_celdas[1].a);
    printf("vector_celdas[2].a: %i\n", vector_celdas[2].a);

}