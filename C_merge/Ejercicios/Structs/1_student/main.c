#include <stdio.h>
#include "student.h"

#define NOMBRE_SIZE 50

int main(void){
    // typedef struct estudiante estudiante_t;
    estudiante_t estA, estB;

    estA=crear_estudiante();
    estB=crear_estudiante();

    mostrar_estudiante(estA);
    mostrar_estudiante(estB);

    return 0;
}