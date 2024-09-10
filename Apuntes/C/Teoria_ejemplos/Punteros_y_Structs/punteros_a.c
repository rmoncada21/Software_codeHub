// Indirección
#include <stdio.h>
#include "struct.h"

int main(){
    // campos para estructuras
    type_Data new_type_data;
    struct Data new_data;
    d1.n1 = 2;
    //
    float size = sizeof(d1);
    printf("Tamaño de la estructura: %f \n",size );

    // Direcciones de memorias
    type_Data *puntero_type_data;

    puntero_type_data = &new_type_data;
    (*puntero_type_data).n1 = 10;
    printf("Dirección: %p \n", puntero_type_data);

    // Acceder al contenido de la direción sería
    printf("Dirección: %p \n", puntero_type_data);

}