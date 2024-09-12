#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){
    struct celda *celda_ptr=malloc(sizeof(struct celda));
    (*celda_ptr).a = 1;
    (*celda_ptr).b = 2;
    (*celda_ptr).tabla[0] = 3;
    celda_ptr->a = 25;
    printf("a:%i\n", (*celda_ptr).a);
    printf("b:%i\n", (*celda_ptr).b);
    printf("tabla[0]:%i\n", (*celda_ptr).tabla[0]);
    free(celda_ptr);
    return 0;
}