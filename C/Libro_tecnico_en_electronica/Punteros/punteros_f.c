// Punteros a punteros
#include <stdio.h>

int main(){
    int i;
    int *puntero_i;
    int **puntero_puntero_i;

    puntero_i = &i;
    puntero_puntero_i = &puntero_i;

    i = 10;
    *puntero_i = 20;
    *(*puntero_puntero_i) = *puntero_i;
    *(*puntero_puntero_i) = 30;
    printf("entero i: %i \n", i);
    printf("contenido de *(*puntero_puntero_i): %i", *(*puntero_puntero_i));
}