// Punteros a estructuras como paramétros 
#include <stdio.h>
#include <math.h>
#include "struct.h"

float distancia(struct coordenadas*, struct coordenadas*);
float distancia2(struct coordenadas*, struct coordenadas*);
float distancia2(struct coordenadas*, struct coordenadas*);

/* Definición de función que calcula la distancia entre dos puntos */
float distancia(struct coordenadas *a, struct coordenadas *b){
    return sqrtf(pow((*a).x - (*b).x, 2.0) +
                 pow((*a).y - (*b).y, 2.0) +
                 pow((*a).z - (*b).z, 2.0));
}

float distancia2(struct coordenadas *a, struct coordenadas *b){
    return sqrtf(pow(a->x - b->x, 2.0) +
                 pow(a->y - b->y, 2.0) +
                 pow(a->z - b->z, 2.0));
}

float distancia3(struct coordenadas *a, struct coordenadas *b){
    return sqrtf(pow((*a).x - (*b).x, 2.0) +
                 pow((*a).y - (*b).y, 2.0) +
                 pow((*a).z - (*b).z, 2.0));
}

int main(){
    /* Declaración e inicialización de dos variables */
    struct coordenadas punto_a = {3.5e-120, 2.5, 1.5};
    struct coordenadas punto_b = {5.3e-120, 3.1, 6.3};
    struct coordenadas *ptr_punto_a = &punto_a;
    struct coordenadas *ptr_punto_b = &punto_b;
    float d; /* Almacenar el resultado */
    float d2; /* Almacenar el resultado */
    float d3; /* Almacenar el resultado */
    /* Llamada a la función con las dos estructuras */
    d = distancia(&punto_a, &punto_b);
    d2 = distancia2(&punto_a, &punto_b);
    d3 = distancia2(ptr_punto_a, ptr_punto_b);
    /* Imprimir el resultado */
    printf("%f\n", d);
    printf("%f\n", d2);
    printf("%f\n", d3);
    return 0;
}