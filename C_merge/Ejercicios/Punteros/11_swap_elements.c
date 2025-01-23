#include <stdio.h>
#include <stdlib.h>

int swap(int*, int*);

int swap(int* element1, int* element2){
    int* temp;

    printf("Contenido antes del cambio: elemento1:%i - elemento2:%i\n", 
            *element1, *element2);

    *element1=*temp;
    *element1=*element2;
    *element2=*temp;

    printf("Contenido después del cambio: elemento1:%i - elemento2:%i\n", 
            *element1, *element2);
}

int main(int argc, char* argv[]){
    int ptr_element1, ptr_element2;

    ptr_element1=atoi(argv[1]);
    ptr_element2=atoi(argv[2]);

    swap(&ptr_element1, &ptr_element2);
}