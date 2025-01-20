#include <stdio.h>

int main(void){
    int m=300;
    float f=300.60006;
    char cht='z';

    printf("Dirección de la variable m: %p\n", &m);
    printf("Dirección de la variable f: %p\n", &f);
    printf("Dirección de la variable cht: %p\n", &cht);

    int *ptr;
    ptr = &m;
    printf("Contenido de el puntero %i\n", *ptr);

    return 0;
}