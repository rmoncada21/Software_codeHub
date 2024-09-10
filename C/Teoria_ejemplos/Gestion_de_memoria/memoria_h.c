// Fuga de memoria
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(){
    // void *calloc(size_t nmembers, size_t size):
    struct celda *celda_ptr=calloc(3, sizeof(struct celda));
    printf("size %li\n",sizeof(struct celda));
    celda_ptr=NULL;
    int size = sizeof(celda_ptr);
    printf("size of celda_ptr %i\n", size);
}