// Enlaces entre estructuras usando las misms estructuras
#include <stdio.h>
#include <string.h>
#include "struct.h"

struct mapa acces_mapa_data(struct mapa);
type_Data acces_mapa_data_type(type_Data mapa);

int main(){
    struct mapa mapa1={"ccc",{1,1,1}};
    type_Data new_data;
    new_data.n1=0;
    new_data.n2=1;
    strcpy(new_data.st, "new_data");
    acces_mapa_data(mapa1);
    acces_mapa_data_type(new_data);
}

struct mapa acces_mapa_data(struct mapa A){
    // Datos de mapa A
    printf("nombre: %s \n",A.nombre_mapa);
    printf("coordenas x=%f, y=%f, z=%f \n",A.puntos.x, A.puntos.y, A.puntos.z);
    struct mapa r = A;
    return r;
}

type_Data acces_mapa_data_type(type_Data A){
    // Datos de mapa A
    printf("valor: %i \n",A.n1);
    printf("valor: %f \n",A.n2);
    printf("nombre: %s \n",A.st);
    // type_Data r = A;
    return A;
}