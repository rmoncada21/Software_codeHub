#include <stdio.h>

int main(){
    int m=10;
    int n,o;
    int* z;

    // Z guarda la dirección de m
    z=&m;
    printf("Dirección de la variables m guardada en z: %p\n", z);
    printf("Contenido de la variable z: %i\n", *z);

    printf("Dirección de la variables m: %p\n", &m);
    printf("Dirección de la variables n: %p\n", &n);
    printf("Dirección de la variables o: %p\n", &o);
    printf("Dirección de la variables z: %p\n", &z);

    return 0;
}