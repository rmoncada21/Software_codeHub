// Llamadas a las funciones de gestión de memoria 
// Casting

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){
    struct celda *celda_ptr;
    /* 
        Devuelve ptr a tipo void* 
        por eso se hace un cast para devolver
        un puntero a tipo struct
    */
    celda_ptr = (struct celda*)malloc(sizeof(struct celda));
    
    /*
        *El casting (struct cell) hace que la asignación sobre 
        la variable celda_ptr se haga como si la dirección de
        memoria fuese de este tipo, y por tanto es correcta.
    */

    (*celda_ptr).a = 10;
    (*celda_ptr).b = 15;
    celda_ptr->tabla[0]=0;
    return 0;
}